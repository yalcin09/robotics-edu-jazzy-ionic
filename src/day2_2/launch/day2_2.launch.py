# Dosya: ~/ros2_ws/src/advanced_robot/launch/robot_demo.launch.py

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, LogInfo
from launch.substitutions import LaunchConfiguration
from launch import conditions

def generate_launch_description():
    """
    Launch file - tüm robot node'larını aynı anda başlatır
    Bu launch file ROS2'de birden fazla node'u koordineli şekilde başlatmak için kullanılır
    """
    
    # Launch arguments (command line'dan parametre alabilir)
    declare_robot_name = DeclareLaunchArgument(
        'robot_name',
        default_value='demo_robot',
        description='Robot name for identification'
    )
    
    declare_enable_sensors = DeclareLaunchArgument(
        'enable_sensors',
        default_value='true',
        description='Enable sensor simulation'
    )
    
    # Robot Status Publisher Node
    robot_status_publisher_node = Node(
        package='day2_2',           # Paket adı
        executable='robot_publisher_node', # Executable adı
        name='robot_status_publisher',      # Node adı (runtime'da)
        output='screen',                    # Log output'u terminal'de göster
        parameters=[{                       # Node parameter'ları
            'robot_name': LaunchConfiguration('robot_name'),
        }],
        remappings=[                        # Topic remapping (isteğe bağlı)
            ('/robot_status_detailed', '/demo/robot_status'),
        ]
    )
    
    # Robot Status Subscriber Node
    robot_status_subscriber_node = Node(
        package='day2_2',
        executable='robot_subscriber_node',
        name='robot_status_subscriber',
        output='screen',
        remappings=[
            ('/robot_status_detailed', '/demo/robot_status'),
        ]
    )
    
    # Sensor Simulator Node (şartlı olarak başlat)
    sensor_simulator_node = Node(
        package='day2_2',
        executable='sensor_simulator_node',
        name='sensor_simulator',
        output='screen',
        condition=conditions.IfCondition(
            LaunchConfiguration('enable_sensors')
        ),
        remappings=[
            ('/sensor/lidar', '/demo/sensors/lidar'),
            ('/sensor/camera', '/demo/sensors/camera'),
            ('/sensor/imu', '/demo/sensors/imu'),
            ('/sensor/gps', '/demo/sensors/gps'),
            ('/sensor/battery', '/demo/sensors/battery'),
        ]
    )
    
    # Launch başlangıcında log mesajı
    start_message = LogInfo(
        msg=[
            'Starting Robot Demo with the following configuration:',
            '\n  Robot Name: ', LaunchConfiguration('robot_name'),
            '\n  Sensors Enabled: ', LaunchConfiguration('enable_sensors'),
            '\n  Publisher Topic: /demo/robot_status',
            '\n  Sensor Topics: /demo/sensors/*'
        ]
    )
    
    # LaunchDescription oluştur - tüm node'ları ve action'ları içerir
    return LaunchDescription([
        # Launch arguments
        declare_robot_name,
        declare_enable_sensors,
        
        # Log message
        start_message,
        
        # Nodes - başlatma sırası önemli değil, ROS2 otomatik bağlantı kurar
        robot_status_publisher_node,
        robot_status_subscriber_node,
        sensor_simulator_node,
    ])

# Launch file kullanımı:
# ros2 launch advanced_robot robot_demo.launch.py
# ros2 launch advanced_robot robot_demo.launch.py robot_name:=test_robot
# ros2 launch advanced_robot robot_demo.launch.py enable_sensors:=false