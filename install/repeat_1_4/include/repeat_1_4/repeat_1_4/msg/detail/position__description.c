// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice

#include "repeat_1_4/msg/detail/position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_type_hash_t *
repeat_1_4__msg__Position__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x21, 0xc3, 0x6c, 0xba, 0x33, 0x1a, 0xa4,
      0x84, 0x73, 0x42, 0xdc, 0x35, 0xac, 0x8b, 0xad,
      0x88, 0xd1, 0x58, 0xb3, 0xb9, 0xd2, 0x4c, 0xeb,
      0x5d, 0xc0, 0xd2, 0x36, 0x47, 0xf4, 0x7d, 0x1d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char repeat_1_4__msg__Position__TYPE_NAME[] = "repeat_1_4/msg/Position";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char repeat_1_4__msg__Position__FIELD_NAME__x[] = "x";
static char repeat_1_4__msg__Position__FIELD_NAME__y[] = "y";
static char repeat_1_4__msg__Position__FIELD_NAME__status[] = "status";
static char repeat_1_4__msg__Position__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field repeat_1_4__msg__Position__FIELDS[] = {
  {
    {repeat_1_4__msg__Position__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__msg__Position__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__msg__Position__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {repeat_1_4__msg__Position__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription repeat_1_4__msg__Position__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
repeat_1_4__msg__Position__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {repeat_1_4__msg__Position__TYPE_NAME, 23, 23},
      {repeat_1_4__msg__Position__FIELDS, 4, 4},
    },
    {repeat_1_4__msg__Position__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xc3\\x87ok basit robot pozisyonu\n"
  "float32 x          # X koordinat\\xc4\\xb1\n"
  "float32 y          # Y koordinat\\xc4\\xb1\n"
  "string status      # Robot durumu (\"moving\", \"stopped\", \"error\")\n"
  "builtin_interfaces/Time timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
repeat_1_4__msg__Position__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {repeat_1_4__msg__Position__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 194, 194},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
repeat_1_4__msg__Position__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *repeat_1_4__msg__Position__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
