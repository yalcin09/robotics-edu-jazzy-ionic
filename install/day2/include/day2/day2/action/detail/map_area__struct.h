// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:action/MapArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/map_area.h"


#ifndef DAY2__ACTION__DETAIL__MAP_AREA__STRUCT_H_
#define DAY2__ACTION__DETAIL__MAP_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'boundary_points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'mapping_mode'
// Member 'exploration_pattern'
// Member 'active_sensors'
// Member 'slam_algorithm'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_Goal
{
  /// GOAL - Mapping görevi parametreleri
  /// Haritalaması istenen alan sınırları
  geometry_msgs__msg__Point__Sequence boundary_points;
  /// Harita çözünürlüğü (m/pixel)
  float resolution;
  /// Mapping modu ("exploration", "detailed", "fast")
  rosidl_runtime_c__String mapping_mode;
  /// İstenen kapsama yüzdesi (%)
  float coverage_percentage;
  /// 3D veri dahil edilsin mi?
  bool include_3d_data;
  /// Motion parameters
  /// Maksimum keşif hızı
  float max_exploration_speed;
  /// Sensör veri çakışma oranı
  float sensor_overlap_ratio;
  /// Waypoint arası mesafe
  float waypoint_spacing;
  /// Keşif pattern'i ("spiral", "grid", "adaptive")
  rosidl_runtime_c__String exploration_pattern;
  /// Sensor configuration
  /// Aktif sensörler listesi
  rosidl_runtime_c__String__Sequence active_sensors;
  /// Sensör menzili
  float sensor_range;
  /// SLAM kullan
  bool use_slam;
  /// SLAM algoritması
  rosidl_runtime_c__String slam_algorithm;
  /// Quality parameters
  /// Minimum kalite eşiği
  float min_quality_threshold;
  /// Doğruluk için optimize et
  bool optimize_for_accuracy;
  /// Hız için optimize et
  bool optimize_for_speed;
  /// Maksimum süre
  float timeout_seconds;
} day2__action__MapArea_Goal;

