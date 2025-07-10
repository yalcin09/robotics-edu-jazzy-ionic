# =============================================================================
# CMAKE KURULUM VE PROJE TANIMI - DAY7
# =============================================================================

# CMake minimum versiyonu: ROS2 Jazzy için 3.8 gerekli
# Bu versiyon modern CMake features'ları destekler
cmake_minimum_required(VERSION 3.8)

# Proje adı: package.xml'deki name ile aynı olmalı
# Bu isim CMake variables'ında kullanılır (${PROJECT_NAME})
project(day7)

# =============================================================================
# ROS2 PAKET BAĞIMLILIKLARI
# =============================================================================

# ament_cmake: ROS2'nin CMake build sistemi
# Bu paketi bulmazsa build edilemez
find_package(ament_cmake REQUIRED)

# =============================================================================
# DOSYA KURULUMU (INSTALLATION)
# =============================================================================

# WORLDS VE LAUNCH DİZİNLERİNİ KURULUM
# Bu komut worlds/ ve launch/ dizinlerini install dizinine kopyalar
# DESTINATION: Dosyaların kurulacağı yer (share/day7/ altına)
# share/: ROS2'de data dosyaları için standart dizin
install(DIRECTORY 
  worlds          # worlds/ dizinini kopyala
  launch          # launch/ dizinini kopyala
  DESTINATION share/${PROJECT_NAME}/    # /opt/ros/jazzy/share/day7/ altına
)

# NOT: ${PROJECT_NAME} = "day7" (yukarıda tanımladığımız proje adı)
# Bu sayede paket adı değişirse otomatik güncellenir

# =============================================================================
# PAKET EXPORT AYARLARI
# =============================================================================

# ament_package: ROS2 build sistemine paketin hazır olduğunu bildirir
# Bu komut EN SON satır olmalı - tüm install'lardan sonra
ament_package()

# =============================================================================
# KURULUM SONRASI DOSYA YERLEŞİMİ:
# /opt/ros/jazzy/share/day7/
# ├── worlds/
# │   └── my_world.sdf
# └── launch/
#     └── gazebo.py
# =============================================================================
