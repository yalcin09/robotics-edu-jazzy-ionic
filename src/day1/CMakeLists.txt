cmake_minimum_required(VERSION 3.8)
project(day1)


# C++ standardını belirle - ROS2 için C++17 gerekli
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)  # Compiler warning'leri aktifleştir
endif()

# Gerekli paketleri bul ve import et
find_package(ament_cmake REQUIRED)        # Ament build system (ROS2'nin build sistemi)
find_package(rclcpp REQUIRED)             # ROS2 C++ client library
find_package(std_msgs REQUIRED)           # Standard message definitions

# Publisher executable oluştur
add_executable(publisher_node src/publisher.cpp)
# Publisher için gerekli include directory'leri ekle
target_include_directories(publisher_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>  # Build zamanında include
  $<INSTALL_INTERFACE:include>)                           # Install zamanında include
# Publisher için gerekli target properties ayarla
target_compile_features(publisher_node PUBLIC c_std_99 cxx_std_17)  # C99 ve C++17 standartları
# Publisher executable'ını gerekli ROS2 library'lerine link et
ament_target_dependencies(publisher_node
  rclcpp      # ROS2 C++ library
  std_msgs    # Standard message types
)

# Subscriber executable oluştur
add_executable(subscriber_node src/subscriber.cpp)
# Subscriber için gerekli include directory'leri ekle
target_include_directories(subscriber_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
# Subscriber için gerekli target properties ayarla
target_compile_features(subscriber_node PUBLIC c_std_99 cxx_std_17)
# Subscriber executable'ını gerekli ROS2 library'lerine link et
ament_target_dependencies(subscriber_node
  rclcpp
  std_msgs
)

# Executable'ları install et (ros2 run ile çalıştırılabilir olması için)
install(TARGETS 
  publisher_node     # Publisher executable
  subscriber_node    # Subscriber executable
  DESTINATION lib/${PROJECT_NAME}    # Install lokasyonu: lib/my_first_robot/
)

# Ament package olarak işaretle - ROS2 package management için gerekli
ament_package()