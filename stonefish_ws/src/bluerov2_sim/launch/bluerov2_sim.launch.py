import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Declare launch arguments
    robot_name_arg = DeclareLaunchArgument(
        'robot_name',
        default_value='bluerov',
        description='Name of the robot'
    )

    # Group action with namespace
    namespace_action = GroupAction(
        actions=[
            # Include the simulator launch file
            IncludeLaunchDescription(
                PathJoinSubstitution([
                    FindPackageShare('stonefish_ros2'), 'launch', 'stonefish_simulator.launch.py'
                ]),
                launch_arguments={
                    'simulation_data': PathJoinSubstitution([
                        FindPackageShare('bluerov2_sim'), 'data'
                    ]),
                    'scenario_desc': PathJoinSubstitution([
                        FindPackageShare('bluerov2_sim'), 'scenarios', 'bluerov2.scn'
                    ]),
                    'simulation_rate': '100.0',
                    'window_res_x': '1200',
                    'window_res_y': '800',
                    'rendering_quality': 'high'
                }.items()
            ),
        ]
    )

    odom2tf_node = Node(
            package='bluerov2_control',
            executable='odom2tf',
            output='screen',
        )
    
    joy_node = Node(
            package='joy',
            executable='joy_node',
            output='screen',
        )     
    
    return LaunchDescription([
        robot_name_arg,
        namespace_action,

        odom2tf_node, 
        joy_node,

        # Node(
        #     package='cola2_stonefish',
        #     executable='bluerov2_logitechF310teleop.py',
        #     output='screen',
        # ),
        #     Node(
        #     package='cola2_stonefish',
        #     executable='odom2tf.py',
        #     output='screen',
        # ),  
        ])