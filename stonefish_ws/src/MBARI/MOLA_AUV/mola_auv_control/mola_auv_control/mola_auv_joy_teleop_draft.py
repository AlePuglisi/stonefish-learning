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

        # Joystick axis mapping
        self.forward_joy = 1   # Forward/backward (surge)
        self.side_joy = 0      # Left/right (sway)
        self.depth_joy = 4     # Up/down (heave)
        self.yaw_joy = 3       # Rotation around Z (yaw)
        self.pitch_joy = 7     # Pitch (if available, use D-pad)
        self.roll_joy = 6      # Roll (if available, use D-pad)

        # Thruster allocation matrix for 6-DOF control
        # Order: [Surge, Sway, Heave, Roll, Pitch, Yaw]
        # Each row represents one thruster's contribution
        
        # Trigonometric values for 50° tilt
        cos50 = np.cos(np.radians(50))  # ~0.643
        sin50 = np.sin(np.radians(50))  # ~0.766
        
        # Trigonometric values for azimuth angles
        cos140 = np.cos(np.radians(140))  # ~-0.766
        sin140 = np.sin(np.radians(140))  # ~0.643
        cos220 = np.cos(np.radians(220))  # ~-0.766
        sin220 = np.sin(np.radians(220))  # ~-0.643
        
        # Thruster positions (from base_link center)
        x_front = 0.301
        x_back = -0.301
        y_left = -0.180
        y_right = 0.180
        z_up = -0.112
        z_down = 0.112
        
        # Build allocation matrix
        # Format: [Fx, Fy, Fz, Tx, Ty, Tz] for each thruster
        self.allocation_mat = np.array([
            # T1 - LFU: pitch=-50°, yaw=-140° (pointing forward-left-down)
            [cos50 * cos140, cos50 * sin140, sin50, 
             y_left*sin50 - z_up*cos50*sin140, z_up*cos50*cos140 - x_front*sin50, x_front*cos50*sin140 - y_left*cos50*cos140],
            
            # T2 - LFD: pitch=50°, yaw=-140° (pointing forward-left-up)
            [cos50 * cos140, cos50 * sin140, -sin50, 
             y_left*(-sin50) - z_down*cos50*sin140, z_down*cos50*cos140 - x_front*(-sin50), x_front*cos50*sin140 - y_left*cos50*cos140],
            
            # T3 - RFU: pitch=-50°, yaw=-220° (pointing forward-right-down)
            [cos50 * cos220, cos50 * sin220, sin50, 
             y_right*sin50 - z_up*cos50*sin220, z_up*cos50*cos220 - x_front*sin50, x_front*cos50*sin220 - y_right*cos50*cos220],
            
            # T4 - RFD: pitch=50°, yaw=-220° (pointing forward-right-up)
            [cos50 * cos220, cos50 * sin220, -sin50, 
             y_right*(-sin50) - z_down*cos50*sin220, z_down*cos50*cos220 - x_front*(-sin50), x_front*cos50*sin220 - y_right*cos50*cos220],
            
            # T5 - LBU: pitch=50°, yaw=-220° (pointing back-left-up)
            [cos50 * cos220, cos50 * sin220, -sin50, 
             y_left*(-sin50) - z_up*cos50*sin220, z_up*cos50*cos220 - x_back*(-sin50), x_back*cos50*sin220 - y_left*cos50*cos220],
            
            # T6 - LBD: pitch=-50°, yaw=-220° (pointing back-left-down)
            [cos50 * cos220, cos50 * sin220, sin50, 
             y_left*sin50 - z_down*cos50*sin220, z_down*cos50*cos220 - x_back*sin50, x_back*cos50*sin220 - y_left*cos50*cos220],
            
            # T7 - RBU: pitch=50°, yaw=-140° (pointing back-right-up)
            [cos50 * cos140, cos50 * sin140, -sin50, 
             y_right*(-sin50) - z_up*cos50*sin140, z_up*cos50*cos140 - x_back*(-sin50), x_back*cos50*sin140 - y_right*cos50*cos140],
            
            # T8 - RBD: pitch=-50°, yaw=-140° (pointing back-right-down)
            [cos50 * cos140, cos50 * sin140, sin50, 
             y_right*sin50 - z_down*cos50*sin140, z_down*cos50*cos140 - x_back*sin50, x_back*cos50*sin140 - y_right*cos50*cos140]
        ]).T  # Transpose to get 6x8 matrix
        
        # Compute pseudo-inverse for optimal thrust allocation
        self.thrust_allocator = np.linalg.pinv(self.allocation_mat)
        
        self.get_logger().info('Joystick controller initialized')
        self.get_logger().info(f'Allocation matrix shape: {self.allocation_mat.shape}')

    def joy_callback(self, data: Joy):
        # Extract joystick values
        axes = data.axes
        buttons = data.buttons

        # Map joystick axes to 6-DOF commands
        # Invert axes as needed for intuitive control
        surge = -axes[self.forward_joy]     # Forward/backward
        sway = axes[self.side_joy]          # Left/right
        heave = axes[self.depth_joy]        # Up/down
        
        # Rotational commands
        roll = axes[self.roll_joy] if self.roll_joy < len(axes) else 0.0
        pitch = axes[self.pitch_joy] if self.pitch_joy < len(axes) else 0.0
        yaw = axes[self.yaw_joy]
        
        # Control vector [Surge, Sway, Heave, Roll, Pitch, Yaw]
        command_vector = np.array([surge, sway, heave, roll, pitch, yaw])
        
        # Calculate thruster setpoints using pseudo-inverse
        thruster_setpoints = self.thrust_allocator @ command_vector
        
        # Normalize if any thruster exceeds limits
        max_thrust = np.max(np.abs(thruster_setpoints))
        if max_thrust > 1.0:
            thruster_setpoints = thruster_setpoints / max_thrust
        
        # Publish thruster commands
        rov_control_msg = Float64MultiArray()
        rov_control_msg.data = thruster_setpoints.tolist()
        self.rov_control_pub.publish(rov_control_msg)
        
        # Optional: log for debugging
        # self.get_logger().info(f'Commands: S={surge:.2f}, Sw={sway:.2f}, H={heave:.2f}, Y={yaw:.2f}')


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