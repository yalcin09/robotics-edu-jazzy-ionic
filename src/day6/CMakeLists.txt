# =============================================================================
# CMAKE KURULUM VE PROJE TANIMI - DEBUG TOOLS
# =============================================================================

# CMake minimum versiyonu: ROS2 Jazzy için 3.8 gerekli
cmake_minimum_required(VERSION 3.8)

# Proje adı: Debug ve monitoring araçları için
project(day6)

# =============================================================================
# DERLEYICI AYARLARI VE UYARILAR
# =============================================================================

# C++ standart derleyici kontrolü ve uyarı seviyeleri
# Debug araçları için extra strict olalım
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -Werror)  # Tüm uyarıları hata yap
endif()

# =============================================================================
# ROS2 PAKET BAĞIMLILIKLARI
# =============================================================================

# ROS2 build sistemi
find_package(ament_cmake REQUIRED)

# ROS2 temel kütüphaneler
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)        # Sensör mesajları için
find_package(diagnostic_msgs REQUIRED)     # Diagnostic mesajları için

# ROS2 lifecycle nodes - advanced node management için
find_package(rclcpp_lifecycle REQUIRED)

# ROS2 service türleri
find_package(day2 REQUIRED)  # Temel service türleri

# =============================================================================
# DEBUG VE MONİTÖRİNG NODE'LARI
# =============================================================================

# System Monitor Node: Sistem kaynaklarını izleyen node
add_executable(system_monitor src/system_monitor.cpp)
ament_target_dependencies(system_monitor 
  rclcpp                # ROS2 temel
  std_msgs             # String, Int32 mesajları
  diagnostic_msgs      # DiagnosticArray mesajları
)

# Topic Monitor Node: Topic trafiğini izleyen node
add_executable(topic_monitor src/topic_monitor.cpp)
ament_target_dependencies(topic_monitor 
  rclcpp               # ROS2 temel
  std_msgs            # Mesaj türleri
  geometry_msgs       # Twist, Pose mesajları
)

# Debug Publisher Node: Test mesajları üreten node
add_executable(debug_publisher src/debug_publisher.cpp)
ament_target_dependencies(debug_publisher 
  rclcpp              # ROS2 temel
  std_msgs           # String mesajları
  geometry_msgs      # Twist mesajları
  sensor_msgs        # LaserScan, Image vs.
)

# Diagnostic Node: Sistem sağlığını raporlayan node
add_executable(diagnostic_node src/diagnostic_node.cpp)
ament_target_dependencies(diagnostic_node 
  rclcpp             # ROS2 temel
  diagnostic_msgs    # DiagnosticArray, DiagnosticStatus
  std_msgs          # String mesajları
)

# Service Debug Node: Service call debugging için
add_executable(service_debug src/service_debug.cpp)
ament_target_dependencies(service_debug 
  rclcpp              # ROS2 temel
  day2  # AddTwoInts service
  std_msgs           # String mesajları
)

# =============================================================================
# DOSYA KURULUMU (INSTALLATION)
# =============================================================================

# Executable dosyaları sistem yoluna kurulum
install(TARGETS
  system_monitor
  topic_monitor
  debug_publisher
  diagnostic_node
  service_debug
  DESTINATION lib/${PROJECT_NAME}
)

# Launch dosyalarını kurulum
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
  FILES_MATCHING PATTERN "*.py"
)

# Config dosyalarını kurulum
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}/
  FILES_MATCHING PATTERN "*.yaml"
)

# Script dosyalarını kurulum (debug script'leri)
install(DIRECTORY
  scripts
  DESTINATION share/${PROJECT_NAME}/
  FILES_MATCHING PATTERN "*.py"
  PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE
              GROUP_READ GROUP_EXECUTE
              WORLD_READ WORLD_EXECUTE
)

# =============================================================================
# TEST VE KOD KALİTESİ KONTROLLERI
# =============================================================================

# Test'leri sadece BUILD_TESTING aktifse çalıştır
if(BUILD_TESTING)
  # Otomatik kod kalitesi kontrolleri
  find_package(ament_lint_auto REQUIRED)
  
  # Debug araçları için extra strict linting
  find_package(ament_cmake_cppcheck REQUIRED)
  find_package(ament_cmake_cpplint REQUIRED)
  find_package(ament_cmake_flake8 REQUIRED)
  find_package(ament_cmake_uncrustify REQUIRED)
  
  # Tüm lint testlerini çalıştır
  ament_lint_auto_find_test_dependencies()
  
  # Static analysis ek kontrolleri
  ament_cppcheck(src/)
  ament_cpplint(src/)
  ament_uncrustify(src/)
endif()

# =============================================================================
# PAKET EXPORT AYARLARI
# =============================================================================

# Debug araçları için özel export ayarları
ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME})
ament_export_dependencies(
  rclcpp
  std_msgs
  geometry_msgs
  sensor_msgs
  diagnostic_msgs
  rclcpp_lifecycle
  day2
)

# Package'ı tamamla
ament_package()