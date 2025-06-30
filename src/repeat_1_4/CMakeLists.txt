cmake_minimum_required(VERSION 3.8)
project(repeat_1_4)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Paketleri bul
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Message/Service/Action dosyaları
set(msg_files "msg/Position.msg")
set(srv_files "srv/MoveRobot.srv")
set(action_files "action/GoToPoint.action")

# Interface generation
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  ${action_files}
  DEPENDENCIES builtin_interfaces std_msgs
)

# Executable'lar

# 1. Position Publisher (Message)
add_executable(position_publisher src/position_publisher.cpp)
ament_target_dependencies(position_publisher rclcpp std_msgs)
rosidl_target_interfaces(position_publisher ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 2. Position Subscriber (Message)
add_executable(position_subscriber src/position_subscriber.cpp)
ament_target_dependencies(position_subscriber rclcpp std_msgs)
rosidl_target_interfaces(position_subscriber ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 3. Move Service Server
add_executable(move_service_server src/move_service_server.cpp)
ament_target_dependencies(move_service_server rclcpp)
rosidl_target_interfaces(move_service_server ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 4. Move Service Client
add_executable(move_service_client src/move_service_client.cpp)
ament_target_dependencies(move_service_client rclcpp)
rosidl_target_interfaces(move_service_client ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 5. GoToPoint Action Server
add_executable(goto_action_server src/goto_action_server.cpp)
ament_target_dependencies(goto_action_server rclcpp rclcpp_action)
rosidl_target_interfaces(goto_action_server ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 6. GoToPoint Action Client
add_executable(goto_action_client src/goto_action_client.cpp)
ament_target_dependencies(goto_action_client rclcpp rclcpp_action)
rosidl_target_interfaces(goto_action_client ${PROJECT_NAME} "rosidl_typesupport_cpp")

# Install
install(TARGETS
  position_publisher
  position_subscriber
  move_service_server
  move_service_client
  goto_action_server
  goto_action_client
  DESTINATION lib/${PROJECT_NAME}
)

# Launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
