// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:action/PickAndPlace.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/action/detail/pick_and_place__functions.h"
#include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `object_id`
// Member `object_type`
// Member `grasp_type`
// Member `forbidden_zones`
#include "rosidl_runtime_c/string_functions.h"
// Member `pickup_location`
// Member `place_location`
#include "geometry_msgs/msg/point.h"
// Member `pickup_location`
// Member `place_location`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `object_dimensions`
#include "geometry_msgs/msg/vector3.h"
// Member `object_dimensions`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_Goal__init(message_memory);
}

void day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_Goal__fini(message_memory);
}

size_t day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__size_function__PickAndPlace_Goal__forbidden_zones(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_Goal__forbidden_zones(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__get_function__PickAndPlace_Goal__forbidden_zones(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_Goal__forbidden_zones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_Goal__forbidden_zones(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_Goal__forbidden_zones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__get_function__PickAndPlace_Goal__forbidden_zones(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_Goal__forbidden_zones(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_member_array[17] = {
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pickup_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, pickup_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, place_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, object_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, object_weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, object_dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, grasp_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, grasp_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "approach_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, approach_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lift_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, lift_height),  // bytes offset in struct
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
    offsetof(day2__action__PickAndPlace_Goal, max_velocity),  // bytes offset in struct
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
    offsetof(day2__action__PickAndPlace_Goal, max_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_careful_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, use_careful_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, timeout_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, collision_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_force_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, enable_force_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forbidden_zones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Goal, forbidden_zones),  // bytes offset in struct
    NULL,  // default value
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__size_function__PickAndPlace_Goal__forbidden_zones,  // size() function pointer
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_Goal__forbidden_zones,  // get_const(index) function pointer
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__get_function__PickAndPlace_Goal__forbidden_zones,  // get(index) function pointer
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_Goal__forbidden_zones,  // fetch(index, &value) function pointer
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_Goal__forbidden_zones,  // assign(index, value) function pointer
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_Goal__forbidden_zones  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_Goal",  // message name
  17,  // number of fields
  sizeof(day2__action__PickAndPlace_Goal),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_member_array,  // message members
  day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_Goal__get_type_hash,
  &day2__action__PickAndPlace_Goal__get_type_description,
  &day2__action__PickAndPlace_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_Goal)() {
  day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `result_message`
// Member `error_details`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `final_object_location`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `final_object_location`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_Result__init(message_memory);
}

void day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_member_array[15] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, result_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_object_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, final_object_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_task_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, total_task_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pickup_successful",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, pickup_successful),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transport_successful",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, transport_successful),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place_successful",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, place_successful),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pickup_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, pickup_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transport_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, transport_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, place_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accuracy_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, accuracy_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_force_applied",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, max_force_applied),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, grasp_quality),  // bytes offset in struct
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
    offsetof(day2__action__PickAndPlace_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_details",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Result, error_details),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_Result",  // message name
  15,  // number of fields
  sizeof(day2__action__PickAndPlace_Result),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_member_array,  // message members
  day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_Result__get_type_hash,
  &day2__action__PickAndPlace_Result__get_type_description,
  &day2__action__PickAndPlace_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_Result)() {
  day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `current_phase`
// Member `current_behavior`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `gripper_position`
// Member `object_position`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `gripper_position`
// Member `object_position`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `force_torque_readings`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `current_velocity`
#include "geometry_msgs/msg/twist.h"
// Member `current_velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `phase_start_time`
#include "builtin_interfaces/msg/time.h"
// Member `phase_start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_Feedback__init(message_memory);
}

void day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_Feedback__fini(message_memory);
}

size_t day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__size_function__PickAndPlace_Feedback__force_torque_readings(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_Feedback__force_torque_readings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__get_function__PickAndPlace_Feedback__force_torque_readings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_Feedback__force_torque_readings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_Feedback__force_torque_readings(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_Feedback__force_torque_readings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__get_function__PickAndPlace_Feedback__force_torque_readings(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_Feedback__force_torque_readings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array[17] = {
  {
    "current_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, current_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "completion_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, completion_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, gripper_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, object_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, object_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_in_grasp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, object_in_grasp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_grasp_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, current_grasp_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transport_progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, transport_progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_torque_readings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, force_torque_readings),  // bytes offset in struct
    NULL,  // default value
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__size_function__PickAndPlace_Feedback__force_torque_readings,  // size() function pointer
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_Feedback__force_torque_readings,  // get_const(index) function pointer
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__get_function__PickAndPlace_Feedback__force_torque_readings,  // get(index) function pointer
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_Feedback__force_torque_readings,  // fetch(index, &value) function pointer
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_Feedback__force_torque_readings,  // assign(index, value) function pointer
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_Feedback__force_torque_readings  // resize(index) function pointer
  },
  {
    "collision_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, collision_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_time_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, estimated_time_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, current_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, current_behavior),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_moving",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, is_moving),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_stability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, grasp_stability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_deviation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, path_deviation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phase_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_Feedback, phase_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_Feedback",  // message name
  17,  // number of fields
  sizeof(day2__action__PickAndPlace_Feedback),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array,  // message members
  day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_Feedback__get_type_hash,
  &day2__action__PickAndPlace_Feedback__get_type_description,
  &day2__action__PickAndPlace_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_Feedback)() {
  day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "day2/action/pick_and_place.h"
// Member `goal`
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_SendGoal_Request__init(message_memory);
}

void day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(day2__action__PickAndPlace_SendGoal_Request),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array,  // message members
  day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_SendGoal_Request__get_type_hash,
  &day2__action__PickAndPlace_SendGoal_Request__get_type_description,
  &day2__action__PickAndPlace_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Request)() {
  day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_Goal)();
  if (!day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/time.h"
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_SendGoal_Response__init(message_memory);
}

void day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__PickAndPlace_SendGoal_Response),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_member_array,  // message members
  day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_SendGoal_Response__get_type_hash,
  &day2__action__PickAndPlace_SendGoal_Response__get_type_description,
  &day2__action__PickAndPlace_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Response)() {
  day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/pick_and_place.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_SendGoal_Event__init(message_memory);
}

void day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_SendGoal_Event__fini(message_memory);
}

