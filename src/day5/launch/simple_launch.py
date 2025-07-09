# =============================================================================
# DOSYA: launch/simple_launch.py
# AMAÇ: Day5 paketinin temel node'larını başlatmak için basit launch dosyası
# KULLANIM: ros2 launch day5 simple_launch.py
# ÖĞRENME: Launch file yapısı ve temel node başlatma
# =============================================================================

# ROS2 launch system için gerekli import'lar
from launch import LaunchDescription              # Launch dosyasının ana yapısı
from launch_ros.actions import Node              # ROS2 node'larını başlatmak için
from launch.actions import DeclareLaunchArgument # Command line argümanları için
from launch.substitutions import LaunchConfiguration  # Argüman değerlerini almak için

# =============================================================================
# LAUNCH FUNCTION - ANA FONKSİYON
# =============================================================================

def generate_launch_description():
    """
    Day5 paketinin basit launch description'ı
    
    Bu launch dosyası:
    - Parameter publisher ve subscriber node'larını başlatır
    - Command line argümanları ile konfigürasyon sağlar
    - Basit parameter yönetimi yapar
    
    Returns:
        LaunchDescription: Çalıştırılacak aksiyonların listesi
    """
    
    # =========================================================================
    # LAUNCH ARGÜMANLARI (COMMAND LINE PARAMETERS)
    # =========================================================================
    
    # Yayın frekansı argümanı - Publisher'ın ne kadar hızlı yayın yapacağı
    frequency_arg = DeclareLaunchArgument(
        'frequency',                                    # Argüman adı
        default_value='2.0',                           # Varsayılan değer: 2 Hz
        description='Publisher yayın frekansı (Hz) - Saniyede kaç mesaj'
    )
    
    # Topic adı argümanı - Hangi topic'te mesajlar yayınlanacak/dinlenecek
    topic_arg = DeclareLaunchArgument(
        'topic',
        default_value='day5_chatter',                  # day5 paketi için özel topic adı
        description='Publisher ve Subscriber için topic adı'
    )
    
    # Debug mode argümanı - Detaylı log mesajları gösterilsin mi?
    debug_arg = DeclareLaunchArgument(
        'debug',
        default_value='true',                          # Varsayılan olarak debug aktif
        description='Debug mode aktif mi? (true/false) - Detaylı loglar için'
    )
    
    # Verbose mode argümanı - Subscriber'ın detaylı mesaj analizi yapması
    verbose_arg = DeclareLaunchArgument(
        'verbose',
        default_value='true', 
        description='Subscriber verbose mode - Her mesajı detaylı göster'
    )
    
    # Queue size argümanı - Message buffer boyutları
    queue_size_arg = DeclareLaunchArgument(
        'queue_size',
        default_value='15',
        description='Publisher ve Subscriber queue buffer boyutu'
    )
    
    # Message content argümanı - Yayınlanacak mesajın içeriği
    message_content_arg = DeclareLaunchArgument(
        'message_content',
        default_value='Day5 Launch dosyasından gelen mesaj! 🚀',
        description='Publisher tarafından yayınlanacak temel mesaj içeriği'
    )
    
    # =========================================================================
    # NODE TANIMLARI
    # =========================================================================
    
    # PARAMETER PUBLISHER NODE
    # ------------------------
    # Parametrelerle configüre edilmiş mesaj yayınlayan node
    
    parameter_publisher_node = Node(
        package='day5',                                # Paket adı - day5 paketi
        executable='parameter_publisher',              # Çalıştırılacak executable dosya
        name='day5_publisher',                         # Node adı (ROS2 sisteminde görünen)
        namespace='day5_demo',                         # Namespace - topic'leri organize etmek için
        output='screen',                               # Log çıktılarını terminal'de göster
        
        # PARAMETER AYARLARI
        # Bu parametreler node'un constructor'ında declare edilen parametreleri override eder
        parameters=[{
            'publish_frequency': LaunchConfiguration('frequency'),      # Launch argümanından al
            'message_content': LaunchConfiguration('message_content'),  # Launch argümanından al
            'topic_name': LaunchConfiguration('topic'),                 # Launch argümanından al
            'queue_size': LaunchConfiguration('queue_size'),            # Launch argümanından al
            'debug_mode': LaunchConfiguration('debug')                  # Launch argümanından al
        }],
        
        # REMAPPING - Topic isimlerini değiştirme
        # Node internal'da hangi topic adını kullanıyorsa, dışarıdan nasıl görüneceğini ayarlar
        remappings=[
            ('chatter', LaunchConfiguration('topic'))   # Internal topic -> External topic mapping
        ],
        
        # ROS ARGUMENTS - Ek ROS2 ayarları
        # Log seviyesini ayarlayabiliriz
        arguments=['--ros-args', '--log-level', 'INFO']
    )
    
    # PARAMETER SUBSCRIBER NODE  
    # -------------------------
    # Mesajları dinleyen ve analiz eden node
    
    parameter_subscriber_node = Node(
        package='day5',
        executable='parameter_subscriber', 
        name='day5_subscriber',
        namespace='day5_demo',                         # Publisher ile aynı namespace
        output='screen',
        
        # PARAMETER AYARLARI
        parameters=[{
            'topic_name': LaunchConfiguration('topic'),    # Aynı topic'i dinle
            'queue_size': LaunchConfiguration('queue_size'), # Queue size'ı argümandan al
            'verbose_mode': LaunchConfiguration('verbose'), # Verbose mode argümandan al
            'enable_filtering': False,                      # Filtreleme kapalı (basit örnek için)
            'filter_keyword': 'ROS2',                      # Kullanılmayacak ama tanımlı olmalı
            'enable_statistics': True,                      # İstatistik aktif
            'log_level': 2                                 # INFO level (0:ERROR, 1:WARN, 2:INFO, 3:DEBUG)
        }],
        
        # REMAPPING - Publisher ile aynı topic'i dinlemesi için
        remappings=[
            ('chatter', LaunchConfiguration('topic'))   # Publisher ile aynı topic
        ],
        
        # ROS ARGUMENTS
        arguments=['--ros-args', '--log-level', 'INFO']
    )
    
    # =========================================================================
    # LAUNCH DESCRIPTION OLUŞTURMA
    # =========================================================================
    
    # Tüm launch argümanlarını ve node'ları bir araya getiriyoruz
    # Sıralama önemli: Önce argümanlar, sonra node'lar tanımlanmalı
    
    return LaunchDescription([
        # LAUNCH ARGÜMANLARI (önce bunlar tanımlanmalı)
        frequency_arg,
        topic_arg, 
        debug_arg,
        verbose_arg,
        queue_size_arg,
        message_content_arg,
        
        # NODE'LAR (argümanlardan sonra tanımlanmalı)
        parameter_publisher_node,
        parameter_subscriber_node,
    ])

