#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
import math

class SimpleRobotController(Node):
    def __init__(self):
        super().__init__('simple_robot_controller_python')
        
        # Robot parameters
        self.wheel_radius = 0.1
        self.wheel_base = 0.5
        self.max_wheel_speed = 10.0
        
        self.linear_velocity = 0.0
        self.angular_velocity = 0.0
        self.left_wheel_vel = 0.0
        self.right_wheel_vel = 0.0
        
        # Publishers
        self.left_wheel_pub = self.create_publisher(
            Float64, '/left_wheel_velocity_controller/command', 10)
        self.right_wheel_pub = self.create_publisher(
            Float64, '/right_wheel_velocity_controller/command', 10)
        
        # Subscriber
        self.cmd_vel_sub = self.create_subscription(
            Twist, '/cmd_vel', self.cmd_vel_callback, 10)
        
        # Timers
        self.control_timer = self.create_timer(0.02, self.control_callback)  # 50Hz
        self.status_timer = self.create_timer(0.5, self.status_callback)     # 2Hz
        
        self.get_logger().info('🐍 Simple Robot Controller (Python) başlatıldı!')
        self.get_logger().info('📡 Listening to /cmd_vel topic')
        self.get_logger().info('🎮 Use: ros2 run teleop_twist_keyboard teleop_twist_keyboard')
    
    def cmd_vel_callback(self, msg):
        self.linear_velocity = msg.linear.x
        self.angular_velocity = msg.angular.z
        
        if abs(self.linear_velocity) > 0.01 or abs(self.angular_velocity) > 0.01:
            self.get_logger().debug(
                f'Cmd received: linear={self.linear_velocity:.2f}, angular={self.angular_velocity:.2f}')
    
    def control_callback(self):
        # Differential drive kinematics
        left_linear_vel = self.linear_velocity - (self.angular_velocity * self.wheel_base / 2.0)
        right_linear_vel = self.linear_velocity + (self.angular_velocity * self.wheel_base / 2.0)
        
        # Convert to wheel angular velocities
        self.left_wheel_vel = left_linear_vel / self.wheel_radius
        self.right_wheel_vel = right_linear_vel / self.wheel_radius
        
        # Apply speed limits
        self.left_wheel_vel = max(-self.max_wheel_speed, min(self.max_wheel_speed, self.left_wheel_vel))
        self.right_wheel_vel = max(-self.max_wheel_speed, min(self.max_wheel_speed, self.right_wheel_vel))
        
        # Publish wheel commands
        left_msg = Float64()
        right_msg = Float64()
        left_msg.data = self.left_wheel_vel
        right_msg.data = self.right_wheel_vel
        
        self.left_wheel_pub.publish(left_msg)
        self.right_wheel_pub.publish(right_msg)
    
    def status_callback(self):
        if abs(self.linear_velocity) > 0.01 or abs(self.angular_velocity) > 0.01:
            self.get_logger().info(
                f'🐍 Status - Linear: {self.linear_velocity:.2f} m/s, '
                f'Angular: {self.angular_velocity:.2f} rad/s, '
                f'Wheels: [{self.left_wheel_vel:.2f}, {self.right_wheel_vel:.2f}] rad/s')

def main(args=None):
    rclpy.init(args=args)
    try:
        robot_controller = SimpleRobotController()
        rclpy.spin(robot_controller)
    except KeyboardInterrupt:
        print('\n🛑 Robot Controller (Python) stopping...')
    finally:
        if 'robot_controller' in locals():
            robot_controller.destroy_node()
        rclpy.shutdown()
        print('✅ Robot Controller (Python) stopped successfully!')

if __name__ == '__main__':
    main()
