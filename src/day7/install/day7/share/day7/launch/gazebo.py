#!/usr/bin/env python3
# =============================================================================
# DOSYA: launch/gazebo.py
# AMAÇ: Day7 Gazebo simülasyonunu ROS2 launch sistemi ile başlatma
# KULLANIM: ros2 launch day7 gazebo.py
# ÖĞRENME: Launch system, file paths, process execution
# =============================================================================

# PYTHON IMPORT'LAR - ROS2 launch sistemi için gerekli kütüphaneler
from launch import LaunchDescription           # Launch dosyasının ana yapısı
from launch.actions import ExecuteProcess      # Harici process çalıştırma
from launch_ros.substitutions import FindPackageShare  # ROS2 paket yolu bulma
from launch.substitutions import PathJoinSubstitution  # Dosya yolu birleştirme

def generate_launch_description():
    """
    Launch description oluşturan ana fonksiyon
    
    Bu fonksiyon ROS2 launch sistemi tarafından otomatik çağrılır.
    LaunchDescription objesi döndürmelidir.
    
    Returns:
        LaunchDescription: Çalıştırılacak action'ların listesi
    """
    
    # =========================================================================
    # DOSYA YOLU OLUŞTURMA
    # =========================================================================
    
    # WORLD DOSYASI YOLUNU OLUŞTUR
    # FindPackageShare: Paketin install dizinini bulur
    # PathJoinSubstitution: Güvenli yol birleştirme yapar
    world_file = PathJoinSubstitution([
        FindPackageShare('day7'),        # /opt/ros/jazzy/share/day7/
        'worlds',                        # worlds/ alt dizini
        'my_world.sdf'                   # my_world.sdf dosyası
    ])
    
    # SONUÇ: /opt/ros/jazzy/share/day7/worlds/my_world.sdf
    
    # =========================================================================
    # LAUNCH DESCRIPTION OLUŞTURMA
    # =========================================================================
    
    # LaunchDescription: Tüm action'ları içeren ana container
    # Liste içinde action'lar sırayla çalıştırılır
    return LaunchDescription([
        
        # GAZEBO SİMÜLATÖR PROCESS'İNİ BAŞLAT
        ExecuteProcess(
            # cmd: Çalıştırılacak komut (liste formatında)
            # ['gz', 'sim', world_file] = "gz sim /path/to/my_world.sdf"
            cmd=['gz', 'sim', world_file],
            
            # output: Process çıktısını nereye yönlendir
            # 'screen': Terminal'de göster
            # 'log': Log dosyasına yaz
            output='screen'
        )
        
        # NOT: Tek action var, bu yüzden liste sadece bir element içeriyor
        # Gelecekte buraya ROS2-Gazebo bridge ekleyebiliriz
        
    ])

# =============================================================================
# LAUNCH DOSYASI KULLANIM ÖRNEKLERİ
# =============================================================================

"""
KULLANIM KOMUTLARI:

1. TEMEL KULLANIM:
   ros2 launch day7 gazebo.py
   
   📋 Bu komut şunları yapar:
   - day7 paketini bulur
   - worlds/my_world.sdf dosyasını locate eder
   - gz sim komutu ile Gazebo'yu başlatır
   - World dosyasını yükler

2. LAUNCH DOSYASINI DEBUG ETME:
   ros2 launch day7 gazebo.py --debug
   
   📋 Detaylı debug bilgileri gösterir

3. LAUNCH DOSYASINI GÖRÜNTÜLEME:
   ros2 launch day7 gazebo.py --show-args
   
   📋 Launch argümanlarını listeler (şu anda yok)

ÇALIŞMA AKIŞI:
1. ROS2 launch sistemi bu dosyayı okur
2. generate_launch_description() fonksiyonunu çağırır
3. FindPackageShare day7 paketini bulur
4. World dosyası yolunu oluşturur
5. gz sim komutunu çalıştırır
6. Gazebo açılır ve world'ü yükler

SORUN GİDERME:
- "Package day7 not found": Paketi build etmeyi unutmuşsunuz
- "World file not found": World dosyası yolu yanlış
- "gz command not found": Gazebo kurulu değil
"""
