#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Float64MultiArray
import numpy as np

class WeightedJoystickController(Node):
    """
    Joystick controller using weighted pseudo-inverse to account for 
    drastically different inertias in roll vs pitch/yaw
    """
    def __init__(self):
        super().__init__('weighted_joystick_controller')
        
        self.joy_sub = self.create_subscription(Joy, '/joy', self.joy_callback, 10)
        self.rov_control_pub = self.create_publisher(
            Float64MultiArray, 
            '/mola_auv/controller/thruster_setpoints_sim', 
            10
        )

        # Joystick mapping
        self.forward_joy = 1
        self.side_joy = 0
        self.depth_joy = 4
        self.yaw_joy = 3
        self.pitch_joy = 7
        self.roll_joy = 6
        
        self.deadzone = 0.05
        
        # Build allocation matrix and compute weighted pseudo-inverse
        self.build_allocation_matrix()
        
        self.get_logger().info('Weighted joystick controller initialized')
        self.get_logger().info(f'Using inertia-based weighting')

    def build_allocation_matrix(self):
        """Build 6x8 thruster allocation matrix"""
        
        # Thruster configuration: [x, y, z, pitch_deg, yaw_deg]
        thrusters = [
            [0.300974, -0.180592, -0.111517, -50, -140],  # T1_LFU
            [0.301507, -0.179797, 0.11253,  50, -140],  # T2_LFD
            [0.301501, 0.179798, -0.112534, -50, -220],  # T3_RFU
            [0.301502, 0.179799, 0.112534,  50, -220],  # T4_RFD
            [-0.300971, -0.18059, -0.111509,  50, -220], # T5_LBU
            [-0.300977, -0.180591, 0.111514, -50, -220], # T6_LBD
            [-0.3015, 0.179797, -0.112526,  50, -140], # T7_RBU
            [-0.301502, 0.17979, 0.112529, -50, -140], # T8_RBD
        ]
        
        B = np.zeros((6, 8))
        
        for i, (x, y, z, pitch_deg, yaw_deg) in enumerate(thrusters):
            pitch = np.radians(pitch_deg)
            yaw = np.radians(yaw_deg)
            
            # Thrust direction
            fx = np.cos(pitch) * np.cos(yaw)
            fy = np.cos(pitch) * np.sin(yaw)
            fz = np.sin(pitch)
            
            # Torque
            tx = y * fz - z * fy
            ty = z * fx - x * fz
            tz = x * fy - y * fx
            
            B[:, i] = [fx, fy, fz, tx, ty, tz]
        
        self.B = B
        
        # YOUR ACTUAL INERTIA VALUES (from the simulation)
        mass = 30.0  # kg
        Ixx = 0.823  # Roll inertia (VERY LOW!)
        Iyy = 8.820  # Pitch inertia
        Izz = 10.305 # Yaw inertia
        
        # Create weighting matrix that normalizes by inertia
        # This makes commands of equal magnitude produce equal angular accelerations
        # W scales each DOF by sqrt(inertia) so that all DOFs are balanced
        
        # For forces, use mass
        # For torques, use moment of inertia
        W = np.diag([
            1.0 / np.sqrt(mass),      # Surge (force)
            1.0 / np.sqrt(mass),      # Sway (force)
            1.0 / np.sqrt(mass),      # Heave (force)
            1.0 / np.sqrt(Ixx),       # Roll (torque) - LARGE weight due to small Ixx
            1.0 / np.sqrt(Iyy),       # Pitch (torque)
            1.0 / np.sqrt(Izz)        # Yaw (torque)
        ])
        
        # Compute weighted pseudo-inverse: B_weighted^+ = B^T * W^2 * (B * B^T * W^2)^-1
        # Simpler form: (W*B)^+
        BW = W @ B
        self.B_pinv = np.linalg.pinv(BW)
        
        # Log the weighting ratios
        self.get_logger().info(f'Weighting factors:')
        self.get_logger().info(f'  Roll weight / Pitch weight = {np.sqrt(Iyy/Ixx):.2f}x')
        self.get_logger().info(f'  Roll weight / Yaw weight = {np.sqrt(Izz/Ixx):.2f}x')
        self.get_logger().info(f'This compensates for low roll inertia')

    def apply_deadzone(self, value):
        if abs(value) < self.deadzone:
            return 0.0
        sign = 1 if value > 0 else -1
        return sign * (abs(value) - self.deadzone) / (1.0 - self.deadzone)

    def joy_callback(self, data: Joy):
        axes = data.axes
        
        # Extract commands
        surge = self.apply_deadzone(-axes[self.forward_joy])
        sway = self.apply_deadzone(axes[self.side_joy])
        heave = self.apply_deadzone(axes[self.depth_joy])
        roll = self.apply_deadzone(axes[self.roll_joy]) if self.roll_joy < len(axes) else 0.0
        pitch = self.apply_deadzone(axes[self.pitch_joy]) if self.pitch_joy < len(axes) else 0.0
        yaw = self.apply_deadzone(axes[self.yaw_joy])
        
        # Command vector [Surge, Sway, Heave, Roll, Pitch, Yaw]
        command_vector = np.array([surge, sway, heave, roll, pitch, yaw])
        
        # Calculate thruster setpoints using weighted pseudo-inverse
        thruster_setpoints = self.B_pinv @ command_vector
        
        # Normalize if needed
        max_thrust = np.max(np.abs(thruster_setpoints))
        if max_thrust > 1.0:
            thruster_setpoints = thruster_setpoints / max_thrust
        
        # Publish
        msg = Float64MultiArray()
        msg.data = thruster_setpoints.tolist()
        self.rov_control_pub.publish(msg)
        
        # Debug
        if np.any(np.abs(command_vector) > 0.01):
            self.get_logger().info(
                f'CMD: Surge={surge:.2f} Sway={sway:.2f} Heave={heave:.2f} '
                f'Roll={roll:.2f} Pitch={pitch:.2f} Yaw={yaw:.2f} | Max thrust={max_thrust:.2f}'
            )


def main(args=None):
    rclpy.init(args=args)
    controller = WeightedJoystickController()
    
    try:
        rclpy.spin(controller)
    except KeyboardInterrupt:
        pass
    finally:
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()