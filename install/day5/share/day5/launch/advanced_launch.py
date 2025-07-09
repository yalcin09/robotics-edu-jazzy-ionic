# =============================================================================
# DOSYA: launch/advanced_launch.py  
# AMAÇ: Day5 paketinin tüm node'larını içeren gelişmiş launch dosyası
# KULLANIM: ros2 launch day5 advanced_launch.py
# ÖĞRENME: YAML config, conditional nodes, groups, multi-node patterns
# =============================================================================

# =============================================================================
# DOSYA: launch/advanced_launch.py  
# AMAÇ: Day5 paketinin tüm node'larını içeren gelişmiş launch dosyası
# KULLANIM: ros2 launch day5 advanced_launch.py
# ÖĞRENME: YAML config, conditional nodes, groups, multi-node patterns
# =============================================================================

import os                                          # Dosya yolu işlemleri için
from launch import LaunchDescription               # Launch sistem base class
from launch_ros.actions import Node               # ROS2 node başlatma action
from launch.actions import (                      # Launch action'ları
    DeclareLaunchArgument,                        # Command line argümanları
    IncludeLaunchDescription,                     # Başka launch dosyaları include etme
    GroupAction,                                  # Node'ları gruplandırma
    TimerAction,                                  # Zamanlı action'lar
    LogInfo,                                      # Log mesajları
    ExecuteProcess                                # Harici process çalıştırma
)
from launch.conditions import IfCondition         # Koşullu çalıştırma
from launch.substitutions import (                # Değişken ikame (substitution)
    LaunchConfiguration,                          # Launch argüman değerleri
    PathJoinSubstitution,                         # Dosya yolu birleştirme
    TextSubstitution,                             # Metin substitution
    PythonExpression                              # Python expression evaluation
)
# ROS2 Jazzy için doğru import
from launch_ros.substitutions import FindPackageShare

# =============================================================================
# MAIN LAUNCH FUNCTION
# =============================================================================

