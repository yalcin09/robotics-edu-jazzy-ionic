// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#include "day2/srv/detail/robot_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__RobotCommand__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xcc, 0x74, 0x2f, 0xf8, 0xb6, 0x60, 0xbb,
      0xde, 0x39, 0x70, 0xf3, 0x64, 0x51, 0x86, 0xf0,
      0xaa, 0x8c, 0xab, 0xb9, 0x16, 0xda, 0xfd, 0xbd,
      0xee, 0x7e, 0xa8, 0x52, 0xb8, 0x6c, 0x5e, 0x67,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__RobotCommand_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0x86, 0x98, 0x43, 0x6c, 0x4a, 0xdd, 0xc8,
      0xc5, 0x8f, 0x04, 0x6f, 0x47, 0xaf, 0x41, 0x1d,
      0xf9, 0x39, 0xa3, 0xc7, 0x41, 0x5b, 0x58, 0xb3,
      0x84, 0xff, 0x0f, 0x33, 0x40, 0x0c, 0x8d, 0xe7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__RobotCommand_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0d, 0x38, 0xa8, 0x1f, 0x08, 0xa2, 0x38, 0x88,
      0x39, 0x2a, 0xc7, 0x19, 0x78, 0x5a, 0x05, 0x7b,
      0x1d, 0x99, 0xd7, 0x33, 0x29, 0xa7, 0x18, 0x2f,
      0xd5, 0x70, 0x0c, 0xe9, 0x1c, 0x5b, 0x34, 0xcf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__RobotCommand_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x01, 0x27, 0x1c, 0x08, 0x0d, 0x2c, 0x0d,
      0xa5, 0x9c, 0x5d, 0x2b, 0xfb, 0x6c, 0xd8, 0x76,
      0xe6, 0x78, 0xe3, 0x37, 0xd0, 0x3d, 0x4e, 0x38,
      0x03, 0x30, 0xe6, 0x4f, 0x94, 0x1d, 0xc6, 0x1a,
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

