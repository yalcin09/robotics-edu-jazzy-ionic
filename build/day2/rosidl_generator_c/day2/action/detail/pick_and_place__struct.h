// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:action/PickAndPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/pick_and_place.h"


#ifndef DAY2__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_H_
#define DAY2__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_id'
// Member 'object_type'
// Member 'grasp_type'
// Member 'forbidden_zones'
#include "rosidl_runtime_c/string.h"
// Member 'pickup_location'
// Member 'place_location'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'object_dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_Goal
{
  /// GOAL - Pick and place görevi için parametreler
  /// Alınacak objenin ID'si
  rosidl_runtime_c__String object_id;
  /// Alma pozisyonu
  geometry_msgs__msg__Point pickup_location;
  /// Bırakma pozisyonu
  geometry_msgs__msg__Point place_location;
  /// Obje türü ("box", "cylinder", etc.)
  rosidl_runtime_c__String object_type;
  /// Obje ağırlığı (kg)
  float object_weight;
  /// Obje boyutları (m)
  geometry_msgs__msg__Vector3 object_dimensions;
  /// Grasping parameters
  /// Kavrama türü ("top", "side", "custom")
  rosidl_runtime_c__String grasp_type;
  /// Kavrama kuvveti (N)
  float grasp_force;
  /// Yaklaşma mesafesi (m)
  float approach_distance;
  /// Kaldırma yüksekliği (m)
  float lift_height;
  /// Motion parameters
  /// Maksimum hareket hızı
  float max_velocity;
  /// Maksimum ivme
  float max_acceleration;
  /// Dikkatli mod (hassas objeler için)
  bool use_careful_mode;
  /// Maksimum süre
  float timeout_seconds;
  /// Safety parameters
  /// Çarpışma eşiği
  float collision_threshold;
  /// Kuvvet geri bildirimi
  bool enable_force_feedback;
  /// Yasak bölgeler
  rosidl_runtime_c__String__Sequence forbidden_zones;
} day2__action__PickAndPlace_Goal;

// Struct for a sequence of day2__action__PickAndPlace_Goal.
typedef struct day2__action__PickAndPlace_Goal__Sequence
{
  day2__action__PickAndPlace_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_Goal__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_NONE = 0ul
};

/// Constant 'ERROR_OBJECT_NOT_FOUND'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_OBJECT_NOT_FOUND = 1ul
};

/// Constant 'ERROR_GRASP_FAILED'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_GRASP_FAILED = 2ul
};

/// Constant 'ERROR_OBJECT_DROPPED'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_OBJECT_DROPPED = 3ul
};

/// Constant 'ERROR_COLLISION_DETECTED'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_COLLISION_DETECTED = 4ul
};

/// Constant 'ERROR_PLACE_LOCATION_BLOCKED'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_PLACE_LOCATION_BLOCKED = 5ul
};

/// Constant 'ERROR_FORCE_LIMIT_EXCEEDED'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_FORCE_LIMIT_EXCEEDED = 6ul
};

/// Constant 'ERROR_TIMEOUT'.
enum
{
  day2__action__PickAndPlace_Result__ERROR_TIMEOUT = 7ul
};

// Include directives for member types
// Member 'result_message'
// Member 'error_details'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'final_object_location'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_Result
{
  /// RESULT - Pick and place tamamlandığında sonuç
  /// Görev başarılı mı?
  bool success;
  /// Detaylı sonuç açıklaması
  rosidl_runtime_c__String result_message;
  /// Objenin son pozisyonu
  geometry_msgs__msg__Point final_object_location;
  /// Toplam görev süresi
  float total_task_time;
  /// Task phases completion
  /// Alma başarılı mı?
  bool pickup_successful;
  /// Taşıma başarılı mı?
  bool transport_successful;
  /// Bırakma başarılı mı?
  bool place_successful;
  /// Performance metrics
  /// Alma süresi
  float pickup_duration;
  /// Taşıma süresi
  float transport_duration;
  /// Bırakma süresi
  float place_duration;
  /// Doğruluk skoru (0.0-1.0)
  float accuracy_score;
  /// Force/torque information
  /// Uygulanan maksimum kuvvet
  float max_force_applied;
  /// Kavrama kalitesi (0.0-1.0)
  float grasp_quality;
  /// Error information
  uint32_t error_code;
  /// Detaylı hata bilgisi
  rosidl_runtime_c__String error_details;
} day2__action__PickAndPlace_Result;

