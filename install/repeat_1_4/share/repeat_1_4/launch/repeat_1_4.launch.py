from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import LogInfo

def generate_launch_description():
    """
    Basit robot demo - Message, Service, Action hepsini başlatır
    """
    
    return LaunchDescription([
        # Başlangıç mesajı
        LogInfo(msg='\n🤖 === BASİT ROBOT DEMO BAŞLATILIYOR ==='),
        LogInfo(msg='📝 Message: robot_position topic'),
        LogInfo(msg='🔧 Service: /move_robot'),
        LogInfo(msg='🎯 Action: /go_to_point'),
        LogInfo(msg=''),
        
        # MESSAGE - Position Publisher
        Node(
            package='repeat_1_4',
            executable='position_publisher',
            name='position_publisher',
            output='screen'
        ),
        
        # MESSAGE - Position Subscriber  
        Node(
            package='repeat_1_4',
            executable='position_subscriber',
            name='position_subscriber',
            output='screen'
        ),
        
        # SERVICE - Move Service Server
        Node(
            package='repeat_1_4',
            executable='move_service_server',
            name='move_service_server',
            output='screen'
        ),
        
        # ACTION - GoTo Action Server
        Node(
            package='repeat_1_4',
            executable='goto_action_server',
            name='goto_action_server',
            output='screen'
        ),
        
        LogInfo(msg=''),
        LogInfo(msg='💡 Test komutları:'),
        LogInfo(msg='   ros2 topic echo /robot_position'),
        LogInfo(msg='   ros2 service call /move_robot repeat_1_4/srv/MoveRobot "{target_x: 3.0, target_y: 4.0, speed: 1.0}"'),
        LogInfo(msg='   ros2 action send_goal /go_to_point repeat_1_4/action/GoToPoint "{target_x: 2.0, target_y: 3.0}" --feedback'),
        LogInfo(msg=''),
    ])