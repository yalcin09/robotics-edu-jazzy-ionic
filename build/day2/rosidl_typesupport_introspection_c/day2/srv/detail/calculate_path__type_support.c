// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/srv/detail/calculate_path__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/srv/detail/calculate_path__functions.h"
#include "day2/srv/detail/calculate_path__struct.h"


// Include directives for member types
// Member `start_position`
// Member `goal_position`
// Member `waypoints`
// Member `forbidden_zones`
#include "geometry_msgs/msg/point.h"
// Member `start_position`
// Member `goal_position`
// Member `waypoints`
// Member `forbidden_zones`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `start_orientation`
// Member `goal_orientation`
#include "geometry_msgs/msg/vector3.h"
// Member `start_orientation`
// Member `goal_orientation`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `planning_algorithm`
// Member `special_constraints`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__CalculatePath_Request__init(message_memory);
}

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_fini_function(void * message_memory)
{
  day2__srv__CalculatePath_Request__fini(message_memory);
}

size_t day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__size_function__CalculatePath_Request__waypoints(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__waypoints(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__waypoints(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Request__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__waypoints(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Request__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__waypoints(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Request__waypoints(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__size_function__CalculatePath_Request__forbidden_zones(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__forbidden_zones(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__forbidden_zones(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Request__forbidden_zones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__forbidden_zones(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Request__forbidden_zones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__forbidden_zones(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Request__forbidden_zones(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__size_function__CalculatePath_Request__special_constraints(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__special_constraints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__special_constraints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Request__special_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__special_constraints(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Request__special_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__special_constraints(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Request__special_constraints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array[16] = {
  {
    "start_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, start_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, goal_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, start_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, goal_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, max_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turning_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, turning_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_margin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, safety_margin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_algorithm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, planning_algorithm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, planning_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimize_for_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, optimize_for_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimize_for_smoothness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, optimize_for_smoothness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avoid_dynamic_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, avoid_dynamic_obstacles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, waypoints),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__size_function__CalculatePath_Request__waypoints,  // size() function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__waypoints,  // get_const(index) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__waypoints,  // get(index) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Request__waypoints,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Request__waypoints,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Request__waypoints  // resize(index) function pointer
  },
  {
    "forbidden_zones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, forbidden_zones),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__size_function__CalculatePath_Request__forbidden_zones,  // size() function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__forbidden_zones,  // get_const(index) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__forbidden_zones,  // get(index) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Request__forbidden_zones,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Request__forbidden_zones,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Request__forbidden_zones  // resize(index) function pointer
  },
  {
    "special_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Request, special_constraints),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__size_function__CalculatePath_Request__special_constraints,  // size() function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Request__special_constraints,  // get_const(index) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__get_function__CalculatePath_Request__special_constraints,  // get(index) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Request__special_constraints,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Request__special_constraints,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Request__special_constraints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_members = {
  "day2__srv",  // message namespace
  "CalculatePath_Request",  // message name
  16,  // number of fields
  sizeof(day2__srv__CalculatePath_Request),
  false,  // has_any_key_member_
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array,  // message members
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_type_support_handle = {
  0,
  &day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__CalculatePath_Request__get_type_hash,
  &day2__srv__CalculatePath_Request__get_type_description,
  &day2__srv__CalculatePath_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Request)() {
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_type_support_handle.typesupport_identifier) {
    day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/calculate_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/calculate_path__functions.h"
// already included above
// #include "day2/srv/detail/calculate_path__struct.h"


// Include directives for member types
// Member `message`
// Member `algorithm_used`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `path_points`
// Member `alternative_paths`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `path_points`
// Member `alternative_paths`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `path_orientations`
// already included above
// #include "geometry_msgs/msg/vector3.h"
// Member `path_orientations`
// already included above
// #include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `path_velocities`
// Member `path_timestamps`
// Member `alternative_scores`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__CalculatePath_Response__init(message_memory);
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_fini_function(void * message_memory)
{
  day2__srv__CalculatePath_Response__fini(message_memory);
}

size_t day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_orientations(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_orientations(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_orientations(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_orientations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_orientations(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_orientations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_orientations(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_orientations(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_timestamps(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_timestamps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_timestamps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_timestamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_timestamps(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_timestamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_timestamps(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_timestamps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__alternative_paths(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__alternative_paths(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__alternative_paths(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__alternative_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__alternative_paths(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__alternative_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__alternative_paths(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__alternative_paths(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__alternative_scores(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__alternative_scores(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__alternative_scores(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__alternative_scores(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__alternative_scores(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__alternative_scores(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__alternative_scores(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__alternative_scores(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_member_array[18] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, success),  // bytes offset in struct
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
    offsetof(day2__srv__CalculatePath_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, path_points),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_points,  // size() function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_points,  // get_const(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_points,  // get(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_points,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_points,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_points  // resize(index) function pointer
  },
  {
    "path_orientations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, path_orientations),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_orientations,  // size() function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_orientations,  // get_const(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_orientations,  // get(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_orientations,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_orientations,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_orientations  // resize(index) function pointer
  },
  {
    "path_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, path_velocities),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_velocities,  // size() function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_velocities,  // get_const(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_velocities,  // get(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_velocities,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_velocities,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_velocities  // resize(index) function pointer
  },
  {
    "path_timestamps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, path_timestamps),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__path_timestamps,  // size() function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__path_timestamps,  // get_const(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__path_timestamps,  // get(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__path_timestamps,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__path_timestamps,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__path_timestamps  // resize(index) function pointer
  },
  {
    "total_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, total_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, total_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_smoothness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, path_smoothness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, safety_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, num_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alternative_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, alternative_paths),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__alternative_paths,  // size() function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__alternative_paths,  // get_const(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__alternative_paths,  // get(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__alternative_paths,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__alternative_paths,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__alternative_paths  // resize(index) function pointer
  },
  {
    "alternative_scores",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, alternative_scores),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__size_function__CalculatePath_Response__alternative_scores,  // size() function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Response__alternative_scores,  // get_const(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__get_function__CalculatePath_Response__alternative_scores,  // get(index) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Response__alternative_scores,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Response__alternative_scores,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Response__alternative_scores  // resize(index) function pointer
  },
  {
    "planning_time_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, planning_time_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "algorithm_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, algorithm_used),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes_explored",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, nodes_explored),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iterations_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, iterations_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_members = {
  "day2__srv",  // message namespace
  "CalculatePath_Response",  // message name
  18,  // number of fields
  sizeof(day2__srv__CalculatePath_Response),
  false,  // has_any_key_member_
  day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_member_array,  // message members
  day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_type_support_handle = {
  0,
  &day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__CalculatePath_Response__get_type_hash,
  &day2__srv__CalculatePath_Response__get_type_description,
  &day2__srv__CalculatePath_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Response)() {
  day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_type_support_handle.typesupport_identifier) {
    day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/calculate_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/calculate_path__functions.h"
// already included above
// #include "day2/srv/detail/calculate_path__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "day2/srv/calculate_path.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/srv/detail/calculate_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__CalculatePath_Event__init(message_memory);
}

void day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_fini_function(void * message_memory)
{
  day2__srv__CalculatePath_Event__fini(message_memory);
}

size_t day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__size_function__CalculatePath_Event__request(
  const void * untyped_member)
{
  const day2__srv__CalculatePath_Request__Sequence * member =
    (const day2__srv__CalculatePath_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__srv__CalculatePath_Request__Sequence * member =
    (const day2__srv__CalculatePath_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_function__CalculatePath_Event__request(
  void * untyped_member, size_t index)
{
  day2__srv__CalculatePath_Request__Sequence * member =
    (day2__srv__CalculatePath_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__CalculatePath_Request * item =
    ((const day2__srv__CalculatePath_Request *)
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Event__request(untyped_member, index));
  day2__srv__CalculatePath_Request * value =
    (day2__srv__CalculatePath_Request *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__CalculatePath_Request * item =
    ((day2__srv__CalculatePath_Request *)
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_function__CalculatePath_Event__request(untyped_member, index));
  const day2__srv__CalculatePath_Request * value =
    (const day2__srv__CalculatePath_Request *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Event__request(
  void * untyped_member, size_t size)
{
  day2__srv__CalculatePath_Request__Sequence * member =
    (day2__srv__CalculatePath_Request__Sequence *)(untyped_member);
  day2__srv__CalculatePath_Request__Sequence__fini(member);
  return day2__srv__CalculatePath_Request__Sequence__init(member, size);
}

size_t day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__size_function__CalculatePath_Event__response(
  const void * untyped_member)
{
  const day2__srv__CalculatePath_Response__Sequence * member =
    (const day2__srv__CalculatePath_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__srv__CalculatePath_Response__Sequence * member =
    (const day2__srv__CalculatePath_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_function__CalculatePath_Event__response(
  void * untyped_member, size_t index)
{
  day2__srv__CalculatePath_Response__Sequence * member =
    (day2__srv__CalculatePath_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__CalculatePath_Response * item =
    ((const day2__srv__CalculatePath_Response *)
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Event__response(untyped_member, index));
  day2__srv__CalculatePath_Response * value =
    (day2__srv__CalculatePath_Response *)(untyped_value);
  *value = *item;
}

void day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__CalculatePath_Response * item =
    ((day2__srv__CalculatePath_Response *)
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_function__CalculatePath_Event__response(untyped_member, index));
  const day2__srv__CalculatePath_Response * value =
    (const day2__srv__CalculatePath_Response *)(untyped_value);
  *item = *value;
}

bool day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Event__response(
  void * untyped_member, size_t size)
{
  day2__srv__CalculatePath_Response__Sequence * member =
    (day2__srv__CalculatePath_Response__Sequence *)(untyped_member);
  day2__srv__CalculatePath_Response__Sequence__fini(member);
  return day2__srv__CalculatePath_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__CalculatePath_Event, info),  // bytes offset in struct
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
    offsetof(day2__srv__CalculatePath_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__size_function__CalculatePath_Event__request,  // size() function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Event__request,  // get_const(index) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_function__CalculatePath_Event__request,  // get(index) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Event__request,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Event__request,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Event__request  // resize(index) function pointer
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
    offsetof(day2__srv__CalculatePath_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__size_function__CalculatePath_Event__response,  // size() function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_const_function__CalculatePath_Event__response,  // get_const(index) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__get_function__CalculatePath_Event__response,  // get(index) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__fetch_function__CalculatePath_Event__response,  // fetch(index, &value) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__assign_function__CalculatePath_Event__response,  // assign(index, value) function pointer
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__resize_function__CalculatePath_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_members = {
  "day2__srv",  // message namespace
  "CalculatePath_Event",  // message name
  3,  // number of fields
  sizeof(day2__srv__CalculatePath_Event),
  false,  // has_any_key_member_
  day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_member_array,  // message members
  day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_type_support_handle = {
  0,
  &day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__CalculatePath_Event__get_type_hash,
  &day2__srv__CalculatePath_Event__get_type_description,
  &day2__srv__CalculatePath_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Event)() {
  day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Request)();
  day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Response)();
  if (!day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_type_support_handle.typesupport_identifier) {
    day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/srv/detail/calculate_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_service_members = {
  "day2__srv",  // service namespace
  "CalculatePath",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_Request_message_type_support_handle,
  NULL,  // response message
  // day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_Response_message_type_support_handle
  NULL  // event_message
  // day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_service_type_support_handle = {
  0,
  &day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_service_members,
  get_service_typesupport_handle_function,
  &day2__srv__CalculatePath_Request__rosidl_typesupport_introspection_c__CalculatePath_Request_message_type_support_handle,
  &day2__srv__CalculatePath_Response__rosidl_typesupport_introspection_c__CalculatePath_Response_message_type_support_handle,
  &day2__srv__CalculatePath_Event__rosidl_typesupport_introspection_c__CalculatePath_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    CalculatePath
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    CalculatePath
  ),
  &day2__srv__CalculatePath__get_type_hash,
  &day2__srv__CalculatePath__get_type_description,
  &day2__srv__CalculatePath__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath)(void) {
  if (!day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_service_type_support_handle.typesupport_identifier) {
    day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Event)()->data;
  }

  return &day2__srv__detail__calculate_path__rosidl_typesupport_introspection_c__CalculatePath_service_type_support_handle;
}
