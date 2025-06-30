// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/navigate.h"


#ifndef DAY2__ACTION__DETAIL__NAVIGATE__STRUCT_H_
#define DAY2__ACTION__DETAIL__NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'planning_algorithm'
// Member 'behavior_on_failure'
#include "rosidl_runtime_c/string.h"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_Goal
{
  /// GOAL - Navigation başlatmak için gerekli bilgiler
  /// Hedef pozisyon ve oryantasyon
  geometry_msgs__msg__PoseStamped target_pose;
  /// Maksimum hız (m/s)
  float max_speed;
  /// Hedefe yakınlık toleransı (m)
  float tolerance_distance;
  /// Açı toleransı (rad)
  float tolerance_angle;
  /// Engel kaçınma aktif mi?
  bool use_obstacle_avoidance;
  /// Kullanılacak planning algoritması
  rosidl_runtime_c__String planning_algorithm;
  /// Ara geçiş noktaları
  geometry_msgs__msg__Point__Sequence waypoints;
  /// Maksimum süre
  float timeout_seconds;
  /// Başarısızlık durumunda davranış
  rosidl_runtime_c__String behavior_on_failure;
} day2__action__Navigate_Goal;

// Struct for a sequence of day2__action__Navigate_Goal.
typedef struct day2__action__Navigate_Goal__Sequence
{
  day2__action__Navigate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_Goal__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
enum
{
  day2__action__Navigate_Result__ERROR_NONE = 0ul
};

/// Constant 'ERROR_TIMEOUT'.
enum
{
  day2__action__Navigate_Result__ERROR_TIMEOUT = 1ul
};

/// Constant 'ERROR_OBSTACLE_STUCK'.
enum
{
  day2__action__Navigate_Result__ERROR_OBSTACLE_STUCK = 2ul
};

/// Constant 'ERROR_GOAL_UNREACHABLE'.
enum
{
  day2__action__Navigate_Result__ERROR_GOAL_UNREACHABLE = 3ul
};

/// Constant 'ERROR_PLANNING_FAILED'.
enum
{
  day2__action__Navigate_Result__ERROR_PLANNING_FAILED = 4ul
};

/// Constant 'ERROR_HARDWARE_FAILURE'.
enum
{
  day2__action__Navigate_Result__ERROR_HARDWARE_FAILURE = 5ul
};

/// Constant 'ERROR_PREEMPTED'.
enum
{
  day2__action__Navigate_Result__ERROR_PREEMPTED = 6ul
};

// Include directives for member types
// Member 'result_message'
// Member 'warnings'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'final_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_Result
{
  /// RESULT - Navigation tamamlandığında dönen sonuç
  /// Navigasyon başarılı mı?
  bool success;
  /// Detaylı sonuç mesajı
  rosidl_runtime_c__String result_message;
  /// Son pozisyon
  geometry_msgs__msg__PoseStamped final_pose;
  /// Kat edilen toplam mesafe
  float total_distance_traveled;
  /// Geçen toplam süre
  float total_time_elapsed;
  /// Ortalama hız
  float average_speed;
  /// Kaç engelle karşılaştı
  uint32_t obstacle_encounters;
  /// Uyarı mesajları
  rosidl_runtime_c__String__Sequence warnings;
  /// Navigation quality metrics
  /// Yol verimliliği (0.0-1.0)
  float path_efficiency;
  /// Hareket yumuşaklığı (0.0-1.0)
  float smoothness_score;
  /// Kaç kez yol yeniden planlandı
  uint32_t replanning_count;
  /// Error information
  /// Hata kodu
  uint32_t error_code;
} day2__action__Navigate_Result;

// Struct for a sequence of day2__action__Navigate_Result.
typedef struct day2__action__Navigate_Result__Sequence
{
  day2__action__Navigate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'remaining_path'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'current_behavior'
// Member 'current_status'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'last_update_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_Feedback
{
  /// FEEDBACK - Navigation sırasında sürekli dönen feedback
  /// Şu anki pozisyon
  geometry_msgs__msg__PoseStamped current_pose;
  /// Hedefe kalan mesafe
  float distance_to_goal;
  /// Tahmini kalan süre
  float estimated_time_remaining;
  /// Şu anki hız
  float current_speed;
  /// Tamamlanma yüzdesi (0.0-100.0)
  float completion_percentage;
  /// Path information
  /// Kalan yol noktaları
  geometry_msgs__msg__Point__Sequence remaining_path;
  /// Şu anki waypoint indeksi
  uint32_t current_waypoint_index;
  /// Şu anki davranış modu
  rosidl_runtime_c__String current_behavior;
  /// Real-time status
  /// Engel tespit edildi mi?
  bool obstacle_detected;
  /// Şu anki durum açıklaması
  rosidl_runtime_c__String current_status;
  /// Planlanan yoldan sapma (m)
  float path_deviation;
  /// Batarya tüketim oranı
  float battery_consumption_rate;
  /// Performance metrics
  /// CPU kullanımı (%)
  float cpu_usage;
  /// Memory kullanımı (%)
  float memory_usage;
  /// Son güncelleme zamanı
  builtin_interfaces__msg__Time last_update_time;
} day2__action__Navigate_Feedback;

// Struct for a sequence of day2__action__Navigate_Feedback.
typedef struct day2__action__Navigate_Feedback__Sequence
{
  day2__action__Navigate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "day2/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__Navigate_Goal goal;
} day2__action__Navigate_SendGoal_Request;

// Struct for a sequence of day2__action__Navigate_SendGoal_Request.
typedef struct day2__action__Navigate_SendGoal_Request__Sequence
{
  day2__action__Navigate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} day2__action__Navigate_SendGoal_Response;

// Struct for a sequence of day2__action__Navigate_SendGoal_Response.
typedef struct day2__action__Navigate_SendGoal_Response__Sequence
{
  day2__action__Navigate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__Navigate_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__Navigate_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__Navigate_SendGoal_Request__Sequence request;
  day2__action__Navigate_SendGoal_Response__Sequence response;
} day2__action__Navigate_SendGoal_Event;

// Struct for a sequence of day2__action__Navigate_SendGoal_Event.
typedef struct day2__action__Navigate_SendGoal_Event__Sequence
{
  day2__action__Navigate_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} day2__action__Navigate_GetResult_Request;

// Struct for a sequence of day2__action__Navigate_GetResult_Request.
typedef struct day2__action__Navigate_GetResult_Request__Sequence
{
  day2__action__Navigate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_GetResult_Response
{
  int8_t status;
  day2__action__Navigate_Result result;
} day2__action__Navigate_GetResult_Response;

// Struct for a sequence of day2__action__Navigate_GetResult_Response.
typedef struct day2__action__Navigate_GetResult_Response__Sequence
{
  day2__action__Navigate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__Navigate_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__Navigate_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__Navigate_GetResult_Request__Sequence request;
  day2__action__Navigate_GetResult_Response__Sequence response;
} day2__action__Navigate_GetResult_Event;

// Struct for a sequence of day2__action__Navigate_GetResult_Event.
typedef struct day2__action__Navigate_GetResult_Event__Sequence
{
  day2__action__Navigate_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "day2/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package day2.
typedef struct day2__action__Navigate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__Navigate_Feedback feedback;
} day2__action__Navigate_FeedbackMessage;

// Struct for a sequence of day2__action__Navigate_FeedbackMessage.
typedef struct day2__action__Navigate_FeedbackMessage__Sequence
{
  day2__action__Navigate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__Navigate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__ACTION__DETAIL__NAVIGATE__STRUCT_H_
