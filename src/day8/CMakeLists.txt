cmake_minimum_required(VERSION 3.8)
project(day8)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Minimal dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

# C++ executable
add_executable(simple_robot_controller_cpp src/simple_robot_controller.cpp)
ament_target_dependencies(simple_robot_controller_cpp
  rclcpp
  geometry_msgs
  std_msgs
)

install(TARGETS simple_robot_controller_cpp
  DESTINATION lib/${PROJECT_NAME}
)

# Python support
ament_python_install_package(${PROJECT_NAME})
install(PROGRAMS
  day8/simple_robot_controller.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install files
install(DIRECTORY urdf launch rviz
  DESTINATION share/${PROJECT_NAME}
)

ament_package()