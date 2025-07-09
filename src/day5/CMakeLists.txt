cmake_minimum_required(VERSION 3.8)
project(day5)

# =============================================================================
# DERLEYICI AYARLARI VE UYARILAR
# =============================================================================

# C++ standart derleyici kontrolü ve uyarı seviyeleri
# Bu ayarlar kod kalitesini artırmak için kullanılır
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)  # Tüm önemli uyarıları etkinleştir
endif()

# =============================================================================
# ROS2 PAKET BAĞIMLILIKLARI
# =============================================================================

# ROS2 build sistemi: ament_cmake kullanıyoruz
find_package(ament_cmake REQUIRED)

# ROS2 C++ client library: Node oluşturma, publisher/subscriber için
find_package(rclcpp REQUIRED)

# Standart mesaj türleri: String, Int32, Bool vs. için
find_package(std_msgs REQUIRED)

# Geometrik mesajlar: Twist (hız), Point (konum) vs. için
find_package(geometry_msgs REQUIRED)

# Component-based node'lar için: Daha modüler node yapısı
find_package(rclcpp_components REQUIRED)

# =============================================================================
# EXECUTABLE DOSYALARI OLUŞTURMA
# =============================================================================

# Parameter Publisher Node: Parametreleri kullanarak mesaj yayınlar
add_executable(parameter_publisher src/parameter_publisher.cpp)
ament_target_dependencies(parameter_publisher 
  rclcpp           # ROS2 temel kütüphanesi
  std_msgs         # String mesaj türü için
)

# Parameter Subscriber Node: Parametreleri kullanarak mesaj dinler
add_executable(parameter_subscriber src/parameter_subscriber.cpp)
ament_target_dependencies(parameter_subscriber 
  rclcpp           # ROS2 temel kütüphanesi
  std_msgs         # String mesaj türü için
)

# Configurable Publisher: Çoklu parametre örneği
add_executable(configurable_publisher src/configurable_publisher.cpp)
ament_target_dependencies(configurable_publisher 
  rclcpp           # ROS2 temel kütüphanesi
  std_msgs         # String mesaj türü için
  geometry_msgs    # Twist mesaj türü için
)

# Multi Node Example: Birden fazla node'u aynı executable'da çalıştırma
add_executable(multi_node_example src/multi_node_example.cpp)
ament_target_dependencies(multi_node_example 
  rclcpp           # ROS2 temel kütüphanesi
  std_msgs         # Mesaj türleri için
)

# =============================================================================
# DOSYA KURULUMU (INSTALLATION)
# =============================================================================

# Executable dosyaları sistem yoluna kurulum
# Bu sayede 'ros2 run launch_tutorials parameter_publisher' komutu çalışır
install(TARGETS
  parameter_publisher
  parameter_subscriber  
  configurable_publisher
  multi_node_example
  DESTINATION lib/${PROJECT_NAME}    # /opt/ros/jazzy/lib/launch_tutorials/ altına kurulur
)

# Launch dosyalarını kurulum
# Launch dosyaları share dizinine kurulur ki 'ros2 launch' komutu bulabilsin
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/  # /opt/ros/jazzy/share/launch_tutorials/launch/ altına
)

# Konfigürasyon dosyalarını kurulum
# YAML parameter dosyaları burada saklanır
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}/  # /opt/ros/jazzy/share/launch_tutorials/config/ altına
)

# =============================================================================
# TEST VE KOD KALİTESİ KONTROLLERI
# =============================================================================

# Test'leri sadece BUILD_TESTING aktifse çalıştır
if(BUILD_TESTING)
  # Otomatik kod kalitesi kontrolleri bul
  find_package(ament_lint_auto REQUIRED)
  
  # Standart lint kurallarını çalıştır:
  # - cpplint: C++ kod stili kontrolü
  # - cppcheck: Static analysis
  # - uncrustify: Kod formatlama kontrolü
  # - flake8: Python kod stili (eğer Python dosyası varsa)
  ament_lint_auto_find_test_dependencies()
endif()

# =============================================================================
# PAKET EXPORT AYARLARI
# =============================================================================

# ament_cmake sistemine bu paketin hazır olduğunu bildir
# Bu komut son satır olmalı - tüm kurulumlardan sonra
ament_package()