#!/usr/bin/env python3

# =============================================================================
# DOSYA: launch/debug_session.py
# AMAÇ: Debug araçlarını ve test node'larını birlikte başlatma
# KULLANIM: ros2 launch debug_tools debug_session.py
# ÖĞRENME: Debug environment setup, monitoring tools launch
# =============================================================================

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import (
    DeclareLaunchArgument,
    TimerAction,
    ExecuteProcess,
    LogInfo
)
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():
    """
    Debug session launch description
    
    Bu launch dosyası:
    - System monitor node'u başlatır
    - Test node'ları başlatır (day5 paketinden)
    - Debug araçlarını başlatır
    - RQT tools açar
    - Monitoring dashboard hazırlar
    """
    
    # =========================================================================
    # LAUNCH ARGÜMANLARI
    # =========================================================================
    
    # Debug session modu
    debug_mode_arg = DeclareLaunchArgument(
        'debug_mode',
        default_value='full',
        choices=['minimal', 'standard', 'full', 'stress_test'],
        description='Debug session modu: minimal/standard/full/stress_test'
    )
    
    # System monitoring aktif mi?
    enable_monitoring_arg = DeclareLaunchArgument(
        'enable_monitoring',
        default_value='true',
        choices=['true', 'false'],
        description='System monitoring node\'larını başlat'
    )
    
    # RQT tools otomatik açılsın mı?
    enable_rqt_arg = DeclareLaunchArgument(
        'enable_rqt',
        default_value='true',
        choices=['true', 'false'],
        description='RQT araçlarını otomatik aç'
    )
    
    # Test node'ları başlatılsın mı?
    enable_test_nodes_arg = DeclareLaunchArgument(
        'enable_test_nodes',
        default_value='true',
        choices=['true', 'false'],
        description='Test node\'larını başlat (day5 paketinden)'
    )
    
    # Monitoring frekansı
    monitor_frequency_arg = DeclareLaunchArgument(
        'monitor_frequency',
        default_value='2.0',
        description='System monitor frekansı (Hz)'
    )
    
    # Stress test seviyesi
    stress_level_arg = DeclareLaunchArgument(
        'stress_level',
        default_value='medium',
        choices=['low', 'medium', 'high', 'extreme'],
        description='Stress test seviyesi'
    )
    
    # =========================================================================
    # LOG MESAJLARI
    # =========================================================================
    
    startup_log = LogInfo(
        msg=[
            '\n🛠️  === ROS2 DEBUG SESSION BAŞLATILIYOR ===\n',
            '🎯 Debug Modu: ', LaunchConfiguration('debug_mode'), '\n',
            '📊 Monitoring: ', LaunchConfiguration('enable_monitoring'), '\n',
            '🖥️  RQT Tools: ', LaunchConfiguration('enable_rqt'), '\n',
            '🧪 Test Nodes: ', LaunchConfiguration('enable_test_nodes'), '\n',
            '=============================================='
        ]
    )
    
    # =========================================================================
    # SYSTEM MONITOR NODE
    # =========================================================================
    
    system_monitor_node = Node(
        package='debug_tools',
        executable='system_monitor',
        name='system_monitor',
        namespace='debug',
        output='screen',
        parameters=[{
            # Monitor frekansını launch argümanından al
            'monitor_frequency': LaunchConfiguration('monitor_frequency'),
            
            # Debug mode'a göre threshold'ları ayarla
            'cpu_warning_threshold': PythonExpression([
                "60.0 if '", LaunchConfiguration('debug_mode'), "' == 'minimal' else ",
                "70.0 if '", LaunchConfiguration('debug_mode'), "' == 'standard' else ",
                "80.0 if '", LaunchConfiguration('debug_mode'), "' == 'full' else 50.0"
            ]),
            'memory_warning_threshold': PythonExpression([
                "70.0 if '", LaunchConfiguration('debug_mode'), "' == 'minimal' else ",
                "80.0 if '", LaunchConfiguration('debug_mode'), "' == 'standard' else ",
                "85.0 if '", LaunchConfiguration('debug_mode'), "' == 'full' else 60.0"
            ]),
            
            # Verbose logging debug mode'da aktif
            'verbose_logging': PythonExpression([
                "True if '", LaunchConfiguration('debug_mode'), "' == 'full' else False"
            ]),
            
            # Diagnostics her zaman aktif
            'enable_diagnostics': True,
            
            # History length debug mode'a göre
            'history_length': PythonExpression([
                "30 if '", LaunchConfiguration('debug_mode'), "' == 'minimal' else ",
                "60 if '", LaunchConfiguration('debug_mode'), "' == 'standard' else ",
                "120 if '", LaunchConfiguration('debug_mode'), "' == 'full' else 300"
            ])
        }],
        condition=IfCondition(LaunchConfiguration('enable_monitoring'))
    )
    
    # =========================================================================
    # TEST NODE'LARI (DAY5 PAKETİNDEN)
    # =========================================================================
    
    # Test Publisher - Basic
    test_publisher_basic = Node(
        package='day5',
        executable='parameter_publisher',
        name='test_publisher_basic',
        namespace='debug_test',
        output='screen',
        parameters=[{
            'publish_frequency': PythonExpression([
                "1.0 if '", LaunchConfiguration('stress_level'), "' == 'low' else ",
                "5.0 if '", LaunchConfiguration('stress_level'), "' == 'medium' else ",
                "20.0 if '", LaunchConfiguration('stress_level'), "' == 'high' else 100.0"
            ]),
            'message_content': 'Debug Test Message - Basic Publisher',
            'topic_name': 'test_basic',
            'debug_mode': True
        }],
        condition=IfCondition(LaunchConfiguration('enable_test_nodes'))
    )
    
    # Test Subscriber - Basic
    test_subscriber_basic = Node(
        package='day5',
        executable='parameter_subscriber',
        name='test_subscriber_basic',
        namespace='debug_test',
        output='screen',
        parameters=[{
            'topic_name': 'test_basic',
            'verbose_mode': PythonExpression([
                "True if '", LaunchConfiguration('debug_mode'), "' == 'full' else False"
            ]),
            'enable_statistics': True,
            'enable_filtering': False
        }],
        condition=IfCondition(LaunchConfiguration('enable_test_nodes'))
    )
    
    # Test Publisher - High Frequency (stress test için)
    test_publisher_stress = Node(
        package='day5',
        executable='configurable_publisher',
        name='test_publisher_stress',
        namespace='debug_test',
        output='log',  # Log'a yaz, screen'e değil (spam'i önlemek için)
        parameters=[{
            'string_frequency': PythonExpression([
                "2.0 if '", LaunchConfiguration('stress_level'), "' == 'low' else ",
                "10.0 if '", LaunchConfiguration('stress_level'), "' == 'medium' else ",
                "50.0 if '", LaunchConfiguration('stress_level'), "' == 'high' else 200.0"
            ]),
            'number_frequency': PythonExpression([
                "5.0 if '", LaunchConfiguration('stress_level'), "' == 'low' else ",
                "25.0 if '", LaunchConfiguration('stress_level'), "' == 'medium' else ",
                "100.0 if '", LaunchConfiguration('stress_level'), "' == 'high' else 500.0"
            ]),
            'cmd_vel_frequency': 10.0,  # Robot commands sabit frekans
            'emergency_stop': False,     # Test için aktif
            'string_topic': 'stress/status',
            'number_topic': 'stress/data',
            'cmd_vel_topic': 'stress/cmd_vel'
        }],
        condition=IfCondition(
            PythonExpression([
                "'", LaunchConfiguration('enable_test_nodes'), "' == 'true' and '",
                LaunchConfiguration('debug_mode'), "' in ['full', 'stress_test']"
            ])
        )
    )
    
    # =========================================================================
    # RQT TOOLS - DEBUG VİZUALİZASYON
    # =========================================================================
    
    # RQT Graph - Node ve topic bağlantılarını göster
    rqt_graph = ExecuteProcess(
        cmd=['rqt_graph'],
        output='log',
        condition=IfCondition(LaunchConfiguration('enable_rqt'))
    )
    
    # RQT Plot - Gerçek zamanlı veri çizimi
    rqt_plot = ExecuteProcess(
        cmd=['rqt_plot'],
        output='log',
        condition=IfCondition(
            PythonExpression([
                "'", LaunchConfiguration('enable_rqt'), "' == 'true' and '",
                LaunchConfiguration('debug_mode'), "' == 'full'"
            ])
        )
    )
    
    # RQT Console - Log mesajlarını görüntüle
    rqt_console = ExecuteProcess(
        cmd=['rqt_console'],
        output='log',
        condition=IfCondition(LaunchConfiguration('enable_rqt'))
    )
    
    # =========================================================================
    # DEBUG HELPER PROCESSES
    # =========================================================================
    
    # Topic Echo - Önemli topic'leri izle
    topic_echo_system_status = ExecuteProcess(
        cmd=['ros2', 'topic', 'echo', '/debug/system_status'],
        output='log',
        condition=IfCondition(
            PythonExpression([
                "'", LaunchConfiguration('enable_monitoring'), "' == 'true' and '",
                LaunchConfiguration('debug_mode'), "' == 'full'"
            ])
        )
    )
    
    # Topic Hz Monitor - Frekans takibi
    topic_hz_monitor = ExecuteProcess(
        cmd=['ros2', 'topic', 'hz', '/debug_test/test_basic'],
        output='log',
        condition=IfCondition(
            PythonExpression([
                "'", LaunchConfiguration('enable_test_nodes'), "' == 'true' and '",
                LaunchConfiguration('debug_mode'), "' == 'full'"
            ])
        )
    )
    
    # =========================================================================
    # DIAGNOSTIC AGGREGATOR (Gelişmiş diagnostic monitoring)
    # =========================================================================
    
    diagnostic_aggregator = Node(
        package='diagnostic_aggregator',
        executable='aggregator_node',
        name='diagnostic_aggregator',
        namespace='debug',
        output='screen',
        parameters=[{
            'analyzers': {
                'system': {
                    'type': 'diagnostic_aggregator/GenericAnalyzer',
                    'path': 'System',
                    'contains': ['System Monitor']
                },
                'nodes': {
                    'type': 'diagnostic_aggregator/GenericAnalyzer', 
                    'path': 'Nodes',
                    'contains': ['test_']
                }
            }
        }],
        condition=IfCondition(
            PythonExpression([
                "'", LaunchConfiguration('enable_monitoring'), "' == 'true' and '",
                LaunchConfiguration('debug_mode'), "' in ['full', 'stress_test']"
            ])
        )
    )
    
    # =========================================================================
    # TIMER-BASED ACTIONS - ARDIŞ İK BAŞLATMA
    # =========================================================================
    
    # 3 saniye sonra RQT araçlarını başlat
    delayed_rqt_tools = TimerAction(
        period=3.0,
        actions=[
            LogInfo(msg='🖥️  RQT araçları başlatılıyor...'),
            rqt_graph,
            
            # 5 saniye sonra diğer RQT araçlarını başlat
            TimerAction(
                period=5.0,
                actions=[
                    rqt_console,
                    rqt_plot
                ]
            )
        ]
    )
    
    # 10 saniye sonra debug helper process'leri başlat
    delayed_helpers = TimerAction(
        period=10.0,
        actions=[
            LogInfo(msg='🔧 Debug helper araçları başlatılıyor...'),
            topic_echo_system_status,
            topic_hz_monitor
        ]
    )
    
    # 15 saniye sonra sistem durumu raporu
    status_report = TimerAction(
        period=15.0,
        actions=[
            LogInfo(msg=[
                '\n📊 === DEBUG SESSION STATUS ===\n',
                '✅ System Monitor: ', LaunchConfiguration('enable_monitoring'), '\n',
                '✅ Test Nodes: ', LaunchConfiguration('enable_test_nodes'), '\n',
                '✅ RQT Tools: ', LaunchConfiguration('enable_rqt'), '\n',
                '🎯 Debug Mode: ', LaunchConfiguration('debug_mode'), '\n',
                '⚡ Stress Level: ', LaunchConfiguration('stress_level'), '\n',
                '📈 Monitor Freq: ', LaunchConfiguration('monitor_frequency'), ' Hz\n',
                '============================'
            ])
        ]
    )
    
    # =========================================================================
    # LAUNCH DESCRIPTION ASSEMBLY
    # =========================================================================
    
    return LaunchDescription([
        
        # LAUNCH ARGÜMANLARI
        debug_mode_arg,
        enable_monitoring_arg,
        enable_rqt_arg,
        enable_test_nodes_arg,
        monitor_frequency_arg,
        stress_level_arg,
        
        # BAŞLATMA LOG MESAJI
        startup_log,
        
        # CORE MONITORING NODE (anında başlat)
        system_monitor_node,
        
        # TEST NODE'LARI (1 saniye gecikme ile)
        TimerAction(
            period=1.0,
            actions=[
                LogInfo(msg='🧪 Test node\'ları başlatılıyor...'),
                test_publisher_basic,
                test_subscriber_basic,
                test_publisher_stress
            ]
        ),
        
        # DIAGNOSTIC AGGREGATOR (2 saniye gecikme ile)
        TimerAction(
            period=2.0,
            actions=[diagnostic_aggregator]
        ),
        
        # RQT TOOLS (gecikmeli)
        delayed_rqt_tools,
        
        # DEBUG HELPERS (gecikmeli)
        delayed_helpers,
        
        # STATUS REPORT (gecikmeli)
        status_report,
        
        # Son mesaj (20 saniye sonra)
        TimerAction(
            period=20.0,
            actions=[
                LogInfo(msg=[
                    '\n🎉 === DEBUG SESSION TAMAMEN AKTİF ===\n',
                    '🔧 Tüm araçlar başarıyla başlatıldı!\n',
                    '📊 System Monitor: /debug/system_status topic\'ini izleyin\n',
                    '🧪 Test Data: /debug_test namespace\'ini kontrol edin\n',
                    '🖥️  RQT Tools: rqt_graph ile sistem topology\'sini görün\n',
                    '📈 Performance: ros2 topic hz/bw komutları ile ölçün\n',
                    '🛑 Durdurmak için: Ctrl+C\n',
                    '========================================='
                ])
            ]
        )
    ])


