#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image

import numpy as np 
import os

import cv2

from cv_bridge import CvBridge

class ImageProcessing(Node):
    def __init__(self):
        super().__init__('bluerov2_optical_flow')

        # Initialize the TransformBroadcaster
        self.flow_image_publisher = self.create_publisher(Image, 'bluerov/estimation/fls/optical_flow', 10)
        
        # Subscriptions
        self.subscription_thruster_state = self.create_subscription(
            Image,
            '/bluerov/fls/display',
            self.fls_image_callback,
            10
        )

        self._cv_bridge = CvBridge()

        self.old_gray = None
        self.frame_gray = None
        self.rescale_factor = 0.5

        self.get_logger().info('MOLA AprilTag Estimation Node Initialized')
    


    def fls_image_callback(self, fls_img_msg:Image):

        flow_fls_img_msg = Image()

        try: 
            cv_image = self._cv_bridge.imgmsg_to_cv2(fls_img_msg, desired_encoding='bgr8')
        except Exception as e: 
            self.get_logger().error(f"Error converting image: {e}")
            return
        
        # Downsample for detection
        # scale_factor = 0.5
        # cv_image = cv2.resize(cv_image, None, fx=self.rescale_factor, fy=self.rescale_factor, interpolation=cv2.INTER_AREA)
        gray_img = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

        if self.old_gray is None: 
            self.old_gray = gray_img.copy()
            return
        
        self.frame_gray = gray_img.copy()

        flow = cv2.calcOpticalFlowFarneback(
            self.old_gray, self.frame_gray, 
            None,
            pyr_scale=0.5,      # Pyramid scale
            levels=3,            # Number of pyramid layers
            winsize=10,          # Averaging window size
            iterations=3,        # Number of iterations at each pyramid level
            poly_n=5,            # Size of pixel neighborhood
            poly_sigma=1.2,      # Standard deviation for Gaussian
            flags=0
        )

        # Create a copy of the frame to draw arrows on
        flow_img = cv2.cvtColor(self.frame_gray, cv2.COLOR_GRAY2BGR)

        # Set step size for the vector field (sample every N pixels)
        step = 20
        h, w = self.frame_gray.shape
        y, x = np.mgrid[step//2:h:step, step//2:w:step].reshape(2, -1).astype(int)

        for i in range(len(x)):
            xi, yi = x[i], y[i]
            # Get flow at this point
            dx, dy = flow[yi, xi]
            
            # Only draw if motion is significant (threshold to reduce clutter)
            magnitude = np.sqrt(dx**2 + dy**2)
            if magnitude > 0.5:  # Adjust threshold as needed
                # Calculate end point of arrow
                x_end = int(xi + dx)
                y_end = int(yi + dy)
                
                # Draw blue arrow
                cv2.arrowedLine(flow_img, (xi, yi), (x_end, y_end), 
                                (0, 255, 0),  # Blue color (BGR format)
                                thickness=2, 
                                tipLength=0.3)
                    
        self.old_gray = self.frame_gray.copy()

        # Convert the OpenCV image back into a sensor_msgs/Image
        flow_fls_img_msg = self._cv_bridge.cv2_to_imgmsg(flow_img, encoding="bgr8")
        flow_fls_img_msg.header = fls_img_msg.header

        self.flow_image_publisher.publish(flow_fls_img_msg)

    def destroy_node(self):
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = ImageProcessing()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