// Struct for a sequence of day2__action__PickAndPlace_Result.
typedef struct day2__action__PickAndPlace_Result__Sequence
{
  day2__action__PickAndPlace_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_phase'
// Member 'current_behavior'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'gripper_position'
// Member 'object_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'force_torque_readings'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'current_velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'phase_start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_Feedback
{
  /// FEEDBACK - Pick and place sırasında sürekli feedback
  /// Şu anki faz ("approaching", "grasping", etc.)
  rosidl_runtime_c__String current_phase;
  /// Tamamlanma yüzdesi
  float completion_percentage;
  /// Gripper'ın pozisyonu
  geometry_msgs__msg__Point gripper_position;
  /// Objenin pozisyonu
  geometry_msgs__msg__Point object_position;
  /// Phase-specific feedback
  /// Obje tespit edildi mi?
  bool object_detected;
  /// Obje kavrandı mı?
  bool object_in_grasp;
  /// Şu anki kavrama kuvveti
  float current_grasp_force;
  /// Taşıma ilerlemesi (%)
  float transport_progress;
  /// Real-time sensor data
  /// Kuvvet/tork sensör değerleri
  rosidl_runtime_c__float__Sequence force_torque_readings;
  /// Çarpışma uyarısı
  bool collision_warning;
  /// Tahmini kalan süre
  float estimated_time_remaining;
  /// Motion state
  /// Şu anki hız
  geometry_msgs__msg__Twist current_velocity;
  /// Şu anki davranış
  rosidl_runtime_c__String current_behavior;
  /// Hareket halinde mi?
  bool is_moving;
  /// Quality indicators
  /// Kavrama kararlılığı
  float grasp_stability;
  /// Planlanan yoldan sapma
  float path_deviation;
  /// Faz başlangıç zamanı
  builtin_interfaces__msg__Time phase_start_time;
} day2__action__PickAndPlace_Feedback;

// Struct for a sequence of day2__action__PickAndPlace_Feedback.
typedef struct day2__action__PickAndPlace_Feedback__Sequence
{
  day2__action__PickAndPlace_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "day2/action/detail/pick_and_place__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__PickAndPlace_Goal goal;
} day2__action__PickAndPlace_SendGoal_Request;

// Struct for a sequence of day2__action__PickAndPlace_SendGoal_Request.
typedef struct day2__action__PickAndPlace_SendGoal_Request__Sequence
{
  day2__action__PickAndPlace_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} day2__action__PickAndPlace_SendGoal_Response;

// Struct for a sequence of day2__action__PickAndPlace_SendGoal_Response.
typedef struct day2__action__PickAndPlace_SendGoal_Response__Sequence
{
  day2__action__PickAndPlace_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__PickAndPlace_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__PickAndPlace_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__PickAndPlace_SendGoal_Request__Sequence request;
  day2__action__PickAndPlace_SendGoal_Response__Sequence response;
} day2__action__PickAndPlace_SendGoal_Event;

// Struct for a sequence of day2__action__PickAndPlace_SendGoal_Event.
typedef struct day2__action__PickAndPlace_SendGoal_Event__Sequence
{
  day2__action__PickAndPlace_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} day2__action__PickAndPlace_GetResult_Request;

// Struct for a sequence of day2__action__PickAndPlace_GetResult_Request.
typedef struct day2__action__PickAndPlace_GetResult_Request__Sequence
{
  day2__action__PickAndPlace_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_GetResult_Response
{
  int8_t status;
  day2__action__PickAndPlace_Result result;
} day2__action__PickAndPlace_GetResult_Response;

// Struct for a sequence of day2__action__PickAndPlace_GetResult_Response.
typedef struct day2__action__PickAndPlace_GetResult_Response__Sequence
{
  day2__action__PickAndPlace_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__PickAndPlace_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__PickAndPlace_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__PickAndPlace_GetResult_Request__Sequence request;
  day2__action__PickAndPlace_GetResult_Response__Sequence response;
} day2__action__PickAndPlace_GetResult_Event;

// Struct for a sequence of day2__action__PickAndPlace_GetResult_Event.
typedef struct day2__action__PickAndPlace_GetResult_Event__Sequence
{
  day2__action__PickAndPlace_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"

/// Struct defined in action/PickAndPlace in the package day2.
typedef struct day2__action__PickAndPlace_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__PickAndPlace_Feedback feedback;
} day2__action__PickAndPlace_FeedbackMessage;

// Struct for a sequence of day2__action__PickAndPlace_FeedbackMessage.
typedef struct day2__action__PickAndPlace_FeedbackMessage__Sequence
{
  day2__action__PickAndPlace_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__PickAndPlace_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_H_