// Struct for a sequence of day2__action__MapArea_Goal.
typedef struct day2__action__MapArea_Goal__Sequence
{
  day2__action__MapArea_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_Goal__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
enum
{
  day2__action__MapArea_Result__ERROR_NONE = 0ul
};

/// Constant 'ERROR_AREA_TOO_LARGE'.
enum
{
  day2__action__MapArea_Result__ERROR_AREA_TOO_LARGE = 1ul
};

/// Constant 'ERROR_SENSOR_FAILURE'.
enum
{
  day2__action__MapArea_Result__ERROR_SENSOR_FAILURE = 2ul
};

/// Constant 'ERROR_LOCALIZATION_LOST'.
enum
{
  day2__action__MapArea_Result__ERROR_LOCALIZATION_LOST = 3ul
};

/// Constant 'ERROR_INSUFFICIENT_COVERAGE'.
enum
{
  day2__action__MapArea_Result__ERROR_INSUFFICIENT_COVERAGE = 4ul
};

/// Constant 'ERROR_MAP_QUALITY_LOW'.
enum
{
  day2__action__MapArea_Result__ERROR_MAP_QUALITY_LOW = 5ul
};

/// Constant 'ERROR_TIMEOUT'.
enum
{
  day2__action__MapArea_Result__ERROR_TIMEOUT = 6ul
};

// Include directives for member types
// Member 'result_message'
// Member 'map_topic'
// Member 'map_file_path'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_Result
{
  /// RESULT - Mapping tamamlandığında sonuç
  /// Mapping başarılı mı?
  bool success;
  /// Sonuç mesajı
  rosidl_runtime_c__String result_message;
  /// Haritanın yayınlandığı topic
  rosidl_runtime_c__String map_topic;
  /// Kaydedilen harita dosyası yolu
  rosidl_runtime_c__String map_file_path;
  /// Map quality metrics
  /// Haritalanan alan (m²)
  float area_covered;
  /// Kapsama yüzdesi
  float coverage_percentage;
  /// Harita doğruluğu (0.0-1.0)
  float map_accuracy;
  /// Özellik yoğunluğu (features/m²)
  float feature_density;
  /// Performance statistics
  /// Toplam mapping süresi
  float total_mapping_time;
  /// Kat edilen mesafe
  float total_distance_traveled;
  /// Toplam sensör okuması
  uint32_t total_sensor_readings;
  /// Ortalama mapping hızı
  float average_mapping_speed;
  /// Map data summary
  /// Harita genişliği (pixel)
  uint32_t map_width_pixels;
  /// Harita yüksekliği (pixel)
  uint32_t map_height_pixels;
  /// Dolu hücre sayısı
  uint32_t occupied_cells;
  /// Boş hücre sayısı
  uint32_t free_cells;
  /// Bilinmeyen hücre sayısı
  uint32_t unknown_cells;
  /// Error information
  uint32_t error_code;
} day2__action__MapArea_Result;

// Struct for a sequence of day2__action__MapArea_Result.
typedef struct day2__action__MapArea_Result__Sequence
{
  day2__action__MapArea_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_position'
// Member 'next_target'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'current_phase'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'sensor_active_status'
// Member 'sensor_data_quality'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'last_sensor_update'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_Feedback
{
  /// FEEDBACK - Mapping sırasında sürekli feedback
  /// Şu anki pozisyon
  geometry_msgs__msg__Point current_position;
  /// Şimdiye kadar haritalanan alan
  float area_mapped_so_far;
  /// Kapsama yüzdesi
  float coverage_percentage;
  /// Tahmini kalan süre
  float estimated_time_remaining;
  /// Current mapping state
  /// Şu anki faz ("exploring", "detailing", "returning")
  rosidl_runtime_c__String current_phase;
  /// Sonraki hedef nokta
  geometry_msgs__msg__Point next_target;
  /// Tamamlanan waypoint sayısı
  uint32_t waypoints_completed;
  /// Toplam waypoint sayısı
  uint32_t total_waypoints;
  /// Real-time map data
  /// Şu anki harita genişliği
  uint32_t current_map_width;
  /// Şu anki harita yüksekliği
  uint32_t current_map_height;
  /// Şu anki çözünürlük
  float current_resolution;
  /// Yeni tespit edilen özellikler
  uint32_t new_features_detected;
  /// Sensor status
  /// Her sensörün aktif durumu
  rosidl_runtime_c__boolean__Sequence sensor_active_status;
  /// Sensör veri kalitesi
  rosidl_runtime_c__float__Sequence sensor_data_quality;
  /// Saniyedeki sensör okuması
  uint32_t sensor_readings_per_second;
  /// SLAM status (if enabled)
  /// Lokalizasyon güveni
  float localization_confidence;
  /// Tespit edilen loop closure'lar
  uint32_t loop_closures_detected;
  /// Pozisyon belirsizliği
  float pose_uncertainty;
  /// Performance monitoring
  /// CPU kullanımı
  float cpu_usage;
  /// Memory kullanımı
  float memory_usage;
  /// Kullanılan depolama alanı (MB)
  float storage_space_used;
  /// Son sensör güncellemesi
  builtin_interfaces__msg__Time last_sensor_update;
} day2__action__MapArea_Feedback;

// Struct for a sequence of day2__action__MapArea_Feedback.
typedef struct day2__action__MapArea_Feedback__Sequence
{
  day2__action__MapArea_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "day2/action/detail/map_area__struct.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__MapArea_Goal goal;
} day2__action__MapArea_SendGoal_Request;

// Struct for a sequence of day2__action__MapArea_SendGoal_Request.
typedef struct day2__action__MapArea_SendGoal_Request__Sequence
{
  day2__action__MapArea_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} day2__action__MapArea_SendGoal_Response;

// Struct for a sequence of day2__action__MapArea_SendGoal_Response.
typedef struct day2__action__MapArea_SendGoal_Response__Sequence
{
  day2__action__MapArea_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__MapArea_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__MapArea_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__MapArea_SendGoal_Request__Sequence request;
  day2__action__MapArea_SendGoal_Response__Sequence response;
} day2__action__MapArea_SendGoal_Event;

// Struct for a sequence of day2__action__MapArea_SendGoal_Event.
typedef struct day2__action__MapArea_SendGoal_Event__Sequence
{
  day2__action__MapArea_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} day2__action__MapArea_GetResult_Request;

// Struct for a sequence of day2__action__MapArea_GetResult_Request.
typedef struct day2__action__MapArea_GetResult_Request__Sequence
{
  day2__action__MapArea_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/map_area__struct.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_GetResult_Response
{
  int8_t status;
  day2__action__MapArea_Result result;
} day2__action__MapArea_GetResult_Response;

// Struct for a sequence of day2__action__MapArea_GetResult_Response.
typedef struct day2__action__MapArea_GetResult_Response__Sequence
{
  day2__action__MapArea_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__MapArea_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__MapArea_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__MapArea_GetResult_Request__Sequence request;
  day2__action__MapArea_GetResult_Response__Sequence response;
} day2__action__MapArea_GetResult_Event;

// Struct for a sequence of day2__action__MapArea_GetResult_Event.
typedef struct day2__action__MapArea_GetResult_Event__Sequence
{
  day2__action__MapArea_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "day2/action/detail/map_area__struct.h"

/// Struct defined in action/MapArea in the package day2.
typedef struct day2__action__MapArea_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__MapArea_Feedback feedback;
} day2__action__MapArea_FeedbackMessage;

// Struct for a sequence of day2__action__MapArea_FeedbackMessage.
typedef struct day2__action__MapArea_FeedbackMessage__Sequence
{
  day2__action__MapArea_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__MapArea_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__ACTION__DETAIL__MAP_AREA__STRUCT_H_
