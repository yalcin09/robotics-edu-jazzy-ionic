// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "repeat_1_4/msg/detail/position__rosidl_typesupport_introspection_c.h"
#include "repeat_1_4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "repeat_1_4/msg/detail/position__functions.h"
#include "repeat_1_4/msg/detail/position__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  repeat_1_4__msg__Position__init(message_memory);
}

void repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_fini_function(void * message_memory)
{
  repeat_1_4__msg__Position__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__msg__Position, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__msg__Position, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__msg__Position, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__msg__Position, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_members = {
  "repeat_1_4__msg",  // message namespace
  "Position",  // message name
  4,  // number of fields
  sizeof(repeat_1_4__msg__Position),
  false,  // has_any_key_member_
  repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array,  // message members
  repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_init_function,  // function to initialize message memory (memory has to be allocated)
  repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle = {
  0,
  &repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_members,
  get_message_typesupport_handle_function,
  &repeat_1_4__msg__Position__get_type_hash,
  &repeat_1_4__msg__Position__get_type_description,
  &repeat_1_4__msg__Position__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_repeat_1_4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, msg, Position)() {
  repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle.typesupport_identifier) {
    repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &repeat_1_4__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
