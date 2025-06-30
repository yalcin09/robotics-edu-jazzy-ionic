// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from repeat_1_4:action/GoToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/action/go_to_point.h"


#ifndef REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_
#define REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_Goal
{
  /// Hedef X
  float target_x;
  /// Hedef Y
  float target_y;
} repeat_1_4__action__GoToPoint_Goal;

// Struct for a sequence of repeat_1_4__action__GoToPoint_Goal.
typedef struct repeat_1_4__action__GoToPoint_Goal__Sequence
{
  repeat_1_4__action__GoToPoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_Result
{
  /// RESULT - Sonuç
  /// Başarılı mı?
  bool success;
  /// Sonuç mesajı
  rosidl_runtime_c__String message;
  /// Son pozisyon X
  float final_x;
  /// Son pozisyon Y
  float final_y;
} repeat_1_4__action__GoToPoint_Result;

// Struct for a sequence of repeat_1_4__action__GoToPoint_Result.
typedef struct repeat_1_4__action__GoToPoint_Result__Sequence
{
  repeat_1_4__action__GoToPoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_Feedback
{
  /// FEEDBACK - İlerleme
  /// Şu anki X
  float current_x;
  /// Şu anki Y
  float current_y;
  /// İlerleme %0-100
  float progress;
} repeat_1_4__action__GoToPoint_Feedback;

// Struct for a sequence of repeat_1_4__action__GoToPoint_Feedback.
typedef struct repeat_1_4__action__GoToPoint_Feedback__Sequence
{
  repeat_1_4__action__GoToPoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "repeat_1_4/action/detail/go_to_point__struct.h"

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  repeat_1_4__action__GoToPoint_Goal goal;
} repeat_1_4__action__GoToPoint_SendGoal_Request;

// Struct for a sequence of repeat_1_4__action__GoToPoint_SendGoal_Request.
typedef struct repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence
{
  repeat_1_4__action__GoToPoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} repeat_1_4__action__GoToPoint_SendGoal_Response;

// Struct for a sequence of repeat_1_4__action__GoToPoint_SendGoal_Response.
typedef struct repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence
{
  repeat_1_4__action__GoToPoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  repeat_1_4__action__GoToPoint_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  repeat_1_4__action__GoToPoint_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence request;
  repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence response;
} repeat_1_4__action__GoToPoint_SendGoal_Event;

// Struct for a sequence of repeat_1_4__action__GoToPoint_SendGoal_Event.
typedef struct repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence
{
  repeat_1_4__action__GoToPoint_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} repeat_1_4__action__GoToPoint_GetResult_Request;

// Struct for a sequence of repeat_1_4__action__GoToPoint_GetResult_Request.
typedef struct repeat_1_4__action__GoToPoint_GetResult_Request__Sequence
{
  repeat_1_4__action__GoToPoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "repeat_1_4/action/detail/go_to_point__struct.h"

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_GetResult_Response
{
  int8_t status;
  repeat_1_4__action__GoToPoint_Result result;
} repeat_1_4__action__GoToPoint_GetResult_Response;

// Struct for a sequence of repeat_1_4__action__GoToPoint_GetResult_Response.
typedef struct repeat_1_4__action__GoToPoint_GetResult_Response__Sequence
{
  repeat_1_4__action__GoToPoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  repeat_1_4__action__GoToPoint_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  repeat_1_4__action__GoToPoint_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  repeat_1_4__action__GoToPoint_GetResult_Request__Sequence request;
  repeat_1_4__action__GoToPoint_GetResult_Response__Sequence response;
} repeat_1_4__action__GoToPoint_GetResult_Event;

// Struct for a sequence of repeat_1_4__action__GoToPoint_GetResult_Event.
typedef struct repeat_1_4__action__GoToPoint_GetResult_Event__Sequence
{
  repeat_1_4__action__GoToPoint_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "repeat_1_4/action/detail/go_to_point__struct.h"

/// Struct defined in action/GoToPoint in the package repeat_1_4.
typedef struct repeat_1_4__action__GoToPoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  repeat_1_4__action__GoToPoint_Feedback feedback;
} repeat_1_4__action__GoToPoint_FeedbackMessage;

// Struct for a sequence of repeat_1_4__action__GoToPoint_FeedbackMessage.
typedef struct repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence
{
  repeat_1_4__action__GoToPoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_
