// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice

#include "day2/srv/detail/calculate_path__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__CalculatePath__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x3d, 0xfe, 0x05, 0x9b, 0x53, 0x0d, 0x8c,
      0xe0, 0x59, 0xa1, 0xe4, 0xac, 0x4f, 0xf7, 0xdf,
      0x36, 0x57, 0xe4, 0x6e, 0x1b, 0xde, 0x00, 0xf1,
      0xa5, 0x75, 0x1f, 0xe0, 0x24, 0x0f, 0xe1, 0x42,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__CalculatePath_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x44, 0xa1, 0x99, 0xca, 0x06, 0x4a, 0x5e,
      0x74, 0x30, 0x58, 0xa0, 0x38, 0x12, 0x17, 0xe5,
      0x0c, 0x76, 0xee, 0x8e, 0xda, 0x91, 0x20, 0xaf,
      0x41, 0x21, 0x5b, 0xb2, 0x8e, 0x81, 0xec, 0x97,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__CalculatePath_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x6f, 0x07, 0x31, 0x89, 0x64, 0x31, 0x1a,
      0x7e, 0x66, 0x1b, 0xcf, 0x74, 0xc9, 0x5f, 0xe6,
      0x29, 0xb8, 0xda, 0xe7, 0x15, 0x28, 0x92, 0xde,
      0x39, 0x54, 0xf7, 0x56, 0xe1, 0x95, 0x13, 0x1c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__CalculatePath_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0x44, 0x9e, 0x2d, 0x8e, 0x10, 0xe3, 0x6b,
      0xa9, 0xee, 0x33, 0xfd, 0x19, 0x02, 0x6c, 0x29,
      0x6a, 0x0f, 0x97, 0x58, 0xe4, 0x49, 0xd8, 0x9e,
      0x63, 0xf5, 0x85, 0x38, 0x04, 0x0a, 0xd4, 0x5f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char day2__srv__CalculatePath__TYPE_NAME[] = "day2/srv/CalculatePath";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char day2__srv__CalculatePath_Event__TYPE_NAME[] = "day2/srv/CalculatePath_Event";
