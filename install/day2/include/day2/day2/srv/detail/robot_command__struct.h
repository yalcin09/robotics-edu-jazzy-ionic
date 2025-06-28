// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:srv/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/robot_command.h"


#ifndef DAY2__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_
#define DAY2__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_type'
// Member 'additional_params'
#include "rosidl_runtime_c/string.h"
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'target_orientation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/RobotCommand in the package day2.
typedef struct day2__srv__RobotCommand_Request
{
  /// Komut türü (örn: "move_to", "rotate", "stop", "home")
  rosidl_runtime_c__String command_type;
  /// Hedef pozisyon (x, y, z)
  geometry_msgs__msg__Point target_position;
  /// Hedef oryantasyon (roll, pitch, yaw)
  geometry_msgs__msg__Vector3 target_orientation;
  /// Maksimum hız (m/s)
  float max_velocity;
  /// Maksimum ivme (m/s²)
  float max_acceleration;
  /// Komut timeout süresi
  float timeout_seconds;
  /// Güvenlik kontrollerini atla
  bool force_execution;
  /// Ek parametreler
  rosidl_runtime_c__String__Sequence additional_params;
  /// Komutun tamamlanması gereken zaman
  builtin_interfaces__msg__Time deadline;
} day2__srv__RobotCommand_Request;

// Struct for a sequence of day2__srv__RobotCommand_Request.
typedef struct day2__srv__RobotCommand_Request__Sequence
{
  day2__srv__RobotCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__RobotCommand_Request__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
/**
  * Hata yok
 */
enum
{
  day2__srv__RobotCommand_Response__ERROR_NONE = 0ul
};

/// Constant 'ERROR_INVALID_COMMAND'.
/**
  * Geçersiz komut
 */
enum
{
  day2__srv__RobotCommand_Response__ERROR_INVALID_COMMAND = 1ul
};

/// Constant 'ERROR_OUT_OF_BOUNDS'.
/**
  * Erişilemez pozisyon
 */
enum
{
  day2__srv__RobotCommand_Response__ERROR_OUT_OF_BOUNDS = 2ul
};

/// Constant 'ERROR_ROBOT_BUSY'.
/**
  * Robot meşgul
 */
enum
{
  day2__srv__RobotCommand_Response__ERROR_ROBOT_BUSY = 3ul
};

/// Constant 'ERROR_SAFETY_VIOLATION'.
/**
  * Güvenlik ihlali
 */
enum
{
  day2__srv__RobotCommand_Response__ERROR_SAFETY_VIOLATION = 4ul
};

/// Constant 'ERROR_HARDWARE_FAILURE'.
/**
  * Donanım arızası
 */
enum
{
  day2__srv__RobotCommand_Response__ERROR_HARDWARE_FAILURE = 5ul
};

/// Constant 'ERROR_TIMEOUT'.
/**
  * Zaman aşımı
 */
enum
{
  day2__srv__RobotCommand_Response__ERROR_TIMEOUT = 6ul
};

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'actual_target'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'estimated_completion'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/RobotCommand in the package day2.
typedef struct day2__srv__RobotCommand_Response
{
  /// RESPONSE KISMI (Server → Client)
  /// Komut kabul edildi mi?
  /// Komut başarıyla alındı ve işleme başlandı
  bool success;
  /// Detaylı mesaj (başarı/hata açıklaması)
  rosidl_runtime_c__String message;
  /// Bu komut için benzersiz ID
  uint32_t command_id;
  /// Tahmini tamamlanma süresi (saniye)
  float estimated_duration;
  /// Gerçekte gidilecek pozisyon (güvenlik sınırları)
  geometry_msgs__msg__Point actual_target;
  /// Tahmini tamamlanma zamanı
  builtin_interfaces__msg__Time estimated_completion;
  /// Hata kodları
  /// Hata kodu (0 = başarı)
  uint32_t error_code;
} day2__srv__RobotCommand_Response;

// Struct for a sequence of day2__srv__RobotCommand_Response.
typedef struct day2__srv__RobotCommand_Response__Sequence
{
  day2__srv__RobotCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__RobotCommand_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__srv__RobotCommand_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__srv__RobotCommand_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RobotCommand in the package day2.
typedef struct day2__srv__RobotCommand_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__srv__RobotCommand_Request__Sequence request;
  day2__srv__RobotCommand_Response__Sequence response;
} day2__srv__RobotCommand_Event;

// Struct for a sequence of day2__srv__RobotCommand_Event.
typedef struct day2__srv__RobotCommand_Event__Sequence
{
  day2__srv__RobotCommand_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__RobotCommand_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_
