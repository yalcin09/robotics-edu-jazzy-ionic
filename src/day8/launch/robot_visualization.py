#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import launch.conditions

def generate_launch_description():
    pkg_share = FindPackageShare('day8')
    urdf_file = PathJoinSubstitution([pkg_share, 'urdf', 'simple_robot.urdf'])
    rviz_config_file = PathJoinSubstitution([pkg_share, 'rviz', 'robot_visualization.rviz'])
    
    use_gui_arg = DeclareLaunchArgument('use_gui', default_value='true')
    use_rviz_arg = DeclareLaunchArgument('use_rviz', default_value='true')
    
    use_gui = LaunchConfiguration('use_gui')
    use_rviz = LaunchConfiguration('use_rviz')
    
    robot_description = Command(['xacro ', urdf_file])
    
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description, 'use_sim_time': False}]
    )
    
    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen',
        condition=launch.conditions.IfCondition(use_gui)
    )
    
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        output='screen',
        condition=launch.conditions.UnlessCondition(use_gui)
    )
    
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_file],
        condition=launch.conditions.IfCondition(use_rviz)
    )
    
    return LaunchDescription([
        use_gui_arg, use_rviz_arg,
        robot_state_publisher_node,
        joint_state_publisher_gui_node,
        joint_state_publisher_node,
        rviz_node,
    ])
