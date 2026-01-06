#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Float64MultiArray
import numpy as np

from std_srvs.srv import SetBool

class JoystickController(Node):
    def __init__(self):
        super().__init__('joystick_controller')
        
        # Set up publishers and subscribers
        self.joy_sub = self.create_subscription(Joy, '/joy', self.joy_callback, 10)
        self.rov_control_pub = self.create_publisher(Float64MultiArray, '/bluerov/controller/thruster_setpoints_sim', 10)

        self.lightLD_switch_cli = self.create_client(SetBool, '/bluerov/lights/ld')
        self.lightLU_switch_cli = self.create_client(SetBool, '/bluerov/lights/lu')
        self.lightRD_switch_cli = self.create_client(SetBool, '/bluerov/lights/rd')
        self.lightRU_switch_cli = self.create_client(SetBool, '/bluerov/lights/ru')

        # Wait for services to be available
        while not self.lightLD_switch_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for light LD service...')
        while not self.lightLU_switch_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for light LU service...')
        while not self.lightRD_switch_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for light RD service...')
        while not self.lightRU_switch_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for light RU service...')
        
        self.get_logger().info('Both light services are available')

        # Track light state for toggling
        self.lights_on = False
        self.share_button_pressed = False  # For edge detection

        # PS4 Joypad 
        # Axes Index        
        self.axes_index_ = {
            "analog_left_LR":  0,   # left analog stick        ( Left = +1 | Right = -1 )
            "analog_left_UD":  1,   # left analog stick        ( Up   = +1 | Down  = -1 )
            "analog_right_LR": 3,   # right analog stick       ( Left = +1 | Right = -1 )
            "analog_right_UD": 4,   # right analog stick       ( Up   = +1 | Down  = -1 )
            "arrow_LR": 6,          # arrow buttons left/right ( Left = +1 | Right = -1 )
            "arrow_UD": 7           # arrow buttons up/down    ( Up   = +1 | Down  = -1 )
        }

        # Buttons Index 
        self.buttons_index_ = {
            "x":        0,
            "circle":   1,
            "triangle": 2,
            "square":   3,
            "L1":       4,
            "R1":       5,  
            "L2":       6,
            "R2":       7,
            "share":    8,
            "options":  9,
            "ps":       10,
            "L3":       11,
            "R3":       12
        }

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

    def toggle_lights(self):
        """Toggle lights on/off by calling both service clients"""
        # Toggle state
        self.lights_on = not self.lights_on
        
        # Create service request
        request = SetBool.Request()
        request.data = self.lights_on
        
        # Call left light service asynchronously
        future_leftUp = self.lightLU_switch_cli.call_async(request)
        future_leftUp.add_done_callback(self.light_leftUp_callback)

        future_leftDown = self.lightLD_switch_cli.call_async(request)
        future_leftDown.add_done_callback(self.light_leftDown_callback)
        
        # Call right light service asynchronously
        future_rightUp = self.lightRU_switch_cli.call_async(request)
        future_rightUp.add_done_callback(self.light_rightUp_callback)

        future_rightDown = self.lightRD_switch_cli.call_async(request)
        future_rightDown.add_done_callback(self.light_rightDown_callback)
        
        self.get_logger().info(f'Toggling lights {"ON" if self.lights_on else "OFF"}')

    def light_leftUp_callback(self, future):
        """Callback for left light service response"""
        try:
            response = future.result()
            if response.success:
                self.get_logger().debug(f'Left Up light: {response.message}')
            else:
                self.get_logger().warn(f'Left Up light failed: {response.message}')
        except Exception as e:
            self.get_logger().error(f'Left Up light service call failed: {str(e)}')

    def light_leftDown_callback(self, future):
        """Callback for left light service response"""
        try:
            response = future.result()
            if response.success:
                self.get_logger().debug(f'Left Down light: {response.message}')
            else:
                self.get_logger().warn(f'Left Down light failed: {response.message}')
        except Exception as e:
            self.get_logger().error(f'Left Down light service call failed: {str(e)}')

    def light_rightUp_callback(self, future):
        """Callback for right light service response"""
        try:
            response = future.result()
            if response.success:
                self.get_logger().debug(f'Right Up light: {response.message}')
            else:
                self.get_logger().warn(f'Right Up light failed: {response.message}')
        except Exception as e:
            self.get_logger().error(f'Right Up light service call failed: {str(e)}')

    def light_rightDown_callback(self, future):
        """Callback for right light service response"""
        try:
            response = future.result()
            if response.success:
                self.get_logger().debug(f'Right Down light: {response.message}')
            else:
                self.get_logger().warn(f'Right Down light failed: {response.message}')
        except Exception as e:
            self.get_logger().error(f'Right Down light service call failed: {str(e)}')


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

        # Handle SHARE button for toggling lights (edge detection)
        share_button_state = buttons[self.buttons_index_["share"]] == 1
        if share_button_state and not self.share_button_pressed:
            # Button just pressed (rising edge)
            self.toggle_lights()
        self.share_button_pressed = share_button_state

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
