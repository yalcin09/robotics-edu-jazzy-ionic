// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from repeat_1_4:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#include "repeat_1_4/srv/detail/move_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_type_hash_t *
repeat_1_4__srv__MoveRobot__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xfa, 0xef, 0xb5, 0x95, 0xf7, 0x41, 0xcd,
      0x30, 0x91, 0x9b, 0x7d, 0xfe, 0x35, 0xbb, 0x5b,
      0xa3, 0x79, 0xda, 0x64, 0x76, 0x9d, 0x74, 0xbb,
      0x34, 0x37, 0x75, 0xa9, 0x5a, 0xf2, 0xd1, 0x28,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_type_hash_t *
repeat_1_4__srv__MoveRobot_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x48, 0xb1, 0x00, 0x22, 0xcf, 0x1c, 0x0d,
      0x8d, 0xb1, 0x82, 0x46, 0x4b, 0xe4, 0xd9, 0x06,
      0xa5, 0xd3, 0x8d, 0xc4, 0xb5, 0xa0, 0x42, 0xa4,
      0xaf, 0x14, 0xcd, 0xea, 0x97, 0x97, 0xca, 0x76,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_type_hash_t *
repeat_1_4__srv__MoveRobot_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0xc0, 0xe1, 0x61, 0x7c, 0xcb, 0x89, 0x43,
      0x15, 0x50, 0x6c, 0xba, 0x53, 0x4e, 0x43, 0xcb,
      0xa2, 0x36, 0x45, 0xd2, 0x97, 0xa4, 0x65, 0x88,
      0x73, 0x4a, 0x26, 0xd2, 0x69, 0x5b, 0xca, 0x86,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_type_hash_t *
repeat_1_4__srv__MoveRobot_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x64, 0x46, 0xf5, 0xc6, 0x5d, 0x49, 0x84,
      0x28, 0x85, 0xb3, 0x0a, 0x77, 0xa2, 0x52, 0x63,
      0x8f, 0x08, 0xac, 0x6c, 0xf6, 0xbc, 0x2f, 0xf3,
      0x4e, 0xc2, 0xeb, 0x2c, 0xbe, 0x47, 0xfb, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char repeat_1_4__srv__MoveRobot__TYPE_NAME[] = "repeat_1_4/srv/MoveRobot";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char repeat_1_4__srv__MoveRobot_Event__TYPE_NAME[] = "repeat_1_4/srv/MoveRobot_Event";