def generate_launch_description():
    """
    Day5 paketinin gelişmiş launch description'ı
    
    Bu örnek şunları içerir:
    - YAML dosyasından parameter loading
    - Conditional node launching  
    - Node grouping ve namespacing
    - Timer-based node starting
    - Multi-node coordination
    - System monitoring
    
    Returns:
        LaunchDescription: Kompleks launch setup
    """
    
    # =========================================================================
    # PACKAGE YOLU VE DOSYA YOLLARİ
    # =========================================================================
    
    # day5 paketinin share dizinini bul
    package_share = FindPackageShare('day5')
    
    # Config dosyası yolu - PathJoinSubstitution ile güvenli yol birleştirme
    config_file_path = PathJoinSubstitution([
        package_share,                             # Paket share dizini
        'config',                                 # config alt dizini
        'day5_params.yaml'                        # YAML dosya adı
    ])
    
    # =========================================================================
    # LAUNCH ARGÜMANLARI - GELİŞMİŞ ÖRNEKLER
    # =========================================================================
    
    # Sistem modu seçimi (development, production, test)
    system_mode_arg = DeclareLaunchArgument(
        'system_mode',
        default_value='development',
        choices=['development', 'production', 'test'],  # Sadece bu değerler kabul edilir
        description='Sistem çalışma modu: development/production/test'
    )
    
    # Robot namespace - multi-robot sistemler için
    robot_namespace_arg = DeclareLaunchArgument(
        'robot_namespace',
        default_value='robot_alpha',
        description='Robot namespace - multi-robot sistemler için'
    )
    
    # Hangi node'ların çalıştırılacağını kontrol eden flag'ler
    enable_basic_nodes_arg = DeclareLaunchArgument(
        'enable_basic_nodes',
        default_value='true',
        choices=['true', 'false'],
        description='Temel publisher/subscriber node\'larını çalıştır'
    )
    
    enable_configurable_arg = DeclareLaunchArgument(
        'enable_configurable',
        default_value='true',
        choices=['true', 'false'],
        description='Configurable publisher node\'unu çalıştır'
    )
    
    enable_multi_node_arg = DeclareLaunchArgument(
        'enable_multi_node',
        default_value='false',                     # Varsayılan kapalı (resource intensive)
        choices=['true', 'false'],
        description='Multi-node example\'ı çalıştır'
    )
    
    enable_monitoring_arg = DeclareLaunchArgument(
        'enable_monitoring',
        default_value='true',
        choices=['true', 'false'],
        description='Sistem monitoring node\'larını çalıştır'
    )
    
    # Log seviyesi seçimi
    log_level_arg = DeclareLaunchArgument(
        'log_level',
        default_value='info',
        choices=['debug', 'info', 'warn', 'error'],
        description='ROS2 log seviyesi - tüm node\'lar için'
    )
    
    # Config dosyası override etme imkanı
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=config_file_path,
        description='Kullanılacak YAML config dosyası yolu'
    )
    
    # Başlatma gecikmesi - node'lar arası sıralama için
    startup_delay_arg = DeclareLaunchArgument(
        'startup_delay',
        default_value='2.0',
        description='Node başlatma gecikmesi (saniye) - sıralı başlatma için'
    )
    
    # Performance mode - yüksek frekanslı çalışma
    performance_mode_arg = DeclareLaunchArgument(
        'performance_mode',
        default_value='normal',
        choices=['low', 'normal', 'high', 'max'],
        description='Performans modu - frekans ve queue size\'ları etkiler'
    )
    
    # =========================================================================
    # LOG MESAJLARI - SİSTEM DURUMU BİLGİSİ
    # =========================================================================
    
    # Launch başlatıldığında bilgi mesajı
    startup_log = LogInfo(
        msg=[
            '\n🚀 ===== DAY5 GELİŞMİŞ LAUNCH SİSTEMİ =====\n',
            '📋 Sistem Modu: ', LaunchConfiguration('system_mode'), '\n',
            '🏷️  Robot Namespace: /', LaunchConfiguration('robot_namespace'), '\n', 
            '📊 Log Seviyesi: ', LaunchConfiguration('log_level'), '\n',
            '⚡ Performans Modu: ', LaunchConfiguration('performance_mode'), '\n',
            '⚙️  Config Dosyası: ', LaunchConfiguration('config_file'), '\n',
            '=============================================='
        ]
    )
    
    # =========================================================================
    # TEMEL NODE GROUP - Publisher/Subscriber Çifti
    # =========================================================================
    
    basic_nodes_group = GroupAction([
        
        # PARAMETER PUBLISHER NODE
        Node(
            package='day5',
            executable='parameter_publisher',
            name='advanced_publisher',
            namespace=LaunchConfiguration('robot_namespace'),
            output='screen',
            
            # YAML dosyasından parameter yükle + launch argümanları ile override
            parameters=[
                LaunchConfiguration('config_file'),    # YAML dosyasından yükle
                {
                    # Launch argümanları ile override
                    'debug_mode': PythonExpression([
                        "True if '", LaunchConfiguration('system_mode'), "' == 'development' else False"
                    ]),
                    'publish_frequency': PythonExpression([
                        "1.0 if '", LaunchConfiguration('performance_mode'), "' == 'low' else ",
                        "2.0 if '", LaunchConfiguration('performance_mode'), "' == 'normal' else ",
                        "10.0 if '", LaunchConfiguration('performance_mode'), "' == 'high' else 50.0"
                    ])
                }
            ],
            
            # Log seviyesini ayarla
            arguments=['--ros-args', '--log-level', LaunchConfiguration('log_level')],
            
            # Sadece enable_basic_nodes=true ise çalıştır
            condition=IfCondition(LaunchConfiguration('enable_basic_nodes')),
            
            # Topic remapping - namespace'li topic'ler
            remappings=[
                ('chatter', 'basic_communication'),
                ('robot_status', 'status/basic')
            ]
        ),
        
        # PARAMETER SUBSCRIBER NODE - gecikmeli başlatma
        TimerAction(
            period=1.0,  # 1 saniye gecikme - publisher'ın başlaması için
            actions=[
                Node(
                    package='day5',
                    executable='parameter_subscriber',
                    name='advanced_subscriber', 
                    namespace=LaunchConfiguration('robot_namespace'),
                    output='screen',
                    
                    # YAML + dynamic parameters
                    parameters=[
                        LaunchConfiguration('config_file'),
                        {
                            'verbose_mode': PythonExpression([
                                "True if '", LaunchConfiguration('system_mode'), "' == 'development' else False"
                            ]),
                            'enable_statistics': True,
                            'log_level': PythonExpression([
                                "3 if '", LaunchConfiguration('log_level'), "' == 'debug' else ",
                                "2 if '", LaunchConfiguration('log_level'), "' == 'info' else ",
                                "1 if '", LaunchConfiguration('log_level'), "' == 'warn' else 0"
                            ])
                        }
                    ],
                    
                    arguments=['--ros-args', '--log-level', LaunchConfiguration('log_level')],
                    condition=IfCondition(LaunchConfiguration('enable_basic_nodes')),
                    
                    remappings=[
                        ('chatter', 'basic_communication'),
                        ('statistics', 'status/statistics')
                    ]
                )
            ]
        )
    ])
    
    # =========================================================================
    # CONFIGURABLE PUBLISHER GROUP - Gelişmiş Yayın Sistemi
    # =========================================================================
    
    configurable_group = GroupAction([
        
        Node(
            package='day5',
            executable='configurable_publisher',
            name='config_publisher',
            namespace=[LaunchConfiguration('robot_namespace'), '/advanced'],  # İç içe namespace
            output='screen',
            
            parameters=[
                LaunchConfiguration('config_file'),
                {
                    # Performance mode'a göre frekansları ayarla
                    'string_frequency': PythonExpression([
                        "0.5 if '", LaunchConfiguration('performance_mode'), "' == 'low' else ",
                        "1.0 if '", LaunchConfiguration('performance_mode'), "' == 'normal' else ",
                        "5.0 if '", LaunchConfiguration('performance_mode'), "' == 'high' else 20.0"
                    ]),
                    'number_frequency': PythonExpression([
                        "2.0 if '", LaunchConfiguration('performance_mode'), "' == 'low' else ",
                        "5.0 if '", LaunchConfiguration('performance_mode'), "' == 'normal' else ",
                        "25.0 if '", LaunchConfiguration('performance_mode'), "' == 'high' else 100.0"
                    ]),
                    'cmd_vel_frequency': PythonExpression([
                        "5.0 if '", LaunchConfiguration('performance_mode'), "' == 'low' else ",
                        "10.0 if '", LaunchConfiguration('performance_mode'), "' == 'normal' else ",
                        "50.0 if '", LaunchConfiguration('performance_mode'), "' == 'high' else 200.0"
                    ]),
                    # Production mode'da emergency stop aktif
                    'emergency_stop': PythonExpression([
                        "True if '", LaunchConfiguration('system_mode'), "' == 'production' else False"
                    ])
                }
            ],
            
            arguments=['--ros-args', '--log-level', LaunchConfiguration('log_level')],
            condition=IfCondition(LaunchConfiguration('enable_configurable')),
            
            # Topic'leri namespace altında organize et
            remappings=[
                ('robot/status', 'sensors/status'),
                ('sensor/data', 'sensors/raw_data'),
                ('robot/cmd_vel', 'control/velocity')
            ]
        )
    ])
    
    # =========================================================================
    # MULTI-NODE GROUP - Kompleks Node Sistemi
    # =========================================================================
    
    multi_node_group = GroupAction([
        
        # Multi-node example - gecikmeli başlatma
        TimerAction(
            period=LaunchConfiguration('startup_delay'),
            actions=[
                Node(
                    package='day5',
                    executable='multi_node_example',
                    name='multi_system',
                    namespace=[LaunchConfiguration('robot_namespace'), '/multi'],
                    output='screen',
                    
                    parameters=[{
                        # Multi-node için özel parametreler
                        'producer_frequency': 3.0,
                        'consumer_processing_delay_ms': 50,
                        'monitor_frequency': 0.1,  # 10 saniyede bir
                        'detailed_reports': PythonExpression([
                            "True if '", LaunchConfiguration('system_mode'), "' == 'development' else False"
                        ])
                    }],
                    
                    arguments=['--ros-args', '--log-level', LaunchConfiguration('log_level')],
                    condition=IfCondition(LaunchConfiguration('enable_multi_node')),
                    
                    # Multi-node internal topic'leri namespace altında
                    remappings=[
                        ('data_stream', 'pipeline/raw'),
                        ('processed_data', 'pipeline/processed'),
                        ('system_report', 'monitoring/reports')
                    ]
                )
            ]
        )
    ])
    
    # =========================================================================
    # MONITORING GROUP - Sistem İzleme
    # =========================================================================
    
    monitoring_group = GroupAction([
        
        # System monitor - basit bir monitoring node olarak parameter publisher kullan
        Node(
            package='day5',
            executable='parameter_publisher',
            name='system_monitor',
            namespace=[LaunchConfiguration('robot_namespace'), '/monitoring'],
            output='log',  # Log file'a yaz, screen'e değil
            
            parameters=[{
                'publish_frequency': 0.2,  # 5 saniyede bir
                'message_content': 'System Health Check - All Systems Operational',
                'topic_name': 'health_status',
                'queue_size': 5,
                'debug_mode': False  # Monitoring için az log
            }],
            
            arguments=['--ros-args', '--log-level', 'warn'],  # Sadece warning ve error'lar
            condition=IfCondition(LaunchConfiguration('enable_monitoring'))
        ),
        
        # Performance logger
        Node(
            package='day5',
            executable='parameter_subscriber',
            name='performance_logger',
            namespace=[LaunchConfiguration('robot_namespace'), '/monitoring'],
            output='log',
            
            parameters=[{
                'topic_name': 'health_status',
                'queue_size': 10,
                'verbose_mode': False,
                'enable_filtering': False,
                'enable_statistics': True,
                'log_level': 1  # Sadece WARN ve ERROR
            }],
            
            arguments=['--ros-args', '--log-level', 'warn'],
            condition=IfCondition(LaunchConfiguration('enable_monitoring'))
        )
    ])
    
    # =========================================================================
    # DEVELOPMENT TOOLS - Sadece Development Mode'da
    # =========================================================================
    
    dev_tools_group = GroupAction([
        
        # RQT Graph otomatik başlatma (development mode'da)
        ExecuteProcess(
            cmd=['rqt_graph'],
            output='log',
            condition=IfCondition(
                PythonExpression([
                    "'", LaunchConfiguration('system_mode'), "' == 'development' and ",
                    "'", LaunchConfiguration('enable_basic_nodes'), "' == 'true'"
                ])
            )
        ),
        
        # Topic echo for debugging
        ExecuteProcess(
            cmd=['ros2', 'topic', 'echo', '--once', 
                 ['/robot_alpha/basic_communication']],  # namespace'li topic
            output='screen',
            condition=IfCondition(
                PythonExpression([
                    "'", LaunchConfiguration('system_mode'), "' == 'development'"
                ])
            )
        )
    ])
    
    # =========================================================================
    # LAUNCH DESCRIPTION ASSEMBLY
    # =========================================================================
    
    return LaunchDescription([
        
        # LAUNCH ARGÜMANLARI (önce bunlar tanımlanmalı)
        system_mode_arg,
        robot_namespace_arg,
        enable_basic_nodes_arg,
        enable_configurable_arg,
        enable_multi_node_arg,
        enable_monitoring_arg,
        log_level_arg,
        config_file_arg,
        startup_delay_arg,
        performance_mode_arg,
        
        # BAŞLATMA LOG MESAJI
        startup_log,
        
        # ANA NODE GRUPLARI
        basic_nodes_group,                                  # Temel publisher/subscriber
        
        # Configurable publisher - 3 saniye gecikme ile
        TimerAction(
            period=3.0,
            actions=[configurable_group]
        ),
        
        # Multi-node system - startup_delay ile
        multi_node_group,
        
        # Monitoring system - 5 saniye gecikme ile (sistem stabilize olduktan sonra)
        TimerAction(
            period=5.0,
            actions=[monitoring_group]
        ),
        
        # Development tools - en son başlat
        TimerAction(
            period=8.0,
            actions=[dev_tools_group]
        ),
        
        # Son log mesajı
        TimerAction(
            period=10.0,
            actions=[
                LogInfo(msg=[
                    '\n✅ ===== SYSTEM STARTUP COMPLETED =====\n',
                    '🎯 Tüm node\'lar başarıyla başlatıldı!\n',
                    '📊 Sistem durumu: OPERATIONAL\n',
                    '🔧 Monitoring için:\n',
                    '   - ros2 topic list\n',
                    '   - ros2 node list\n',
                    '   - rqt_graph (development mode\'da otomatik açılır)\n',
                    '🛑 Durdurmak için: Ctrl+C\n',
                    '========================================'
                ])
            ]
        )
    ])

