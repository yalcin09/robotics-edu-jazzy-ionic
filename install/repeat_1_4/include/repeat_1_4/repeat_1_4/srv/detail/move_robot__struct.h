// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from repeat_1_4:srv/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/srv/move_robot.h"


#ifndef REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
#define REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MoveRobot in the package repeat_1_4.
typedef struct repeat_1_4__srv__MoveRobot_Request
{
  /// Hedef X pozisyonu
  float target_x;
  /// Hedef Y pozisyonu
  float target_y;
  /// Hareket hızı
  float speed;
} repeat_1_4__srv__MoveRobot_Request;

// Struct for a sequence of repeat_1_4__srv__MoveRobot_Request.
typedef struct repeat_1_4__srv__MoveRobot_Request__Sequence
{
  repeat_1_4__srv__MoveRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__srv__MoveRobot_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveRobot in the package repeat_1_4.
typedef struct repeat_1_4__srv__MoveRobot_Response
{
  /// RESPONSE - Hareket komutunun sonucu
  /// Komut başarılı mı?
  bool success;
  /// Sonuç mesajı
  rosidl_runtime_c__String message;
  /// Hedef mesafe
  float distance;
} repeat_1_4__srv__MoveRobot_Response;

// Struct for a sequence of repeat_1_4__srv__MoveRobot_Response.
typedef struct repeat_1_4__srv__MoveRobot_Response__Sequence
{
  repeat_1_4__srv__MoveRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__srv__MoveRobot_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  repeat_1_4__srv__MoveRobot_Event__request__MAX_SIZE = 1
};
// response
enum
{
  repeat_1_4__srv__MoveRobot_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MoveRobot in the package repeat_1_4.
typedef struct repeat_1_4__srv__MoveRobot_Event
{
  service_msgs__msg__ServiceEventInfo info;
  repeat_1_4__srv__MoveRobot_Request__Sequence request;
  repeat_1_4__srv__MoveRobot_Response__Sequence response;
} repeat_1_4__srv__MoveRobot_Event;

// Struct for a sequence of repeat_1_4__srv__MoveRobot_Event.
typedef struct repeat_1_4__srv__MoveRobot_Event__Sequence
{
  repeat_1_4__srv__MoveRobot_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__srv__MoveRobot_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
