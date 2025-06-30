cmake_minimum_required(VERSION 3.8)
project(day2_2)

# Compiler options
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Gerekli paketleri bul
find_package(ament_cmake REQUIRED)              # Ament build system
find_package(rclcpp REQUIRED)                   # ROS2 C++ client library
find_package(std_msgs REQUIRED)                 # Standard messages
find_package(geometry_msgs REQUIRED)            # Geometry messages
find_package(day2 REQUIRED)                     # Custom message paketimiz
find_package(rclcpp_action REQUIRED)


# Robot Status Publisher executable
add_executable(robot_publisher_node src/robot_publisher.cpp)
target_include_directories(robot_publisher_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(robot_publisher_node PUBLIC c_std_99 cxx_std_17)
# Publisher'ı gerekli library'lere link et
ament_target_dependencies(robot_publisher_node
  rclcpp              # ROS2 C++ library
  std_msgs            # Standard messages
  geometry_msgs       # Geometry messages  
  day2                # Custom messages
)

# Robot Status Subscriber executable
add_executable(robot_subscriber_node src/robot_subscriber.cpp)
target_include_directories(robot_subscriber_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(robot_subscriber_node PUBLIC c_std_99 cxx_std_17)
# Subscriber'ı gerekli library'lere link et
ament_target_dependencies(robot_subscriber_node
  rclcpp
  std_msgs
  geometry_msgs
  day2
)

# Sensor Simulator executable
add_executable(sensor_simulator_node src/sensor_simulator.cpp)
target_include_directories(sensor_simulator_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(sensor_simulator_node PUBLIC c_std_99 cxx_std_17)
# Sensor simulator'ı gerekli library'lere link et
ament_target_dependencies(sensor_simulator_node
  rclcpp
  std_msgs
  day2
)

# Message Analyzer executable
add_executable(message_analyzer_node src/message_analyzer.cpp)
target_include_directories(message_analyzer_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(message_analyzer_node PUBLIC c_std_99 cxx_std_17)
# Message analyzer'ı gerekli library'lere link et
ament_target_dependencies(message_analyzer_node
  rclcpp
  std_msgs
  day2
)


# ÖDEV 3: Filtering Subscriber executable
add_executable(filtering_subscriber_node src/filtering_subscriber.cpp)
target_include_directories(filtering_subscriber_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(filtering_subscriber_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(filtering_subscriber_node rclcpp std_msgs geometry_msgs day2)

# ÖDEV 4: Performance Test executable
add_executable(performance_test_node src/performance_test.cpp)
target_include_directories(performance_test_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(performance_test_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(performance_test_node rclcpp std_msgs day2)

# GÜN 3 EXECUTABLE'LARI - SERVICE/CLIENT

# Robot Command Server executable
add_executable(robot_command_server_node src/robot_command_server.cpp)
target_include_directories(robot_command_server_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(robot_command_server_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(robot_command_server_node rclcpp std_msgs geometry_msgs day2)

# Robot Command Client executable
add_executable(robot_command_client_node src/robot_command_client.cpp)
target_include_directories(robot_command_client_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(robot_command_client_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(robot_command_client_node rclcpp std_msgs geometry_msgs day2)

# Robot Status Service executable
add_executable(robot_status_service_node src/robot_status_service.cpp)
target_include_directories(robot_status_service_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(robot_status_service_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(robot_status_service_node rclcpp std_msgs geometry_msgs day2)



# Navigate Action Server executable
add_executable(navigate_action_server src/navigate_action_server.cpp)
target_include_directories(navigate_action_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(navigate_action_server PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(navigate_action_server rclcpp rclcpp_action std_msgs geometry_msgs day2)

# Navigate Action Client executable
add_executable(navigate_action_client src/navigate_action_client.cpp)
target_include_directories(navigate_action_client PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(navigate_action_client PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(navigate_action_client rclcpp rclcpp_action std_msgs geometry_msgs day2)



# Executable'ları install et
install(TARGETS 
  robot_publisher_node
  robot_subscriber_node
  sensor_simulator_node
  message_analyzer_node
  filtering_subscriber_node
  performance_test_node
  robot_command_server_node
  robot_command_client_node
  robot_status_service_node
  navigate_action_server
  navigate_action_client
  DESTINATION lib/${PROJECT_NAME}
)

# Launch dosyaları için klasör oluştur (ileriki günlerde kullanacağız)
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.py"
)

ament_package()