# =============================================================================
# KULLANIM ÖRNEKLERİ VE AÇIKLAMALAR
# =============================================================================

"""
🚀 BASIT LAUNCH DOSYASI KULLANIM ÖRNEKLERİ:

1. VARSAYILAN AYARLARLA ÇALIŞTIRMA:
   ros2 launch day5 simple_launch.py
   
   📋 Bu komut şunları yapar:
   - Publisher: 2 Hz frekansında mesaj yayınlar
   - Topic: day5_chatter
   - Debug ve verbose mode aktif
   - Queue size: 15

2. FREKANS DEĞİŞTİREREK:
   ros2 launch day5 simple_launch.py frequency:=5.0
   
   📋 Publisher saniyede 5 mesaj yayınlar

3. TOPIC ADI DEĞİŞTİREREK:
   ros2 launch day5 simple_launch.py topic:=my_custom_topic
   
   📋 Mesajlar my_custom_topic adlı topic'te yayınlanır

4. DEBUG KAPATARAK (AZ LOG MESAJI):
   ros2 launch day5 simple_launch.py debug:=false verbose:=false
   
   📋 Daha az log mesajı, performans odaklı çalışma

5. YÜKSEK PERFORMANS AYARLARI:
   ros2 launch day5 simple_launch.py frequency:=50.0 queue_size:=100 debug:=false
   
   📋 Yüksek frekanslı, büyük buffer'lı, az log'lu çalışma

6. CUSTOM MESAJ İÇERİĞİ:
   ros2 launch day5 simple_launch.py message_content:="Benim özel mesajım!"
   
   📋 Publisher bu mesajı temel alarak yayın yapar

7. TÜM PARAMETRELERİ DEĞİŞTİRME:
   ros2 launch day5 simple_launch.py frequency:=10.0 topic:=robot_chat debug:=true queue_size:=50 message_content:="Robot test mesajı"

8. LAUNCH ARGÜMANLARINI GÖRMEK:
   ros2 launch day5 simple_launch.py --show-args
   
   📋 Mevcut tüm argümanları ve açıklamalarını gösterir

🔧 ÇALIŞIRKEN MONİTÖRİNG VE DEBUG:

1. TOPIC'LERİ LİSTELEME:
   ros2 topic list
   
   📋 /day5_demo/day5_chatter gibi namespace'li topic'leri göreceksiniz

2. MESAJLARI DİNLEME:
   ros2 topic echo /day5_demo/day5_chatter
   
   📋 Yayınlanan mesajları gerçek zamanlı gösterir

3. NODE'LARI LİSTELEME:
   ros2 node list
   
   📋 /day5_demo/day5_publisher ve /day5_demo/day5_subscriber

4. NODE BİLGİLERİNİ GÖRME:
   ros2 node info /day5_demo/day5_publisher
   
   📋 Node'un publisher/subscriber/service bilgileri

5. PARAMETRELERİ GÖRME:
   ros2 param list /day5_demo/day5_publisher
   ros2 param get /day5_demo/day5_publisher publish_frequency
   
   📋 Çalışan node'un parametrelerini gösterir

6. PARAMETRELERİ ÇALIŞMA ZAMANINDA DEĞİŞTİRME:
   ros2 param set /day5_demo/day5_publisher publish_frequency 20.0
   
   📋 Çalışan node'un parametresini dinamik olarak değiştirir

7. SİSTEM TOPOLOGY'SİNİ GÖRME:
   rqt_graph
   
   📋 Node'lar ve topic'ler arasındaki bağlantıları grafik olarak gösterir

8. PERFORMANS MONİTÖRİNG:
   ros2 topic hz /day5_demo/day5_chatter    # Mesaj frekansını ölç
   ros2 topic bw /day5_demo/day5_chatter    # Bandwidth kullanımını ölç

⚠️  TROUBLESHOOTING:

1. "Package not found" hatası:
   - colcon build --packages-select day5
   - source install/setup.bash

2. "Executable not found" hatası:
   - CMakeLists.txt'de executable'ların doğru tanımlandığını kontrol edin
   - Build işleminin başarılı olduğunu kontrol edin

3. Topic'lere mesaj gelmiyor:
   - Node'ların aynı topic adını kullandığını kontrol edin
   - Namespace'lerin doğru olduğunu kontrol edin
   - ros2 topic list ile topic'lerin var olduğunu kontrol edin

4. Parametre değişiklikleri etkili olmuyor:
   - Node'un parameter callback'i implement etmesi gerekebilir
   - Node'u yeniden başlatmayı deneyin
"""