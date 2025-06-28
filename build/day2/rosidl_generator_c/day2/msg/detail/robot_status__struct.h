// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/robot_status.h"


#ifndef DAY2__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define DAY2__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATUS_IDLE'.
/**
  * Bekleme durumu
 */
enum
{
  day2__msg__RobotStatus__STATUS_IDLE = 0
};

/// Constant 'STATUS_MOVING'.
/**
  * Hareket halinde
 */
enum
{
  day2__msg__RobotStatus__STATUS_MOVING = 1
};

/// Constant 'STATUS_WORKING'.
/**
  * İş yapıyor
 */
enum
{
  day2__msg__RobotStatus__STATUS_WORKING = 2
};

/// Constant 'STATUS_CHARGING'.
/**
  * Şarj oluyor
 */
enum
{
  day2__msg__RobotStatus__STATUS_CHARGING = 3
};

/// Constant 'STATUS_ERROR'.
/**
  * Hata durumu
 */
enum
{
  day2__msg__RobotStatus__STATUS_ERROR = 4
};

// Include directives for member types
// Member 'robot_name'
// Member 'sensor_names'
// Member 'current_task'
// Member 'error_message'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'sensor_status'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotStatus in the package day2.
/**
  * Robot ID ve temel bilgiler
 */
typedef struct day2__msg__RobotStatus
{
  /// Robotun adı (örn: "robot_01")
  rosidl_runtime_c__String robot_name;
  /// Robotun benzersiz ID'si
  int32_t robot_id;
  /// Mesajın oluşturulma zamanı
  builtin_interfaces__msg__Time timestamp;
  /// Robot pozisyon bilgileri
  /// X, Y, Z koordinatları
  geometry_msgs__msg__Point position;
  /// Roll, Pitch, Yaw (radian)
  geometry_msgs__msg__Vector3 orientation;
  /// Linear ve angular hızlar
  geometry_msgs__msg__Twist velocity;
  /// Robot durumu
  /// Robot durumu (enum gibi kullanılacak)
  uint8_t status;
  /// Sensör verileri
  /// Batarya seviyesi (0.0-1.0)
  float battery_level;
  /// Sıcaklık (Celsius)
  float temperature;
  /// Sensörlerin durumu (her sensör için true/false)
  rosidl_runtime_c__boolean__Sequence sensor_status;
  /// Sensörlerin isimleri
  rosidl_runtime_c__String__Sequence sensor_names;
  /// Ek bilgiler
  /// Şu anki görev
  rosidl_runtime_c__String current_task;
  /// Görev tamamlanma oranı (0.0-1.0)
  float task_progress;
  /// Hata durumunda hata mesajı
  rosidl_runtime_c__String error_message;
} day2__msg__RobotStatus;

// Struct for a sequence of day2__msg__RobotStatus.
typedef struct day2__msg__RobotStatus__Sequence
{
  day2__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