static char repeat_1_4__srv__MoveRobot_Request__TYPE_NAME[] = "repeat_1_4/srv/MoveRobot_Request";
static char repeat_1_4__srv__MoveRobot_Response__TYPE_NAME[] = "repeat_1_4/srv/MoveRobot_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char repeat_1_4__srv__MoveRobot__FIELD_NAME__request_message[] = "request_message";
static char repeat_1_4__srv__MoveRobot__FIELD_NAME__response_message[] = "response_message";
static char repeat_1_4__srv__MoveRobot__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field repeat_1_4__srv__MoveRobot__FIELDS[] = {
  {
    {repeat_1_4__srv__MoveRobot__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {repeat_1_4__srv__MoveRobot_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {repeat_1_4__srv__MoveRobot_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {repeat_1_4__srv__MoveRobot_Event__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription repeat_1_4__srv__MoveRobot__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Event__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
repeat_1_4__srv__MoveRobot__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {repeat_1_4__srv__MoveRobot__TYPE_NAME, 24, 24},
      {repeat_1_4__srv__MoveRobot__FIELDS, 3, 3},
    },
    {repeat_1_4__srv__MoveRobot__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = repeat_1_4__srv__MoveRobot_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = repeat_1_4__srv__MoveRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = repeat_1_4__srv__MoveRobot_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char repeat_1_4__srv__MoveRobot_Request__FIELD_NAME__target_x[] = "target_x";
static char repeat_1_4__srv__MoveRobot_Request__FIELD_NAME__target_y[] = "target_y";
static char repeat_1_4__srv__MoveRobot_Request__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field repeat_1_4__srv__MoveRobot_Request__FIELDS[] = {
  {
    {repeat_1_4__srv__MoveRobot_Request__FIELD_NAME__target_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Request__FIELD_NAME__target_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Request__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
repeat_1_4__srv__MoveRobot_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {repeat_1_4__srv__MoveRobot_Request__TYPE_NAME, 32, 32},
      {repeat_1_4__srv__MoveRobot_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char repeat_1_4__srv__MoveRobot_Response__FIELD_NAME__success[] = "success";
static char repeat_1_4__srv__MoveRobot_Response__FIELD_NAME__message[] = "message";
static char repeat_1_4__srv__MoveRobot_Response__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field repeat_1_4__srv__MoveRobot_Response__FIELDS[] = {
  {
    {repeat_1_4__srv__MoveRobot_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Response__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
repeat_1_4__srv__MoveRobot_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {repeat_1_4__srv__MoveRobot_Response__TYPE_NAME, 33, 33},
      {repeat_1_4__srv__MoveRobot_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char repeat_1_4__srv__MoveRobot_Event__FIELD_NAME__info[] = "info";
static char repeat_1_4__srv__MoveRobot_Event__FIELD_NAME__request[] = "request";
static char repeat_1_4__srv__MoveRobot_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field repeat_1_4__srv__MoveRobot_Event__FIELDS[] = {
  {
    {repeat_1_4__srv__MoveRobot_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {repeat_1_4__srv__MoveRobot_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {repeat_1_4__srv__MoveRobot_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription repeat_1_4__srv__MoveRobot_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__srv__MoveRobot_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
repeat_1_4__srv__MoveRobot_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {repeat_1_4__srv__MoveRobot_Event__TYPE_NAME, 30, 30},
      {repeat_1_4__srv__MoveRobot_Event__FIELDS, 3, 3},
    },
    {repeat_1_4__srv__MoveRobot_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = repeat_1_4__srv__MoveRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = repeat_1_4__srv__MoveRobot_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# REQUEST - Robot'u hareket ettirmek i\\xc3\\xa7in\n"
  "float32 target_x        # Hedef X pozisyonu\n"
  "float32 target_y        # Hedef Y pozisyonu\n"
  "float32 speed           # Hareket h\\xc4\\xb1z\\xc4\\xb1\n"
  "\n"
  "---\n"
  "\n"
  "# RESPONSE - Hareket komutunun sonucu\n"
  "bool success           # Komut ba\\xc5\\x9far\\xc4\\xb1l\\xc4\\xb1 m\\xc4\\xb1?\n"
  "string message         # Sonu\\xc3\\xa7 mesaj\\xc4\\xb1\n"
  "float32 distance       # Hedef mesafe";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
repeat_1_4__srv__MoveRobot__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {repeat_1_4__srv__MoveRobot__TYPE_NAME, 24, 24},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 332, 332},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
repeat_1_4__srv__MoveRobot_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {repeat_1_4__srv__MoveRobot_Request__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
repeat_1_4__srv__MoveRobot_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {repeat_1_4__srv__MoveRobot_Response__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
repeat_1_4__srv__MoveRobot_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {repeat_1_4__srv__MoveRobot_Event__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
repeat_1_4__srv__MoveRobot__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *repeat_1_4__srv__MoveRobot__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *repeat_1_4__srv__MoveRobot_Event__get_individual_type_description_source(NULL);
    sources[3] = *repeat_1_4__srv__MoveRobot_Request__get_individual_type_description_source(NULL);
    sources[4] = *repeat_1_4__srv__MoveRobot_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
repeat_1_4__srv__MoveRobot_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *repeat_1_4__srv__MoveRobot_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
repeat_1_4__srv__MoveRobot_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *repeat_1_4__srv__MoveRobot_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
repeat_1_4__srv__MoveRobot_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *repeat_1_4__srv__MoveRobot_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *repeat_1_4__srv__MoveRobot_Request__get_individual_type_description_source(NULL);
    sources[3] = *repeat_1_4__srv__MoveRobot_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
