cmake_minimum_required(VERSION 3.8)
project(day2)

# Compiler options
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Gerekli paketleri bul
find_package(ament_cmake REQUIRED)               # Ament build system
find_package(builtin_interfaces REQUIRED)        # Time, Duration gibi temel türler
find_package(std_msgs REQUIRED)                  # Header, String gibi standart mesajlar
find_package(geometry_msgs REQUIRED)             # Point, Vector3, Pose, Twist
find_package(rosidl_default_generators REQUIRED) # Message/service/action generator

# Message dosyalarını tanımla
set(msg_files
  "msg/RobotStatus.msg"     # Robot durumu message'ı
  "msg/SensorData.msg"      # Sensör verisi message'ı
  "msg/MotorStatus.msg"     # ÖDEV 1: Motor durumu message'ı
  "msg/RobotArray.msg"      # ÖDEV 2: Çoklu robot array message'ı
)

# Service dosyalarını tanımla
set(srv_files
  "srv/RobotCommand.srv"        # Robot komut service'i
  "srv/GetRobotStatus.srv"      # Robot durum sorgulama service'i  
  "srv/CalculatePath.srv"       # Path planning service'i
  "srv/EmergencyStop.srv"       # Acil durdurma service'i
)

# Action dosyalarını tanımla (şimdilik boş, ileriki günlerde kullanacağız)  
set(action_files
  "action/Navigate.action"          # Robot navigation action
  "action/PickAndPlace.action"      # Object manipulation action
  "action/MapArea.action"           # Area mapping action
  "action/ChargeBattery.action"     # Battery charging action
)

# Message/Service/Action generation
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}                # Message dosyaları
  ${srv_files}                # Service dosyaları  
  ${action_files}             # Action dosyaları
  DEPENDENCIES                # Bu message'ların bağımlı olduğu diğer message paketleri
    builtin_interfaces        # Time, Duration
    std_msgs                  # Header, String
    geometry_msgs             # Point, Vector3, Twist
)

# Test dependencies (eğer test yapacaksak)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# Bu paketi ament package olarak işaretle
ament_package()