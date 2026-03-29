#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from tf2_ros import TransformBroadcaster
from nav_msgs.msg import Odometry
from rclpy.qos import QoSProfile
from tf_transformations import euler_from_quaternion, quaternion_from_euler
import numpy as np

from geometry_msgs.msg import TransformStamped, Quaternion

import cv2
from sensor_processing import sonar_optical_flow_pose

from cv_bridge import CvBridge

class ImageProcessing(Node):
    def __init__(self):
        super().__init__('bluerov2_optical_flow')

        # Initialize the Image Publisher
        self.flow_image_publisher = self.create_publisher(Image, 'bluerov/estimation/fls/optical_flow', 10)
        
        # Subscriptions
        self.subscription_fls_image = self.create_subscription(
            Image,
            '/bluerov/fls/display',
            self.fls_image_callback,
            10
        )

        self._cv_bridge = CvBridge()

        self.old_gray = None
        self.frame_gray = None
        self.rescale_factor = 1.0

        self.flow_pose = sonar_optical_flow_pose.SonarOpticalFlowRansacPose(
                         max_range=15, 
                         max_aperture_deg=130,
                         height=100, 
                         width=100,
                         min_magnitude=10, 
                         n_points=30, 
                         threshold=3, 
                         max_iter=50)

    

        self.flow_pose_tf_broadcaster = TransformBroadcaster(self)
        self.x = 0.0
        self.y = 0.0
        self.z = 0.0
        self.th = 0.0

        self.W_T_S = np.eye(3)

        qos_profile = QoSProfile(depth=10)
        self.odom_subscription = self.create_subscription(
            Odometry,
            '/bluerov/navigator/odometry',
            self.odom_init_callback,
            qos_profile)
        
        self.get_logger().info('BlueRov FLS Optical Flow Ego-Motion Estimation Node Initialized')
    

    def odom_init_callback(self, msg):
        self.x = msg.pose.pose.position.x
        self.y = msg.pose.pose.position.y
        self.z = msg.pose.pose.position.z

        (roll,pitch,yaw) = euler_from_quaternion([msg.pose.pose.orientation.x,
                                                 msg.pose.pose.orientation.y,
                                                 msg.pose.pose.orientation.z,
                                                 msg.pose.pose.orientation.w])
        self.th = yaw

        self.W_T_S = self.flow_pose.compute_S2_to_S1_transform(self.x, self.y, self.th)

        # Destroy init subscription after first message
        self.destroy_subscription(self.odom_subscription)
        self.odom_subscription = None
        
        qos_profile = QoSProfile(depth=10)
        self.odom_subscription = self.create_subscription(
            Odometry,
            '/bluerov/navigator/odometry',
            self.odom_callback,
            qos_profile)

        self.get_logger().info("Odometry initialized and subscription destroyed.")

    def odom_callback(self, msg):
        self.z = msg.pose.pose.position.z

        # (roll,pitch,yaw) = euler_from_quaternion([msg.pose.pose.orientation.x,
        #                                          msg.pose.pose.orientation.y,
        #                                          msg.pose.pose.orientation.z,
        #                                          msg.pose.pose.orientation.w])
        # self.th = yaw

    def se2_to_transform_stamped(self, T: np.ndarray, stamp, frame_id: str, child_frame_id: str, z: float = 0.0) -> TransformStamped:
        t = TransformStamped()
        t.header.stamp = stamp
        t.header.frame_id = frame_id
        t.child_frame_id = child_frame_id

        # Extract translation directly from last column
        t.transform.translation.x = float(T[0, 2])
        t.transform.translation.y = float(T[1, 2])
        t.transform.translation.z = float(z)

        # Extract yaw from rotation matrix: th = atan2(sin, cos)
        yaw = np.arctan2(T[1, 0], T[0, 0])  # atan2(R[1,0], R[0,0])

        qx, qy, qz, qw = quaternion_from_euler(0.0, 0.0, yaw)
        t.transform.rotation = Quaternion(x=float(qx), y=float(qy), z=float(qz), w=float(qw))

        return t
    
    def fls_image_callback(self, fls_img_msg:Image):

        flow_fls_img_msg = Image()

        try: 
            cv_image = self._cv_bridge.imgmsg_to_cv2(fls_img_msg, desired_encoding='bgr8')
        except Exception as e: 
            self.get_logger().error(f"Error converting image: {e}")
            return

        # Convert to grayscale first, then resize — always
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        gray_resized = cv2.resize(gray, None, fx=self.rescale_factor, fy=self.rescale_factor,
                                interpolation=cv2.INTER_AREA)
    
        if self.old_gray is None: 
            self.old_gray = gray_resized.copy()
            # Also update flow_pose shape on first frame
            if self.flow_pose.width != self.old_gray.shape[1]:
                self.flow_pose.set_image_shape(self.old_gray)
            return

        self.frame_gray = gray_resized  

        x_optim = self.flow_pose.estimate_2d_flow_motion(self.old_gray, self.frame_gray)

        dx = x_optim[0]
        dy = x_optim[1]
        dth = x_optim[2]

        dth_deg = dth * 180 / np.pi
        print(f"Estimated Motion: dx={dx:.4f} m, dy={dy:.4f} m, dth={dth_deg:.4f} deg")

        # Broadcasting pose 
        # self.x += dx
        # self.y += dy
        # self.th += dth
        
        S1_T_S2 = self.flow_pose.compute_S2_to_S1_transform(dx, dy, dth)
        self.W_T_S = self.W_T_S @ S1_T_S2


        sonar_flow_transform = self.se2_to_transform_stamped(
            self.W_T_S,
            stamp=fls_img_msg.header.stamp,
            frame_id='world_ned',
            child_frame_id='sonar_2d_flow',
            z=self.z  # from odometry
        )
        self.flow_pose_tf_broadcaster.sendTransform(sonar_flow_transform)
        # sonar_flow_transform = TransformStamped()

        # sonar_flow_transform.header.stamp = fls_img_msg.header.stamp
        # sonar_flow_transform.header.frame_id = 'world_ned'
        # sonar_flow_transform.child_frame_id = 'sonar_2d_flow'
        # # translation (dx,dy)
        # sonar_flow_transform.transform.translation.x = self.x 
        # sonar_flow_transform.transform.translation.y = self.y
        # sonar_flow_transform.transform.translation.z = self.z
        # # rotation (dth + yaw)
        # qx, qy, qz, qw = quaternion_from_euler(0.0, 0.0, self.th)

        # sonar_flow_transform.transform.rotation = Quaternion(
        #     x=qx,
        #     y=qy,
        #     z=qz,
        #     w=qw
        # )

        # self.flow_pose_tf_broadcaster.sendTransform(sonar_flow_transform)

        # Create a copy of the frame to draw arrows on
        flow_img = cv2.cvtColor(self.frame_gray, cv2.COLOR_GRAY2BGR)

        # Set step size for the vector field (sample every N pixels)
        step = 10
        h, w = self.frame_gray.shape
        y, x = np.mgrid[step//2:h:step, step//2:w:step].reshape(2, -1).astype(np.int32)

        for i in range(len(x)):
            xi, yi = x[i], y[i]
            # Get flow at this point
            dx, dy = self.flow_pose.cv_flow[yi, xi]
            
            # Only draw if motion is significant (threshold to reduce clutter)
            magnitude = np.sqrt(dx**2 + dy**2)
            if magnitude > self.flow_pose.min_magnitude:  # Adjust threshold as needed
                # Calculate end point of arrow
                x_end = int(xi + dx)
                y_end = int(yi + dy)
                
                # Draw blue arrow
                cv2.arrowedLine(flow_img, (xi, yi), (x_end, y_end), 
                                (0, 255, 0),  # Blue color (BGR format)
                                thickness=2, 
                                tipLength=0.3)
                    
        self.old_gray = self.frame_gray.copy()

        # # Convert the OpenCV image back into a sensor_msgs/Image
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
