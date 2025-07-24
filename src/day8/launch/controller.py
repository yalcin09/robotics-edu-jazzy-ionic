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
    
    controller_language_arg = DeclareLaunchArgument('controller_language', default_value='cpp', choices=['cpp', 'python'])
    use_rviz_arg = DeclareLaunchArgument('use_rviz', default_value='true')
    
    controller_language = LaunchConfiguration('controller_language')
    use_rviz = LaunchConfiguration('use_rviz')
    
    robot_description = Command(['xacro ', urdf_file])
    
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description, 'use_sim_time': False}]
    )
    
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        output='screen',
        parameters=[{'use_sim_time': False}]
    )
    
    cpp_robot_controller_node = Node(
        package='day8',
        executable='simple_robot_controller_cpp',
        name='robot_controller_cpp',
        output='screen',
        condition=launch.conditions.IfCondition(
            launch.substitutions.PythonExpression(["'", controller_language, "' == 'cpp'"])
        )
    )
    
    python_robot_controller_node = Node(
        package='day8',
        executable='simple_robot_controller.py',
        name='robot_controller_python',
        output='screen',
        condition=launch.conditions.IfCondition(
            launch.substitutions.PythonExpression(["'", controller_language, "' == 'python'"])
        )
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
        controller_language_arg, use_rviz_arg,
        robot_state_publisher_node, joint_state_publisher_node,
        cpp_robot_controller_node, python_robot_controller_node,
        rviz_node,
    ])
