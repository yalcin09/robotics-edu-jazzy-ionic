// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from repeat_1_4:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "repeat_1_4/srv/detail/move_robot__rosidl_typesupport_introspection_c.h"
#include "repeat_1_4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "repeat_1_4/srv/detail/move_robot__functions.h"
#include "repeat_1_4/srv/detail/move_robot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  repeat_1_4__srv__MoveRobot_Request__init(message_memory);
}

void repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_fini_function(void * message_memory)
{
  repeat_1_4__srv__MoveRobot_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_member_array[3] = {
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Request, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Request, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_members = {
  "repeat_1_4__srv",  // message namespace
  "MoveRobot_Request",  // message name
  3,  // number of fields
  sizeof(repeat_1_4__srv__MoveRobot_Request),
  false,  // has_any_key_member_
  repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_member_array,  // message members
  repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_type_support_handle = {
  0,
  &repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_members,
  get_message_typesupport_handle_function,
  &repeat_1_4__srv__MoveRobot_Request__get_type_hash,
  &repeat_1_4__srv__MoveRobot_Request__get_type_description,
  &repeat_1_4__srv__MoveRobot_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_repeat_1_4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Request)() {
  if (!repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_type_support_handle.typesupport_identifier) {
    repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "repeat_1_4/srv/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "repeat_1_4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "repeat_1_4/srv/detail/move_robot__functions.h"
// already included above
// #include "repeat_1_4/srv/detail/move_robot__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  repeat_1_4__srv__MoveRobot_Response__init(message_memory);
}

void repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_fini_function(void * message_memory)
{
  repeat_1_4__srv__MoveRobot_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Response, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_members = {
  "repeat_1_4__srv",  // message namespace
  "MoveRobot_Response",  // message name
  3,  // number of fields
  sizeof(repeat_1_4__srv__MoveRobot_Response),
  false,  // has_any_key_member_
  repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_member_array,  // message members
  repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_type_support_handle = {
  0,
  &repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_members,
  get_message_typesupport_handle_function,
  &repeat_1_4__srv__MoveRobot_Response__get_type_hash,
  &repeat_1_4__srv__MoveRobot_Response__get_type_description,
  &repeat_1_4__srv__MoveRobot_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_repeat_1_4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Response)() {
  if (!repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_type_support_handle.typesupport_identifier) {
    repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "repeat_1_4/srv/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "repeat_1_4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "repeat_1_4/srv/detail/move_robot__functions.h"
// already included above
// #include "repeat_1_4/srv/detail/move_robot__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "repeat_1_4/srv/move_robot.h"
// Member `request`
// Member `response`
// already included above
// #include "repeat_1_4/srv/detail/move_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  repeat_1_4__srv__MoveRobot_Event__init(message_memory);
}

void repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_fini_function(void * message_memory)
{
  repeat_1_4__srv__MoveRobot_Event__fini(message_memory);
}

size_t repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__size_function__MoveRobot_Event__request(
  const void * untyped_member)
{
  const repeat_1_4__srv__MoveRobot_Request__Sequence * member =
    (const repeat_1_4__srv__MoveRobot_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_const_function__MoveRobot_Event__request(
  const void * untyped_member, size_t index)
{
  const repeat_1_4__srv__MoveRobot_Request__Sequence * member =
    (const repeat_1_4__srv__MoveRobot_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_function__MoveRobot_Event__request(
  void * untyped_member, size_t index)
{
  repeat_1_4__srv__MoveRobot_Request__Sequence * member =
    (repeat_1_4__srv__MoveRobot_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__fetch_function__MoveRobot_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const repeat_1_4__srv__MoveRobot_Request * item =
    ((const repeat_1_4__srv__MoveRobot_Request *)
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_const_function__MoveRobot_Event__request(untyped_member, index));
  repeat_1_4__srv__MoveRobot_Request * value =
    (repeat_1_4__srv__MoveRobot_Request *)(untyped_value);
  *value = *item;
}

void repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__assign_function__MoveRobot_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  repeat_1_4__srv__MoveRobot_Request * item =
    ((repeat_1_4__srv__MoveRobot_Request *)
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_function__MoveRobot_Event__request(untyped_member, index));
  const repeat_1_4__srv__MoveRobot_Request * value =
    (const repeat_1_4__srv__MoveRobot_Request *)(untyped_value);
  *item = *value;
}

bool repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__resize_function__MoveRobot_Event__request(
  void * untyped_member, size_t size)
{
  repeat_1_4__srv__MoveRobot_Request__Sequence * member =
    (repeat_1_4__srv__MoveRobot_Request__Sequence *)(untyped_member);
  repeat_1_4__srv__MoveRobot_Request__Sequence__fini(member);
  return repeat_1_4__srv__MoveRobot_Request__Sequence__init(member, size);
}

size_t repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__size_function__MoveRobot_Event__response(
  const void * untyped_member)
{
  const repeat_1_4__srv__MoveRobot_Response__Sequence * member =
    (const repeat_1_4__srv__MoveRobot_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_const_function__MoveRobot_Event__response(
  const void * untyped_member, size_t index)
{
  const repeat_1_4__srv__MoveRobot_Response__Sequence * member =
    (const repeat_1_4__srv__MoveRobot_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_function__MoveRobot_Event__response(
  void * untyped_member, size_t index)
{
  repeat_1_4__srv__MoveRobot_Response__Sequence * member =
    (repeat_1_4__srv__MoveRobot_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__fetch_function__MoveRobot_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const repeat_1_4__srv__MoveRobot_Response * item =
    ((const repeat_1_4__srv__MoveRobot_Response *)
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_const_function__MoveRobot_Event__response(untyped_member, index));
  repeat_1_4__srv__MoveRobot_Response * value =
    (repeat_1_4__srv__MoveRobot_Response *)(untyped_value);
  *value = *item;
}

void repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__assign_function__MoveRobot_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  repeat_1_4__srv__MoveRobot_Response * item =
    ((repeat_1_4__srv__MoveRobot_Response *)
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_function__MoveRobot_Event__response(untyped_member, index));
  const repeat_1_4__srv__MoveRobot_Response * value =
    (const repeat_1_4__srv__MoveRobot_Response *)(untyped_value);
  *item = *value;
}

bool repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__resize_function__MoveRobot_Event__response(
  void * untyped_member, size_t size)
{
  repeat_1_4__srv__MoveRobot_Response__Sequence * member =
    (repeat_1_4__srv__MoveRobot_Response__Sequence *)(untyped_member);
  repeat_1_4__srv__MoveRobot_Response__Sequence__fini(member);
  return repeat_1_4__srv__MoveRobot_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Event, request),  // bytes offset in struct
    NULL,  // default value
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__size_function__MoveRobot_Event__request,  // size() function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_const_function__MoveRobot_Event__request,  // get_const(index) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_function__MoveRobot_Event__request,  // get(index) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__fetch_function__MoveRobot_Event__request,  // fetch(index, &value) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__assign_function__MoveRobot_Event__request,  // assign(index, value) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__resize_function__MoveRobot_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(repeat_1_4__srv__MoveRobot_Event, response),  // bytes offset in struct
    NULL,  // default value
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__size_function__MoveRobot_Event__response,  // size() function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_const_function__MoveRobot_Event__response,  // get_const(index) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__get_function__MoveRobot_Event__response,  // get(index) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__fetch_function__MoveRobot_Event__response,  // fetch(index, &value) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__assign_function__MoveRobot_Event__response,  // assign(index, value) function pointer
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__resize_function__MoveRobot_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_members = {
  "repeat_1_4__srv",  // message namespace
  "MoveRobot_Event",  // message name
  3,  // number of fields
  sizeof(repeat_1_4__srv__MoveRobot_Event),
  false,  // has_any_key_member_
  repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_member_array,  // message members
  repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_type_support_handle = {
  0,
  &repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_members,
  get_message_typesupport_handle_function,
  &repeat_1_4__srv__MoveRobot_Event__get_type_hash,
  &repeat_1_4__srv__MoveRobot_Event__get_type_description,
  &repeat_1_4__srv__MoveRobot_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_repeat_1_4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Event)() {
  repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Request)();
  repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Response)();
  if (!repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_type_support_handle.typesupport_identifier) {
    repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "repeat_1_4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "repeat_1_4/srv/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_service_members = {
  "repeat_1_4__srv",  // service namespace
  "MoveRobot",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_Request_message_type_support_handle,
  NULL,  // response message
  // repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_Response_message_type_support_handle
  NULL  // event_message
  // repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_Response_message_type_support_handle
};


static rosidl_service_type_support_t repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_service_type_support_handle = {
  0,
  &repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_service_members,
  get_service_typesupport_handle_function,
  &repeat_1_4__srv__MoveRobot_Request__rosidl_typesupport_introspection_c__MoveRobot_Request_message_type_support_handle,
  &repeat_1_4__srv__MoveRobot_Response__rosidl_typesupport_introspection_c__MoveRobot_Response_message_type_support_handle,
  &repeat_1_4__srv__MoveRobot_Event__rosidl_typesupport_introspection_c__MoveRobot_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    repeat_1_4,
    srv,
    MoveRobot
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    repeat_1_4,
    srv,
    MoveRobot
  ),
  &repeat_1_4__srv__MoveRobot__get_type_hash,
  &repeat_1_4__srv__MoveRobot__get_type_description,
  &repeat_1_4__srv__MoveRobot__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_repeat_1_4
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot)(void) {
  if (!repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_service_type_support_handle.typesupport_identifier) {
    repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, repeat_1_4, srv, MoveRobot_Event)()->data;
  }

  return &repeat_1_4__srv__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_service_type_support_handle;
}
