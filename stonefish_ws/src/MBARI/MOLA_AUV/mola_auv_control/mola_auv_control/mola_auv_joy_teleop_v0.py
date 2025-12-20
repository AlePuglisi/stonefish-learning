#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Float64MultiArray

class JoystickController(Node):
    def __init__(self):
        super().__init__('joystick_controller')

        # Set up publishers and subscribers
        self.joy_sub = self.create_subscription(Joy, '/joy', self.joy_callback, 10)
        self.rov_control_pub = self.create_publisher(Float64MultiArray, '/mola_auv/controller/thruster_setpoints_sim', 10)

        # Axis Index 

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

        self.deadzone_threshold_ = 0.1



        # Initialize the last joystick ID
        self.last_joystick_id = None

        self.depth_control_mode = False

    # def is_inside_deadzone(self, axes):
        
    #     for state in axes: 
    #         if state > -self.deadzone_threshold_ and state < self.deadzone_threshold_:
    #             return False
            
    #     return True

    def joy_callback(self, data):
        # Extract joystick values
        axes = data.axes
        buttons = data.buttons

        #self.get_logger().info(f"axes:    {axes}")
        #self.get_logger().info(f"buttons: {buttons}")

        rov_control_msg = Float64MultiArray()
        rov_control_msg.data = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0,0.0,0.0]  # Adjust as needed
        
        # Check if options is pressed 
        if buttons[self.buttons_index_["options"]]:
            # Special case: R2 and L2 pressed simultaneously
            if self.depth_control_mode:
                self.depth_control_mode = False
                self.get_logger().info("DEPTH CONTROL MODE DISABLED!")
            else:
                self.get_logger().info("DEPTH CONTROL MODE ENABLED!")
                rov_control_msg.data = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0,0.0,0.0]  # Adjust as needed
                self.depth_control_mode = True

        elif axes[self.axes_index_["arrow_UD"]] == 1 :
            rov_control_msg.data = [
                    1.0,
                    1.0,
                    -1.0,
                    -1.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0
                ]
        elif axes[self.axes_index_["arrow_UD"]] == -1 :
            rov_control_msg.data = [
                    -1.0,
                    -1.0,
                    1.0,
                    1.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0
                ]
                      
        elif buttons[self.buttons_index_["L2"]] and buttons[self.buttons_index_["R2"]]:
            rov_control_msg.data = [
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    -1.0,
                    -1.0,
                    -1.0,
                    -1.0
                ]
        elif buttons[self.buttons_index_["L1"]] and buttons[self.buttons_index_["R1"]]:
            rov_control_msg.data = [
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    1.0,
                    1.0,
                    1.0,
                    1.0
                ]
        else:
            # Map left analog stick to vertical motion (up/down) and horizontal motion (left/right)
            vertical         = axes[self.axes_index_["analog_left_UD"]] 
            horizontal       = axes[self.axes_index_["analog_left_LR"]] 
            side             = axes[self.axes_index_["analog_right_LR"]]  
            forward_backward = axes[self.axes_index_["analog_right_UD"]]*(-1) 

            depth = 0

            if self.depth_control_mode or forward_backward != 0 or side != 0:
                depth = 0.0
            else:
                depth = vertical * (-1)

            # Create a Float64MultiArray message with 8 values
            if side < -self.deadzone_threshold_ or horizontal < -self.deadzone_threshold_:
                rov_control_msg.data = [
                    horizontal,
                    side*(-1),
                    forward_backward,
                    horizontal * (-1) + side + forward_backward,
                    depth*(-1),
                    depth,
                    depth,
                    depth*(-1)
                ]
            elif side > self.deadzone_threshold_ or horizontal > self.deadzone_threshold_:
                rov_control_msg.data = [
                    side,
                    horizontal*(-1) ,
                    horizontal + (-1) * side + forward_backward,
                    forward_backward,
                    depth*(-1),
                    depth,
                    depth,
                    depth*(-1)
                ]

        self.get_logger().info(f"Publishing: {rov_control_msg.data}")

        # Publish the control message
        self.rov_control_pub.publish(rov_control_msg)

def main(args=None):
    rclpy.init(args=args)
    controller = JoystickController()

    try:
        rclpy.spin(controller)
    except KeyboardInterrupt:
        pass
    finally:
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()