static char day2__srv__RobotCommand__TYPE_NAME[] = "day2/srv/RobotCommand";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char day2__srv__RobotCommand_Event__TYPE_NAME[] = "day2/srv/RobotCommand_Event";
static char day2__srv__RobotCommand_Request__TYPE_NAME[] = "day2/srv/RobotCommand_Request";
static char day2__srv__RobotCommand_Response__TYPE_NAME[] = "day2/srv/RobotCommand_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char day2__srv__RobotCommand__FIELD_NAME__request_message[] = "request_message";
static char day2__srv__RobotCommand__FIELD_NAME__response_message[] = "response_message";
static char day2__srv__RobotCommand__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field day2__srv__RobotCommand__FIELDS[] = {
  {
    {day2__srv__RobotCommand__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__RobotCommand_Request__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__RobotCommand_Response__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__RobotCommand_Event__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__RobotCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Event__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__TYPE_NAME, 30, 30},
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
day2__srv__RobotCommand__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__RobotCommand__TYPE_NAME, 21, 21},
      {day2__srv__RobotCommand__FIELDS, 3, 3},
    },
    {day2__srv__RobotCommand__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = day2__srv__RobotCommand_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = day2__srv__RobotCommand_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = day2__srv__RobotCommand_Response__get_type_description(NULL)->type_description.fields;
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
static char day2__srv__RobotCommand_Request__FIELD_NAME__command_type[] = "command_type";
static char day2__srv__RobotCommand_Request__FIELD_NAME__target_position[] = "target_position";
static char day2__srv__RobotCommand_Request__FIELD_NAME__target_orientation[] = "target_orientation";
static char day2__srv__RobotCommand_Request__FIELD_NAME__max_velocity[] = "max_velocity";
static char day2__srv__RobotCommand_Request__FIELD_NAME__max_acceleration[] = "max_acceleration";
static char day2__srv__RobotCommand_Request__FIELD_NAME__timeout_seconds[] = "timeout_seconds";
static char day2__srv__RobotCommand_Request__FIELD_NAME__force_execution[] = "force_execution";
static char day2__srv__RobotCommand_Request__FIELD_NAME__additional_params[] = "additional_params";
static char day2__srv__RobotCommand_Request__FIELD_NAME__deadline[] = "deadline";

static rosidl_runtime_c__type_description__Field day2__srv__RobotCommand_Request__FIELDS[] = {
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__command_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__target_orientation, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__max_velocity, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__max_acceleration, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__timeout_seconds, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__force_execution, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__additional_params, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__FIELD_NAME__deadline, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__RobotCommand_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
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
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__RobotCommand_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__RobotCommand_Request__TYPE_NAME, 29, 29},
      {day2__srv__RobotCommand_Request__FIELDS, 9, 9},
    },
    {day2__srv__RobotCommand_Request__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__RobotCommand_Response__FIELD_NAME__success[] = "success";
static char day2__srv__RobotCommand_Response__FIELD_NAME__message[] = "message";
static char day2__srv__RobotCommand_Response__FIELD_NAME__command_id[] = "command_id";
static char day2__srv__RobotCommand_Response__FIELD_NAME__estimated_duration[] = "estimated_duration";
static char day2__srv__RobotCommand_Response__FIELD_NAME__actual_target[] = "actual_target";
static char day2__srv__RobotCommand_Response__FIELD_NAME__estimated_completion[] = "estimated_completion";
static char day2__srv__RobotCommand_Response__FIELD_NAME__error_code[] = "error_code";

static rosidl_runtime_c__type_description__Field day2__srv__RobotCommand_Response__FIELDS[] = {
  {
    {day2__srv__RobotCommand_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__FIELD_NAME__command_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__FIELD_NAME__estimated_duration, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__FIELD_NAME__actual_target, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__FIELD_NAME__estimated_completion, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__RobotCommand_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__RobotCommand_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__RobotCommand_Response__TYPE_NAME, 30, 30},
      {day2__srv__RobotCommand_Response__FIELDS, 7, 7},
    },
    {day2__srv__RobotCommand_Response__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__RobotCommand_Event__FIELD_NAME__info[] = "info";
static char day2__srv__RobotCommand_Event__FIELD_NAME__request[] = "request";
static char day2__srv__RobotCommand_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field day2__srv__RobotCommand_Event__FIELDS[] = {
  {
    {day2__srv__RobotCommand_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__RobotCommand_Request__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__RobotCommand_Response__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__RobotCommand_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Request__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {day2__srv__RobotCommand_Response__TYPE_NAME, 30, 30},
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
day2__srv__RobotCommand_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__RobotCommand_Event__TYPE_NAME, 27, 27},
      {day2__srv__RobotCommand_Event__FIELDS, 3, 3},
    },
    {day2__srv__RobotCommand_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = day2__srv__RobotCommand_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = day2__srv__RobotCommand_Response__get_type_description(NULL)->type_description.fields;
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
  "# REQUEST KISMI (Client \\xe2\\x86\\x92 Server)\n"
  "# Komut t\\xc3\\xbcr\\xc3\\xbc ve parametreleri\n"
  "string command_type                         # Komut t\\xc3\\xbcr\\xc3\\xbc (\\xc3\\xb6rn: \"move_to\", \"rotate\", \"stop\", \"home\")\n"
  "geometry_msgs/Point target_position         # Hedef pozisyon (x, y, z)\n"
  "geometry_msgs/Vector3 target_orientation    # Hedef oryantasyon (roll, pitch, yaw)\n"
  "float32 max_velocity                        # Maksimum h\\xc4\\xb1z (m/s)\n"
  "float32 max_acceleration                    # Maksimum ivme (m/s\\xc2\\xb2)\n"
  "float32 timeout_seconds                     # Komut timeout s\\xc3\\xbcresi\n"
  "bool force_execution                        # G\\xc3\\xbcvenlik kontrollerini atla\n"
  "string[] additional_params                  # Ek parametreler\n"
  "builtin_interfaces/Time deadline            # Komutun tamamlanmas\\xc4\\xb1 gereken zaman\n"
  "\n"
  "---\n"
  "\n"
  "# RESPONSE KISMI (Server \\xe2\\x86\\x92 Client)\n"
  "# Komut kabul edildi mi?\n"
  "bool success                                        # Komut ba\\xc5\\x9far\\xc4\\xb1yla al\\xc4\\xb1nd\\xc4\\xb1 ve i\\xc5\\x9fleme ba\\xc5\\x9fland\\xc4\\xb1\n"
  "string message                                      # Detayl\\xc4\\xb1 mesaj (ba\\xc5\\x9far\\xc4\\xb1/hata a\\xc3\\xa7\\xc4\\xb1klamas\\xc4\\xb1)\n"
  "uint32 command_id                                   # Bu komut i\\xc3\\xa7in benzersiz ID\n"
  "float32 estimated_duration                          # Tahmini tamamlanma s\\xc3\\xbcresi (saniye)\n"
  "geometry_msgs/Point actual_target                   # Ger\\xc3\\xa7ekte gidilecek pozisyon (g\\xc3\\xbcvenlik s\\xc4\\xb1n\\xc4\\xb1rlar\\xc4\\xb1)\n"
  "builtin_interfaces/Time estimated_completion        # Tahmini tamamlanma zaman\\xc4\\xb1\n"
  "\n"
  "# Hata kodlar\\xc4\\xb1\n"
  "uint32 error_code                   # Hata kodu (0 = ba\\xc5\\x9far\\xc4\\xb1)\n"
  "uint32 ERROR_NONE=0                 # Hata yok\n"
  "uint32 ERROR_INVALID_COMMAND=1      # Ge\\xc3\\xa7ersiz komut\n"
  "uint32 ERROR_OUT_OF_BOUNDS=2        # Eri\\xc5\\x9filemez pozisyon\n"
  "uint32 ERROR_ROBOT_BUSY=3           # Robot me\\xc5\\x9fgul\n"
  "uint32 ERROR_SAFETY_VIOLATION=4     # G\\xc3\\xbcvenlik ihlali\n"
  "uint32 ERROR_HARDWARE_FAILURE=5     # Donan\\xc4\\xb1m ar\\xc4\\xb1zas\\xc4\\xb1\n"
  "uint32 ERROR_TIMEOUT=6              # Zaman a\\xc5\\x9f\\xc4\\xb1m\\xc4\\xb1";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__RobotCommand__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__RobotCommand__TYPE_NAME, 21, 21},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1785, 1785},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__RobotCommand_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__RobotCommand_Request__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__RobotCommand_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__RobotCommand_Response__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__RobotCommand_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__RobotCommand_Event__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__RobotCommand__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__RobotCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__srv__RobotCommand_Event__get_individual_type_description_source(NULL);
    sources[3] = *day2__srv__RobotCommand_Request__get_individual_type_description_source(NULL);
    sources[4] = *day2__srv__RobotCommand_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__RobotCommand_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__RobotCommand_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__RobotCommand_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__RobotCommand_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__RobotCommand_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__RobotCommand_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__srv__RobotCommand_Request__get_individual_type_description_source(NULL);
    sources[3] = *day2__srv__RobotCommand_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