size_t day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_SendGoal_Event__request(
  const void * untyped_member)
{
  const day2__action__PickAndPlace_SendGoal_Request__Sequence * member =
    (const day2__action__PickAndPlace_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__PickAndPlace_SendGoal_Request__Sequence * member =
    (const day2__action__PickAndPlace_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__PickAndPlace_SendGoal_Request__Sequence * member =
    (day2__action__PickAndPlace_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__PickAndPlace_SendGoal_Request * item =
    ((const day2__action__PickAndPlace_SendGoal_Request *)
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_SendGoal_Event__request(untyped_member, index));
  day2__action__PickAndPlace_SendGoal_Request * value =
    (day2__action__PickAndPlace_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__PickAndPlace_SendGoal_Request * item =
    ((day2__action__PickAndPlace_SendGoal_Request *)
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_SendGoal_Event__request(untyped_member, index));
  const day2__action__PickAndPlace_SendGoal_Request * value =
    (const day2__action__PickAndPlace_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__PickAndPlace_SendGoal_Request__Sequence * member =
    (day2__action__PickAndPlace_SendGoal_Request__Sequence *)(untyped_member);
  day2__action__PickAndPlace_SendGoal_Request__Sequence__fini(member);
  return day2__action__PickAndPlace_SendGoal_Request__Sequence__init(member, size);
}

size_t day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_SendGoal_Event__response(
  const void * untyped_member)
{
  const day2__action__PickAndPlace_SendGoal_Response__Sequence * member =
    (const day2__action__PickAndPlace_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__PickAndPlace_SendGoal_Response__Sequence * member =
    (const day2__action__PickAndPlace_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__PickAndPlace_SendGoal_Response__Sequence * member =
    (day2__action__PickAndPlace_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__PickAndPlace_SendGoal_Response * item =
    ((const day2__action__PickAndPlace_SendGoal_Response *)
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_SendGoal_Event__response(untyped_member, index));
  day2__action__PickAndPlace_SendGoal_Response * value =
    (day2__action__PickAndPlace_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__PickAndPlace_SendGoal_Response * item =
    ((day2__action__PickAndPlace_SendGoal_Response *)
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_SendGoal_Event__response(untyped_member, index));
  const day2__action__PickAndPlace_SendGoal_Response * value =
    (const day2__action__PickAndPlace_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__PickAndPlace_SendGoal_Response__Sequence * member =
    (day2__action__PickAndPlace_SendGoal_Response__Sequence *)(untyped_member);
  day2__action__PickAndPlace_SendGoal_Response__Sequence__fini(member);
  return day2__action__PickAndPlace_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__PickAndPlace_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_SendGoal_Event__request,  // size() function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_SendGoal_Event__request,  // get_const(index) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_SendGoal_Event__request,  // get(index) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_SendGoal_Event__request,  // fetch(index, &value) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_SendGoal_Event__request,  // assign(index, value) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__PickAndPlace_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_SendGoal_Event__response,  // size() function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_SendGoal_Event__response,  // get_const(index) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_SendGoal_Event__response,  // get(index) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_SendGoal_Event__response,  // fetch(index, &value) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_SendGoal_Event__response,  // assign(index, value) function pointer
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__PickAndPlace_SendGoal_Event),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_member_array,  // message members
  day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_SendGoal_Event__get_type_hash,
  &day2__action__PickAndPlace_SendGoal_Event__get_type_description,
  &day2__action__PickAndPlace_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Event)() {
  day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Request)();
  day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Response)();
  if (!day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_members = {
  "day2__action",  // service namespace
  "PickAndPlace_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle = {
  0,
  &day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &day2__action__PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle,
  &day2__action__PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle,
  &day2__action__PickAndPlace_SendGoal_Event__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    PickAndPlace_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    PickAndPlace_SendGoal
  ),
  &day2__action__PickAndPlace_SendGoal__get_type_hash,
  &day2__action__PickAndPlace_SendGoal__get_type_description,
  &day2__action__PickAndPlace_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal)(void) {
  if (!day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_SendGoal_Event)()->data;
  }

  return &day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_GetResult_Request__init(message_memory);
}

void day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(day2__action__PickAndPlace_GetResult_Request),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_member_array,  // message members
  day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_GetResult_Request__get_type_hash,
  &day2__action__PickAndPlace_GetResult_Request__get_type_description,
  &day2__action__PickAndPlace_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Request)() {
  day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "day2/action/pick_and_place.h"
// Member `result`
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_GetResult_Response__init(message_memory);
}

void day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__PickAndPlace_GetResult_Response),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_member_array,  // message members
  day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_GetResult_Response__get_type_hash,
  &day2__action__PickAndPlace_GetResult_Response__get_type_description,
  &day2__action__PickAndPlace_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Response)() {
  day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_Result)();
  if (!day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/pick_and_place.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_GetResult_Event__init(message_memory);
}

void day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_GetResult_Event__fini(message_memory);
}

size_t day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_GetResult_Event__request(
  const void * untyped_member)
{
  const day2__action__PickAndPlace_GetResult_Request__Sequence * member =
    (const day2__action__PickAndPlace_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__PickAndPlace_GetResult_Request__Sequence * member =
    (const day2__action__PickAndPlace_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__PickAndPlace_GetResult_Request__Sequence * member =
    (day2__action__PickAndPlace_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__PickAndPlace_GetResult_Request * item =
    ((const day2__action__PickAndPlace_GetResult_Request *)
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_GetResult_Event__request(untyped_member, index));
  day2__action__PickAndPlace_GetResult_Request * value =
    (day2__action__PickAndPlace_GetResult_Request *)(untyped_value);
  *value = *item;
}

void day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__PickAndPlace_GetResult_Request * item =
    ((day2__action__PickAndPlace_GetResult_Request *)
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_GetResult_Event__request(untyped_member, index));
  const day2__action__PickAndPlace_GetResult_Request * value =
    (const day2__action__PickAndPlace_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__PickAndPlace_GetResult_Request__Sequence * member =
    (day2__action__PickAndPlace_GetResult_Request__Sequence *)(untyped_member);
  day2__action__PickAndPlace_GetResult_Request__Sequence__fini(member);
  return day2__action__PickAndPlace_GetResult_Request__Sequence__init(member, size);
}

size_t day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_GetResult_Event__response(
  const void * untyped_member)
{
  const day2__action__PickAndPlace_GetResult_Response__Sequence * member =
    (const day2__action__PickAndPlace_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__PickAndPlace_GetResult_Response__Sequence * member =
    (const day2__action__PickAndPlace_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__PickAndPlace_GetResult_Response__Sequence * member =
    (day2__action__PickAndPlace_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__PickAndPlace_GetResult_Response * item =
    ((const day2__action__PickAndPlace_GetResult_Response *)
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_GetResult_Event__response(untyped_member, index));
  day2__action__PickAndPlace_GetResult_Response * value =
    (day2__action__PickAndPlace_GetResult_Response *)(untyped_value);
  *value = *item;
}

void day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__PickAndPlace_GetResult_Response * item =
    ((day2__action__PickAndPlace_GetResult_Response *)
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_GetResult_Event__response(untyped_member, index));
  const day2__action__PickAndPlace_GetResult_Response * value =
    (const day2__action__PickAndPlace_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__PickAndPlace_GetResult_Response__Sequence * member =
    (day2__action__PickAndPlace_GetResult_Response__Sequence *)(untyped_member);
  day2__action__PickAndPlace_GetResult_Response__Sequence__fini(member);
  return day2__action__PickAndPlace_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__PickAndPlace_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_GetResult_Event__request,  // size() function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_GetResult_Event__request,  // get_const(index) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_GetResult_Event__request,  // get(index) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_GetResult_Event__request,  // fetch(index, &value) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_GetResult_Event__request,  // assign(index, value) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__PickAndPlace_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PickAndPlace_GetResult_Event__response,  // size() function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PickAndPlace_GetResult_Event__response,  // get_const(index) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PickAndPlace_GetResult_Event__response,  // get(index) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PickAndPlace_GetResult_Event__response,  // fetch(index, &value) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PickAndPlace_GetResult_Event__response,  // assign(index, value) function pointer
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PickAndPlace_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__PickAndPlace_GetResult_Event),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_member_array,  // message members
  day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_GetResult_Event__get_type_hash,
  &day2__action__PickAndPlace_GetResult_Event__get_type_description,
  &day2__action__PickAndPlace_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Event)() {
  day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Request)();
  day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Response)();
  if (!day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_members = {
  "day2__action",  // service namespace
  "PickAndPlace_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle = {
  0,
  &day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_members,
  get_service_typesupport_handle_function,
  &day2__action__PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle,
  &day2__action__PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle,
  &day2__action__PickAndPlace_GetResult_Event__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    PickAndPlace_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    PickAndPlace_GetResult
  ),
  &day2__action__PickAndPlace_GetResult__get_type_hash,
  &day2__action__PickAndPlace_GetResult__get_type_description,
  &day2__action__PickAndPlace_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult)(void) {
  if (!day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_GetResult_Event)()->data;
  }

  return &day2__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/pick_and_place__functions.h"
// already included above
// #include "day2/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "day2/action/pick_and_place.h"
// Member `feedback`
// already included above
// #include "day2/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__PickAndPlace_FeedbackMessage__init(message_memory);
}

void day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_fini_function(void * message_memory)
{
  day2__action__PickAndPlace_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__PickAndPlace_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_members = {
  "day2__action",  // message namespace
  "PickAndPlace_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(day2__action__PickAndPlace_FeedbackMessage),
  false,  // has_any_key_member_
  day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array,  // message members
  day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle = {
  0,
  &day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &day2__action__PickAndPlace_FeedbackMessage__get_type_hash,
  &day2__action__PickAndPlace_FeedbackMessage__get_type_description,
  &day2__action__PickAndPlace_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_FeedbackMessage)() {
  day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, PickAndPlace_Feedback)();
  if (!day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
