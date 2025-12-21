#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Float64MultiArray
import numpy as np

class JoystickController(Node):
    def __init__(self):
        super().__init__('joystick_controller')
        
        # Set up publishers and subscribers
        self.joy_sub = self.create_subscription(Joy, '/joy', self.joy_callback, 10)
        self.rov_control_pub = self.create_publisher(Float64MultiArray, '/mola_auv/controller/thruster_setpoints_sim', 10)

        # Specify which joystick controls vertical and horizontal motion
        self.depth_joy = 4  # Assuming left analog stick
        self.side_joy = 0   # Assuming left analog stick
        self.forward_joy = 1  # Assuming right analog stick
        self.rotation_joy = 3  # Assuming right analog stick

        # Allocation matrix for thruster control
        self.allocation_mat = np.array([
            [1, 1, 1, 0],
            [1, -1 ,-1 ,0],
            [-1, 1, -1, 0],
            [-1, -1, 1, 0],
            [0, 0, 0, 1],
            [0, 0, 0, -1],
            [0, 0, 0, -1],
            [0, 0, 0, 1]
        ])


    def joy_callback(self, data: Joy):
        # Extract joystick values
        axes = data.axes
        buttons = data.buttons

        # Map joystick axes to movement commands
        depth_com = axes[self.depth_joy]
        side_com = axes[self.side_joy]
        rotation_com = axes[self.rotation_joy]
        forward_com = axes[self.forward_joy]
        # Control commands
        com = np.array([forward_com, side_com, rotation_com, depth_com]).T
        rov_control_msg = Float64MultiArray()
        rov_control_msg.data = (self.allocation_mat @ com).tolist()  # Convert to list

        # Normalize thruster commands if any value exceeds 1
        max_thuster_cmd = abs(max(rov_control_msg.data, key=abs))
        if max_thuster_cmd > 1:
           rov_control_msg.data = [x / max_thuster_cmd for x in rov_control_msg.data]

        # Publish the control message
        self.rov_control_pub.publish(rov_control_msg)


def main(args=None):
    rclpy.init(args=args)
    joystick_controller = JoystickController()
    
    try:
        rclpy.spin(joystick_controller)
    except KeyboardInterrupt:
        pass
    finally:
        joystick_controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