static char day2__srv__CalculatePath_Request__TYPE_NAME[] = "day2/srv/CalculatePath_Request";
static char day2__srv__CalculatePath_Response__TYPE_NAME[] = "day2/srv/CalculatePath_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char day2__srv__CalculatePath__FIELD_NAME__request_message[] = "request_message";
static char day2__srv__CalculatePath__FIELD_NAME__response_message[] = "response_message";
static char day2__srv__CalculatePath__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field day2__srv__CalculatePath__FIELDS[] = {
  {
    {day2__srv__CalculatePath__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__CalculatePath_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__CalculatePath_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__CalculatePath_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__CalculatePath__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__CalculatePath__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__CalculatePath__TYPE_NAME, 22, 22},
      {day2__srv__CalculatePath__FIELDS, 3, 3},
    },
    {day2__srv__CalculatePath__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = day2__srv__CalculatePath_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = day2__srv__CalculatePath_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = day2__srv__CalculatePath_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__CalculatePath_Request__FIELD_NAME__start_position[] = "start_position";
static char day2__srv__CalculatePath_Request__FIELD_NAME__goal_position[] = "goal_position";
static char day2__srv__CalculatePath_Request__FIELD_NAME__start_orientation[] = "start_orientation";
static char day2__srv__CalculatePath_Request__FIELD_NAME__goal_orientation[] = "goal_orientation";
static char day2__srv__CalculatePath_Request__FIELD_NAME__max_velocity[] = "max_velocity";
static char day2__srv__CalculatePath_Request__FIELD_NAME__max_acceleration[] = "max_acceleration";
static char day2__srv__CalculatePath_Request__FIELD_NAME__turning_radius[] = "turning_radius";
static char day2__srv__CalculatePath_Request__FIELD_NAME__safety_margin[] = "safety_margin";
static char day2__srv__CalculatePath_Request__FIELD_NAME__planning_algorithm[] = "planning_algorithm";
static char day2__srv__CalculatePath_Request__FIELD_NAME__planning_timeout[] = "planning_timeout";
static char day2__srv__CalculatePath_Request__FIELD_NAME__optimize_for_speed[] = "optimize_for_speed";
static char day2__srv__CalculatePath_Request__FIELD_NAME__optimize_for_smoothness[] = "optimize_for_smoothness";
static char day2__srv__CalculatePath_Request__FIELD_NAME__avoid_dynamic_obstacles[] = "avoid_dynamic_obstacles";
static char day2__srv__CalculatePath_Request__FIELD_NAME__waypoints[] = "waypoints";
static char day2__srv__CalculatePath_Request__FIELD_NAME__forbidden_zones[] = "forbidden_zones";
static char day2__srv__CalculatePath_Request__FIELD_NAME__special_constraints[] = "special_constraints";

static rosidl_runtime_c__type_description__Field day2__srv__CalculatePath_Request__FIELDS[] = {
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__start_position, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__goal_position, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__start_orientation, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__goal_orientation, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__max_velocity, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__max_acceleration, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__turning_radius, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__safety_margin, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__planning_algorithm, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__planning_timeout, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__optimize_for_speed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__optimize_for_smoothness, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__avoid_dynamic_obstacles, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__waypoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__forbidden_zones, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__FIELD_NAME__special_constraints, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__CalculatePath_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__CalculatePath_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__CalculatePath_Request__TYPE_NAME, 30, 30},
      {day2__srv__CalculatePath_Request__FIELDS, 16, 16},
    },
    {day2__srv__CalculatePath_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__CalculatePath_Response__FIELD_NAME__success[] = "success";
static char day2__srv__CalculatePath_Response__FIELD_NAME__message[] = "message";
static char day2__srv__CalculatePath_Response__FIELD_NAME__path_points[] = "path_points";
static char day2__srv__CalculatePath_Response__FIELD_NAME__path_orientations[] = "path_orientations";
static char day2__srv__CalculatePath_Response__FIELD_NAME__path_velocities[] = "path_velocities";
static char day2__srv__CalculatePath_Response__FIELD_NAME__path_timestamps[] = "path_timestamps";
static char day2__srv__CalculatePath_Response__FIELD_NAME__total_distance[] = "total_distance";
static char day2__srv__CalculatePath_Response__FIELD_NAME__total_time[] = "total_time";
static char day2__srv__CalculatePath_Response__FIELD_NAME__path_smoothness[] = "path_smoothness";
static char day2__srv__CalculatePath_Response__FIELD_NAME__safety_score[] = "safety_score";
static char day2__srv__CalculatePath_Response__FIELD_NAME__num_waypoints[] = "num_waypoints";
static char day2__srv__CalculatePath_Response__FIELD_NAME__alternative_paths[] = "alternative_paths";
static char day2__srv__CalculatePath_Response__FIELD_NAME__alternative_scores[] = "alternative_scores";
static char day2__srv__CalculatePath_Response__FIELD_NAME__planning_time_ms[] = "planning_time_ms";
static char day2__srv__CalculatePath_Response__FIELD_NAME__algorithm_used[] = "algorithm_used";
static char day2__srv__CalculatePath_Response__FIELD_NAME__nodes_explored[] = "nodes_explored";
static char day2__srv__CalculatePath_Response__FIELD_NAME__iterations_count[] = "iterations_count";
static char day2__srv__CalculatePath_Response__FIELD_NAME__error_code[] = "error_code";

static rosidl_runtime_c__type_description__Field day2__srv__CalculatePath_Response__FIELDS[] = {
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__path_points, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__path_orientations, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__path_velocities, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__path_timestamps, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__total_distance, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__total_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__path_smoothness, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__safety_score, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__num_waypoints, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__alternative_paths, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__alternative_scores, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__planning_time_ms, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__algorithm_used, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__nodes_explored, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__iterations_count, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__CalculatePath_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__CalculatePath_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__CalculatePath_Response__TYPE_NAME, 31, 31},
      {day2__srv__CalculatePath_Response__FIELDS, 18, 18},
    },
    {day2__srv__CalculatePath_Response__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__CalculatePath_Event__FIELD_NAME__info[] = "info";
static char day2__srv__CalculatePath_Event__FIELD_NAME__request[] = "request";
static char day2__srv__CalculatePath_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field day2__srv__CalculatePath_Event__FIELDS[] = {
  {
    {day2__srv__CalculatePath_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__CalculatePath_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__CalculatePath_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__CalculatePath_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {day2__srv__CalculatePath_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__CalculatePath_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__CalculatePath_Event__TYPE_NAME, 28, 28},
      {day2__srv__CalculatePath_Event__FIELDS, 3, 3},
    },
    {day2__srv__CalculatePath_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = day2__srv__CalculatePath_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = day2__srv__CalculatePath_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# REQUEST KISMI\n"
  "# Path planning parametreleri\n"
  "geometry_msgs/Point start_position          # Ba\\xc5\\x9flang\\xc4\\xb1\\xc3\\xa7 pozisyonu\n"
  "geometry_msgs/Point goal_position           # Hedef pozisyon\n"
  "geometry_msgs/Vector3 start_orientation     # Ba\\xc5\\x9flang\\xc4\\xb1\\xc3\\xa7 oryantasyonu\n"
  "geometry_msgs/Vector3 goal_orientation      # Hedef oryantasyon\n"
  "\n"
  "# Planning constraints\n"
  "float32 max_velocity                        # Maksimum h\\xc4\\xb1z k\\xc4\\xb1s\\xc4\\xb1t\\xc4\\xb1\n"
  "float32 max_acceleration                    # Maksimum ivme k\\xc4\\xb1s\\xc4\\xb1t\\xc4\\xb1\n"
  "float32 turning_radius                      # Minimum d\\xc3\\xb6n\\xc3\\xbc\\xc5\\x9f yar\\xc4\\xb1\\xc3\\xa7ap\\xc4\\xb1\n"
  "float32 safety_margin                       # Engellere olan g\\xc3\\xbcvenlik mesafesi\n"
  "\n"
  "# Planning options\n"
  "string planning_algorithm                   # Kullan\\xc4\\xb1lacak algoritma (\"A*\", \"RRT\", \"PRM\")\n"
  "float32 planning_timeout                    # Planning i\\xc3\\xa7in maksimum s\\xc3\\xbcre\n"
  "bool optimize_for_speed                     # H\\xc4\\xb1z i\\xc3\\xa7in optimize et\n"
  "bool optimize_for_smoothness                # Yumu\\xc5\\x9fakl\\xc4\\xb1k i\\xc3\\xa7in optimize et\n"
  "bool avoid_dynamic_obstacles                # Dinamik engelleri ka\\xc3\\xa7\\xc4\\xb1n\n"
  "\n"
  "# Ek k\\xc4\\xb1s\\xc4\\xb1tlar\n"
  "geometry_msgs/Point[] waypoints             # Zorunlu ge\\xc3\\xa7i\\xc5\\x9f noktalar\\xc4\\xb1\n"
  "geometry_msgs/Point[] forbidden_zones       # Yasak b\\xc3\\xb6lgeler\n"
  "string[] special_constraints                # \\xc3\\x96zel k\\xc4\\xb1s\\xc4\\xb1tlar\n"
  "\n"
  "---\n"
  "\n"
  "# RESPONSE KISMI\n"
  "# Path planning sonucu\n"
  "bool success                                # Path ba\\xc5\\x9far\\xc4\\xb1yla hesapland\\xc4\\xb1 m\\xc4\\xb1?\n"
  "string message                              # Detayl\\xc4\\xb1 a\\xc3\\xa7\\xc4\\xb1klama\n"
  "\n"
  "# Hesaplanan path\n"
  "geometry_msgs/Point[] path_points           # Path \\xc3\\xbczerindeki noktalar\n"
  "geometry_msgs/Vector3[] path_orientations   # Her noktadaki oryantasyon\n"
  "float32[] path_velocities                   # Her segment i\\xc3\\xa7in h\\xc4\\xb1z\n"
  "float32[] path_timestamps                   # Her noktadaki zaman\n"
  "\n"
  "# Path quality metrics\n"
  "float32 total_distance                      # Toplam mesafe\n"
  "float32 total_time                          # Tahmini toplam s\\xc3\\xbcre\n"
  "float32 path_smoothness                     # Path yumu\\xc5\\x9fakl\\xc4\\xb1k skoru (0-1)\n"
  "float32 safety_score                        # G\\xc3\\xbcvenlik skoru (0-1)\n"
  "uint32 num_waypoints                        # Path'deki nokta say\\xc4\\xb1s\\xc4\\xb1\n"
  "\n"
  "# Alternative paths (opsiyonel)\n"
  "geometry_msgs/Point[] alternative_paths   # Alternatif yollar\n"
  "float32[] alternative_scores                # Her alternatifin skoru\n"
  "\n"
  "# Planning statistics\n"
  "float32 planning_time_ms                    # Planning s\\xc3\\xbcresi\n"
  "string algorithm_used                       # Kullan\\xc4\\xb1lan algoritma\n"
  "uint32 nodes_explored                       # Ara\\xc5\\x9ft\\xc4\\xb1r\\xc4\\xb1lan node say\\xc4\\xb1s\\xc4\\xb1\n"
  "uint32 iterations_count                     # \\xc4\\xb0terasyon say\\xc4\\xb1s\\xc4\\xb1\n"
  "\n"
  "# Hata bilgileri\n"
  "uint32 error_code                           # Hata kodu\n"
  "uint32 ERROR_NONE=0                         # Ba\\xc5\\x9far\\xc4\\xb1\n"
  "uint32 ERROR_NO_PATH_FOUND=1                # Path bulunamad\\xc4\\xb1\n"
  "uint32 ERROR_START_OCCUPIED=2               # Ba\\xc5\\x9flang\\xc4\\xb1\\xc3\\xa7 noktas\\xc4\\xb1 dolu\n"
  "uint32 ERROR_GOAL_OCCUPIED=3                # Hedef nokta dolu\n"
  "uint32 ERROR_TIMEOUT=4                      # Zaman a\\xc5\\x9f\\xc4\\xb1m\\xc4\\xb1\n"
  "uint32 ERROR_INVALID_CONSTRAINTS=5          # Ge\\xc3\\xa7ersiz k\\xc4\\xb1s\\xc4\\xb1tlar";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__CalculatePath__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__CalculatePath__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 2943, 2943},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__CalculatePath_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__CalculatePath_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__CalculatePath_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__CalculatePath_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__CalculatePath_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__CalculatePath_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__CalculatePath__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__CalculatePath__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__srv__CalculatePath_Event__get_individual_type_description_source(NULL);
    sources[3] = *day2__srv__CalculatePath_Request__get_individual_type_description_source(NULL);
    sources[4] = *day2__srv__CalculatePath_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__CalculatePath_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__CalculatePath_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__CalculatePath_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__CalculatePath_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__CalculatePath_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__CalculatePath_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__srv__CalculatePath_Request__get_individual_type_description_source(NULL);
    sources[3] = *day2__srv__CalculatePath_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
