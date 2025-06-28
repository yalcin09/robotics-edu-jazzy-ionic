# Dosya: ~/ros2_ws/src/day2_2/launch/day2_3.launch.py - DÜZELTİLMİŞ

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, LogInfo, TimerAction
from launch.substitutions import LaunchConfiguration
from launch import conditions  # ← EKSİK IMPORT EKLENDİ

def generate_launch_description():
    """
    Service/Client demo launch file - DÜZELTİLMİŞ VERSİYON
    """
    
    # Launch arguments
    declare_enable_simulation = DeclareLaunchArgument(
        'enable_simulation',
        default_value='true',
        description='Enable robot simulation (publisher + sensors)'
    )
    
    declare_enable_monitoring = DeclareLaunchArgument(
        'enable_monitoring',
        default_value='false',  # Monitoring'i false yap (build hataları için)
        description='Enable system monitoring nodes'
    )
    
    declare_auto_test = DeclareLaunchArgument(
        'auto_test',
        default_value='false',
        description='Run automated test commands'
    )
    
    # Robot simulation nodes (isteğe bağlı)
    robot_status_publisher_node = Node(
        package='day2_2',
        executable='robot_publisher_node',
        name='robot_status_publisher',
        output='screen',
        condition=conditions.IfCondition(LaunchConfiguration('enable_simulation'))
    )
    
    # Ana service nodes (sadece build olanlar)
    robot_command_server_node = Node(
        package='day2_2',
        executable='robot_command_server_node',
        name='robot_command_server',
        output='screen',
        parameters=[{
            'max_velocity': 2.0,
            'workspace_x_limit': 10.0,
            'workspace_y_limit': 10.0,
            'workspace_z_limit': 5.0,
        }]
    )
    
    robot_status_service_node = Node(
        package='day2_2',
        executable='robot_status_service_node',
        name='robot_status_service',
        output='screen',
        parameters=[{
            'cleanup_interval_sec': 30,
            'history_length': 20,
            'statistics_enabled': True,
        }]
    )
    
    # Başlangıç mesajı
    start_message = LogInfo(
        msg=[
            '\n🚀 === SERVICE/CLIENT DEMO BAŞLATILIYOR ===',
            '\n📋 Konfigürasyon:',
            '\n   Simulation: ', LaunchConfiguration('enable_simulation'),
            '\n   Monitoring: ', LaunchConfiguration('enable_monitoring'), 
            '\n   Auto Test: ', LaunchConfiguration('auto_test'),
            '\n',
            '\n🔧 Başlatılan Services:',
            '\n   /robot_command        - Robot komut service',
            '\n   /get_robot_status     - Robot durum sorgulama service',
            '\n',
            '\n💡 Test komutları:',
            '\n   ros2 run day2_2 robot_command_client_node',
            '\n   ros2 service call /robot_command day2/srv/RobotCommand "{command_type: \'status\'}"',
            '\n   ros2 service call /get_robot_status day2/srv/GetRobotStatus "{robot_id: 0}"',
            '\n'
        ]
    )
    
    # Delayed start için status service'i biraz geciktir
    delayed_status_service = TimerAction(
        period=2.0,  # 2 saniye bekle
        actions=[robot_status_service_node]
    )
    
    return LaunchDescription([
        # Launch arguments
        declare_enable_simulation,
        declare_enable_monitoring,
        declare_auto_test,
        
        # Start message
        start_message,
        
        # Core service nodes (hemen başlat)
        robot_command_server_node,
        
        # Simulation nodes (eğer enabled)
        robot_status_publisher_node,
        
        # Delayed nodes
        delayed_status_service,
    ])

# Launch file kullanım örnekleri:
# ros2 launch day2_2 day2_3.launch.py
# ros2 launch day2_2 day2_3.launch.py enable_simulation:=false