# =============================================================================
# KULLANIM ÖRNEKLERİ VE AÇIKLAMALAR
# =============================================================================

"""
🚀 GELİŞMİŞ LAUNCH DOSYASI KULLANIM ÖRNEKLERİ:

1. DEVELOPMENT MODE (tam özellikler + debugging):
   ros2 launch day5 advanced_launch.py system_mode:=development
   
   📋 Bu mod şunları yapar:
   - Tüm debug bilgileri aktif
   - RQT Graph otomatik açılır
   - Verbose logging
   - Normal performans ayarları

2. PRODUCTION MODE (optimize edilmiş + güvenli):
   ros2 launch day5 advanced_launch.py system_mode:=production performance_mode:=high log_level:=warn
   
   📋 Bu mod şunları yapar:
   - Emergency stop aktif
   - Sadece warning/error loglar
   - Yüksek performans ayarları
   - Minimal debug bilgisi

3. TEST MODE (kontrollü test ortamı):
   ros2 launch day5 advanced_launch.py system_mode:=test performance_mode:=low startup_delay:=5.0
   
   📋 Bu mod şunları yapar:
   - Düşük frekanslı çalışma
   - Uzun başlatma gecikmesi (gözlem için)
   - Test odaklı parametreler

4. SADECE TEMEL NODE'LAR:
   ros2 launch day5 advanced_launch.py enable_configurable:=false enable_multi_node:=false enable_monitoring:=false
   
   📋 Sadece publisher/subscriber çifti çalışır

5. YÜKSEK PERFORMANS TEST:
   ros2 launch day5 advanced_launch.py performance_mode:=max log_level:=error
   
   📋 Maksimum hız, minimum log, performans odaklı

6. ÇOK ROBOT SİSTEMİ SİMÜLASYONU:
   Terminal 1: ros2 launch day5 advanced_launch.py robot_namespace:=robot_alpha
   Terminal 2: ros2 launch day5 advanced_launch.py robot_namespace:=robot_beta
   Terminal 3: ros2 launch day5 advanced_launch.py robot_namespace:=robot_gamma
   
   📋 3 farklı robot namespace'i ile çalışır

7. CUSTOM CONFIG DOSYASI:
   ros2 launch day5 advanced_launch.py config_file:=/path/to/my_custom_config.yaml
   
   📋 Kendi YAML config dosyanızı kullanabilirsiniz

8. DEBUG + MONITORING ODAKLI:
   ros2 launch day5 advanced_launch.py system_mode:=development enable_monitoring:=true log_level:=debug startup_delay:=1.0

9. MINIMAL SYSTEM (resource constrained):
   ros2 launch day5 advanced_launch.py performance_mode:=low enable_multi_node:=false enable_monitoring:=false log_level:=error

10. FULL FEATURE DEMO:
    ros2 launch day5 advanced_launch.py system_mode:=development performance_mode:=normal enable_basic_nodes:=true enable_configurable:=true enable_multi_node:=true enable_monitoring:=true

🔧 MONİTÖRİNG VE ANALİZ KOMUTLARI:

1. SİSTEM TOPOLOGY:
   ros2 node list
   ros2 topic list
   
   📋 Namespace'li node ve topic listesi:
   /robot_alpha/advanced_publisher
   /robot_alpha/advanced_subscriber
   /robot_alpha/advanced/config_publisher
   /robot_alpha/multi/multi_system
   /robot_alpha/monitoring/system_monitor

2. TOPIC DİNLEME:
   ros2 topic echo /robot_alpha/basic_communication
   ros2 topic echo /robot_alpha/advanced/sensors/status
   ros2 topic echo /robot_alpha/multi/pipeline/processed
   ros2 topic echo /robot_alpha/monitoring/health_status

3. PERFORMANS ÖLÇÜMLERİ:
   ros2 topic hz /robot_alpha/basic_communication
   ros2 topic bw /robot_alpha/advanced/sensors/raw_data
   
   📋 Mesaj frekansı ve bandwidth kullanımı

4. PARAMETRE YÖNETİMİ:
   ros2 param list /robot_alpha/advanced_publisher
   ros2 param get /robot_alpha/advanced_publisher publish_frequency
   ros2 param set /robot_alpha/advanced_publisher debug_mode true

5. NODE BİLGİLERİ:
   ros2 node info /robot_alpha/advanced/config_publisher
   
   📋 Publisher/subscriber/service bilgileri

6. LOG ANALİZİ:
   ros2 log view
   
   📋 Tüm node'ların log mesajları

7. SİSTEM DURUMU:
   ros2 topic echo --once /robot_alpha/monitoring/health_status
   
   📋 Sistem sağlık durumu

🎛️ PERFORMANCE MODE ETKİLERİ:

LOW MODE:
- String: 0.5 Hz, Number: 2.0 Hz, Cmd_vel: 5.0 Hz
- Minimal resource kullanımı

NORMAL MODE:  
- String: 1.0 Hz, Number: 5.0 Hz, Cmd_vel: 10.0 Hz
- Dengeli performans

HIGH MODE:
- String: 5.0 Hz, Number: 25.0 Hz, Cmd_vel: 50.0 Hz  
- Yüksek performans

MAX MODE:
- String: 20.0 Hz, Number: 100.0 Hz, Cmd_vel: 200.0 Hz
- Maksimum performans (dikkatli kullanın!)

⚠️ TROUBLESHOOTING:

1. "Node failed to start" hatası:
   - startup_delay değerini artırın
   - Log seviyesini debug'a çekip detayları inceleyin
   - Resource kullanımını kontrol edin

2. Topic'lerde mesaj yok:
   - Namespace'leri kontrol edin
   - Conditional başlatma flag'lerini kontrol edin
   - Node'ların başarıyla başladığını kontrol edin

3. Yüksek CPU/Memory kullanımı:
   - performance_mode'u low'a çekin
   - Gereksiz node'ları disable edin
   - Log seviyesini yükseltin (daha az log)

4. RQT Graph açılmıyor:
   - rqt paketinin kurulu olduğunu kontrol edin
   - X11 forwarding aktif mi kontrol edin (WSL için)
   - Development mode'da çalıştığınızı kontrol edin

5. Config dosyası bulunamıyor:
   - config/day5_params.yaml dosyasının var olduğunu kontrol edin
   - Dosya yolunun doğru olduğunu kontrol edin
   - Farklı config dosyası kullanmak için config_file argümanını kullanın
"""