# =============================================================================
# KULLANIM ÖRNEKLERİ VE AÇIKLAMALAR
# =============================================================================

"""
🛠️  DEBUG SESSION KULLANIM ÖRNEKLERİ:

1. MİNİMAL DEBUG SESSION:
   ros2 launch debug_tools debug_session.py debug_mode:=minimal
   
   📋 Bu mod şunları yapar:
   - Sadece system monitor
   - Düşük threshold'lar
   - Minimal logging
   - RQT tools kapalı

2. STANDARD DEBUG SESSION:
   ros2 launch debug_tools debug_session.py debug_mode:=standard
   
   📋 Bu mod şunları yapar:
   - System monitor + basic test nodes
   - Normal threshold'lar
   - RQT graph açık
   - Orta seviye logging

3. FULL DEBUG SESSION (önerilen):
   ros2 launch debug_tools debug_session.py debug_mode:=full
   
   📋 Bu mod şunları yapar:
   - Tüm monitoring araçları
   - Tüm test node'ları
   - Tüm RQT tools
   - Verbose logging
   - Diagnostic aggregator

4. STRESS TEST SESSION:
   ros2 launch debug_tools debug_session.py debug_mode:=stress_test stress_level:=high
   
   📋 Bu mod şunları yapar:
   - Yüksek frekanslı test node'ları
   - Sistem limitlerini test etme
   - Performance monitoring
   - Resource usage tracking

5. CUSTOM CONFIGURATION:
   ros2 launch debug_tools debug_session.py debug_mode:=full enable_rqt:=false monitor_frequency:=5.0
   
   📋 Bu mod şunları yapar:
   - Full monitoring ama RQT yok
   - 5 Hz monitoring frequency
   - Custom parametreler

6. LIGHTWEIGHT SESSION (resource constrained):
   ros2 launch debug_tools debug_session.py debug_mode:=minimal enable_rqt:=false enable_test_nodes:=false
   
   📋 Bu mod şunları yapar:
   - Sadece system monitor
   - Minimal resource kullanımı
   - GUI araçları yok

🔧 SESSION SIRA ÇALIŞMA KOMUTLARI:

# Session başlattıktan sonra bu komutları başka terminal'lerde çalıştırın:

# 1. Sistem durumunu izleme
ros2 topic echo /debug/system_status

# 2. Test topic'lerini izleme  
ros2 topic list | grep debug_test
ros2 topic echo /debug_test/test_basic

# 3. Performance ölçümü
ros2 topic hz /debug_test/test_basic
ros2 topic bw /debug_test/stress/data

# 4. Node durumları
ros2 node list | grep debug
ros2 node info /debug/system_monitor

# 5. Diagnostic bilgileri
ros2 topic echo /diagnostics

# 6. Manual debug tools
python3 ~/ros2_ws/src/debug_tools/scripts/ros2_debug_tools.py

# 7. Custom monitoring
ros2 run debug_tools system_monitor --ros-args -p monitor_frequency:=10.0

⚠️  TROUBLESHOOTING:

1. RQT araçları açılmıyor:
   - X11 forwarding aktif mi? (WSL için)
   - rqt paketleri kurulu mu? sudo apt install ros-jazzy-rqt*

2. High CPU usage:
   - stress_level'ı düşürün
   - debug_mode'u minimal yapın
   - enable_test_nodes:=false yapın

3. Topic'lerde mesaj yok:
   - day5 paketinin build edildiğini kontrol edin
   - Node'ların başarıyla başladığını kontrol edin
   - Namespace'leri kontrol edin

4. Diagnostic mesajları görünmüyor:
   - diagnostic_aggregator paketinin kurulu olduğunu kontrol edin
   - /diagnostics topic'ini kontrol edin

5. Session startup yavaş:
   - Timer delay'lerini azaltın
   - Gereksiz araçları deaktive edin
   - debug_mode:=minimal kullanın
"""