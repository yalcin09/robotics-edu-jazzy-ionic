// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:action/ChargeBattery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/action/detail/charge_battery__functions.h"
#include "day2/action/detail/charge_battery__struct.h"


// Include directives for member types
// Member `charging_mode`
// Member `docking_approach`
#include "rosidl_runtime_c/string_functions.h"
// Member `charging_station_location`
#include "geometry_msgs/msg/point.h"
// Member `charging_station_location`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_Goal__init(message_memory);
}

void day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_member_array[16] = {
  {
    "target_charge_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, target_charge_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, charging_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "return_to_dock",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, return_to_dock),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_station_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, charging_station_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_charging_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, max_charging_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_charging_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, max_charging_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_charging_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, max_charging_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_temperature_monitoring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, enable_temperature_monitoring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_battery_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, max_battery_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_safety_monitoring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, enable_safety_monitoring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stop_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, emergency_stop_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stop_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, emergency_stop_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_disconnect_when_full",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, auto_disconnect_when_full),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navigate_to_charger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, navigate_to_charger),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_precision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, docking_precision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Goal, docking_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_Goal",  // message name
  16,  // number of fields
  sizeof(day2__action__ChargeBattery_Goal),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_member_array,  // message members
  day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_Goal__get_type_hash,
  &day2__action__ChargeBattery_Goal__get_type_description,
  &day2__action__ChargeBattery_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Goal)() {
  day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_Goal__rosidl_typesupport_introspection_c__ChargeBattery_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


// Include directives for member types
// Member `result_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `final_docked_position`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `final_docked_position`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_Result__init(message_memory);
}

void day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_member_array[16] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, success),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_Result, result_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_charge_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, final_charge_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_charging_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, total_charging_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "energy_transferred",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, energy_transferred),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_charging_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, average_charging_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_efficiency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, charging_efficiency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_temperature_reached",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, max_temperature_reached),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_health_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, battery_health_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_cycles_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, charging_cycles_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_battery_lifespan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, estimated_battery_lifespan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_successful",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, docking_successful),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, docking_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navigation_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, navigation_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_docked_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Result, final_docked_position),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_Result",  // message name
  16,  // number of fields
  sizeof(day2__action__ChargeBattery_Result),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_member_array,  // message members
  day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_Result__get_type_hash,
  &day2__action__ChargeBattery_Result__get_type_description,
  &day2__action__ChargeBattery_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Result)() {
  day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_Result__rosidl_typesupport_introspection_c__ChargeBattery_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


// Include directives for member types
// Member `current_phase`
// Member `charging_state`
// Member `active_warnings`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `current_position`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `current_position`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `charging_start_time`
#include "builtin_interfaces/msg/time.h"
// Member `charging_start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_Feedback__init(message_memory);
}

void day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_Feedback__fini(message_memory);
}

size_t day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__size_function__ChargeBattery_Feedback__active_warnings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_Feedback__active_warnings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__get_function__ChargeBattery_Feedback__active_warnings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_Feedback__active_warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_Feedback__active_warnings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_Feedback__active_warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__get_function__ChargeBattery_Feedback__active_warnings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_Feedback__active_warnings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_member_array[24] = {
  {
    "current_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_charge_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_charge_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_progress_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, charging_progress_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_time_to_completion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, estimated_time_to_completion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_amperage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_amperage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, charging_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, charging_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_elapsed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, time_elapsed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_charger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, distance_to_charger),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charger_in_sight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, charger_in_sight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_initiated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, docking_initiated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_alignment_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, docking_alignment_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connection_established",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, connection_established),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, temperature_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, voltage_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, current_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_warnings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, active_warnings),  // bytes offset in struct
    NULL,  // default value
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__size_function__ChargeBattery_Feedback__active_warnings,  // size() function pointer
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_Feedback__active_warnings,  // get_const(index) function pointer
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__get_function__ChargeBattery_Feedback__active_warnings,  // get(index) function pointer
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_Feedback__active_warnings,  // fetch(index, &value) function pointer
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_Feedback__active_warnings,  // assign(index, value) function pointer
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_Feedback__active_warnings  // resize(index) function pointer
  },
  {
    "charger_efficiency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, charger_efficiency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charger_connected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, charger_connected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_Feedback, charging_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_Feedback",  // message name
  24,  // number of fields
  sizeof(day2__action__ChargeBattery_Feedback),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_member_array,  // message members
  day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_Feedback__get_type_hash,
  &day2__action__ChargeBattery_Feedback__get_type_description,
  &day2__action__ChargeBattery_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Feedback)() {
  day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_Feedback__rosidl_typesupport_introspection_c__ChargeBattery_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "day2/action/charge_battery.h"
// Member `goal`
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_SendGoal_Request__init(message_memory);
}

void day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(day2__action__ChargeBattery_SendGoal_Request),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_member_array,  // message members
  day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_SendGoal_Request__get_type_hash,
  &day2__action__ChargeBattery_SendGoal_Request__get_type_description,
  &day2__action__ChargeBattery_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Request)() {
  day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Goal)();
  if (!day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


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

void day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_SendGoal_Response__init(message_memory);
}

void day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__ChargeBattery_SendGoal_Response),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_member_array,  // message members
  day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_SendGoal_Response__get_type_hash,
  &day2__action__ChargeBattery_SendGoal_Response__get_type_description,
  &day2__action__ChargeBattery_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Response)() {
  day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/charge_battery.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_SendGoal_Event__init(message_memory);
}

void day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_SendGoal_Event__fini(message_memory);
}

size_t day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_SendGoal_Event__request(
  const void * untyped_member)
{
  const day2__action__ChargeBattery_SendGoal_Request__Sequence * member =
    (const day2__action__ChargeBattery_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__ChargeBattery_SendGoal_Request__Sequence * member =
    (const day2__action__ChargeBattery_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__ChargeBattery_SendGoal_Request__Sequence * member =
    (day2__action__ChargeBattery_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__ChargeBattery_SendGoal_Request * item =
    ((const day2__action__ChargeBattery_SendGoal_Request *)
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_SendGoal_Event__request(untyped_member, index));
  day2__action__ChargeBattery_SendGoal_Request * value =
    (day2__action__ChargeBattery_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__ChargeBattery_SendGoal_Request * item =
    ((day2__action__ChargeBattery_SendGoal_Request *)
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_SendGoal_Event__request(untyped_member, index));
  const day2__action__ChargeBattery_SendGoal_Request * value =
    (const day2__action__ChargeBattery_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__ChargeBattery_SendGoal_Request__Sequence * member =
    (day2__action__ChargeBattery_SendGoal_Request__Sequence *)(untyped_member);
  day2__action__ChargeBattery_SendGoal_Request__Sequence__fini(member);
  return day2__action__ChargeBattery_SendGoal_Request__Sequence__init(member, size);
}

size_t day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_SendGoal_Event__response(
  const void * untyped_member)
{
  const day2__action__ChargeBattery_SendGoal_Response__Sequence * member =
    (const day2__action__ChargeBattery_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__ChargeBattery_SendGoal_Response__Sequence * member =
    (const day2__action__ChargeBattery_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__ChargeBattery_SendGoal_Response__Sequence * member =
    (day2__action__ChargeBattery_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__ChargeBattery_SendGoal_Response * item =
    ((const day2__action__ChargeBattery_SendGoal_Response *)
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_SendGoal_Event__response(untyped_member, index));
  day2__action__ChargeBattery_SendGoal_Response * value =
    (day2__action__ChargeBattery_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__ChargeBattery_SendGoal_Response * item =
    ((day2__action__ChargeBattery_SendGoal_Response *)
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_SendGoal_Event__response(untyped_member, index));
  const day2__action__ChargeBattery_SendGoal_Response * value =
    (const day2__action__ChargeBattery_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__ChargeBattery_SendGoal_Response__Sequence * member =
    (day2__action__ChargeBattery_SendGoal_Response__Sequence *)(untyped_member);
  day2__action__ChargeBattery_SendGoal_Response__Sequence__fini(member);
  return day2__action__ChargeBattery_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_SendGoal_Event__request,  // size() function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_SendGoal_Event__request,  // get_const(index) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_SendGoal_Event__request,  // get(index) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_SendGoal_Event__request,  // fetch(index, &value) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_SendGoal_Event__request,  // assign(index, value) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__ChargeBattery_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_SendGoal_Event__response,  // size() function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_SendGoal_Event__response,  // get_const(index) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_SendGoal_Event__response,  // get(index) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_SendGoal_Event__response,  // fetch(index, &value) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_SendGoal_Event__response,  // assign(index, value) function pointer
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__ChargeBattery_SendGoal_Event),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_member_array,  // message members
  day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_SendGoal_Event__get_type_hash,
  &day2__action__ChargeBattery_SendGoal_Event__get_type_description,
  &day2__action__ChargeBattery_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Event)() {
  day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Request)();
  day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Response)();
  if (!day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_service_members = {
  "day2__action",  // service namespace
  "ChargeBattery_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_service_type_support_handle = {
  0,
  &day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &day2__action__ChargeBattery_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Request_message_type_support_handle,
  &day2__action__ChargeBattery_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Response_message_type_support_handle,
  &day2__action__ChargeBattery_SendGoal_Event__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    ChargeBattery_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    ChargeBattery_SendGoal
  ),
  &day2__action__ChargeBattery_SendGoal__get_type_hash,
  &day2__action__ChargeBattery_SendGoal__get_type_description,
  &day2__action__ChargeBattery_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal)(void) {
  if (!day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Event)()->data;
  }

  return &day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


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

void day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_GetResult_Request__init(message_memory);
}

void day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(day2__action__ChargeBattery_GetResult_Request),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_member_array,  // message members
  day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_GetResult_Request__get_type_hash,
  &day2__action__ChargeBattery_GetResult_Request__get_type_description,
  &day2__action__ChargeBattery_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Request)() {
  day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "day2/action/charge_battery.h"
// Member `result`
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_GetResult_Response__init(message_memory);
}

void day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__ChargeBattery_GetResult_Response),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_member_array,  // message members
  day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_GetResult_Response__get_type_hash,
  &day2__action__ChargeBattery_GetResult_Response__get_type_description,
  &day2__action__ChargeBattery_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Response)() {
  day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Result)();
  if (!day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


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
// #include "day2/action/charge_battery.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_GetResult_Event__init(message_memory);
}

void day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_GetResult_Event__fini(message_memory);
}

size_t day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_GetResult_Event__request(
  const void * untyped_member)
{
  const day2__action__ChargeBattery_GetResult_Request__Sequence * member =
    (const day2__action__ChargeBattery_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__ChargeBattery_GetResult_Request__Sequence * member =
    (const day2__action__ChargeBattery_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__ChargeBattery_GetResult_Request__Sequence * member =
    (day2__action__ChargeBattery_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__ChargeBattery_GetResult_Request * item =
    ((const day2__action__ChargeBattery_GetResult_Request *)
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_GetResult_Event__request(untyped_member, index));
  day2__action__ChargeBattery_GetResult_Request * value =
    (day2__action__ChargeBattery_GetResult_Request *)(untyped_value);
  *value = *item;
}

void day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__ChargeBattery_GetResult_Request * item =
    ((day2__action__ChargeBattery_GetResult_Request *)
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_GetResult_Event__request(untyped_member, index));
  const day2__action__ChargeBattery_GetResult_Request * value =
    (const day2__action__ChargeBattery_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__ChargeBattery_GetResult_Request__Sequence * member =
    (day2__action__ChargeBattery_GetResult_Request__Sequence *)(untyped_member);
  day2__action__ChargeBattery_GetResult_Request__Sequence__fini(member);
  return day2__action__ChargeBattery_GetResult_Request__Sequence__init(member, size);
}

size_t day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_GetResult_Event__response(
  const void * untyped_member)
{
  const day2__action__ChargeBattery_GetResult_Response__Sequence * member =
    (const day2__action__ChargeBattery_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__ChargeBattery_GetResult_Response__Sequence * member =
    (const day2__action__ChargeBattery_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__ChargeBattery_GetResult_Response__Sequence * member =
    (day2__action__ChargeBattery_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__ChargeBattery_GetResult_Response * item =
    ((const day2__action__ChargeBattery_GetResult_Response *)
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_GetResult_Event__response(untyped_member, index));
  day2__action__ChargeBattery_GetResult_Response * value =
    (day2__action__ChargeBattery_GetResult_Response *)(untyped_value);
  *value = *item;
}

void day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__ChargeBattery_GetResult_Response * item =
    ((day2__action__ChargeBattery_GetResult_Response *)
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_GetResult_Event__response(untyped_member, index));
  const day2__action__ChargeBattery_GetResult_Response * value =
    (const day2__action__ChargeBattery_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__ChargeBattery_GetResult_Response__Sequence * member =
    (day2__action__ChargeBattery_GetResult_Response__Sequence *)(untyped_member);
  day2__action__ChargeBattery_GetResult_Response__Sequence__fini(member);
  return day2__action__ChargeBattery_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_GetResult_Event__request,  // size() function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_GetResult_Event__request,  // get_const(index) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_GetResult_Event__request,  // get(index) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_GetResult_Event__request,  // fetch(index, &value) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_GetResult_Event__request,  // assign(index, value) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__ChargeBattery_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ChargeBattery_GetResult_Event__response,  // size() function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ChargeBattery_GetResult_Event__response,  // get_const(index) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ChargeBattery_GetResult_Event__response,  // get(index) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ChargeBattery_GetResult_Event__response,  // fetch(index, &value) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ChargeBattery_GetResult_Event__response,  // assign(index, value) function pointer
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ChargeBattery_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__ChargeBattery_GetResult_Event),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_member_array,  // message members
  day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_GetResult_Event__get_type_hash,
  &day2__action__ChargeBattery_GetResult_Event__get_type_description,
  &day2__action__ChargeBattery_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Event)() {
  day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Request)();
  day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Response)();
  if (!day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_service_members = {
  "day2__action",  // service namespace
  "ChargeBattery_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_service_type_support_handle = {
  0,
  &day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_service_members,
  get_service_typesupport_handle_function,
  &day2__action__ChargeBattery_GetResult_Request__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Request_message_type_support_handle,
  &day2__action__ChargeBattery_GetResult_Response__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Response_message_type_support_handle,
  &day2__action__ChargeBattery_GetResult_Event__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    ChargeBattery_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    ChargeBattery_GetResult
  ),
  &day2__action__ChargeBattery_GetResult__get_type_hash,
  &day2__action__ChargeBattery_GetResult__get_type_description,
  &day2__action__ChargeBattery_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult)(void) {
  if (!day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Event)()->data;
  }

  return &day2__action__detail__charge_battery__rosidl_typesupport_introspection_c__ChargeBattery_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "day2/action/charge_battery.h"
// Member `feedback`
// already included above
// #include "day2/action/detail/charge_battery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__ChargeBattery_FeedbackMessage__init(message_memory);
}

void day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_fini_function(void * message_memory)
{
  day2__action__ChargeBattery_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__ChargeBattery_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(day2__action__ChargeBattery_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_members = {
  "day2__action",  // message namespace
  "ChargeBattery_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(day2__action__ChargeBattery_FeedbackMessage),
  false,  // has_any_key_member_
  day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_member_array,  // message members
  day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_type_support_handle = {
  0,
  &day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_FeedbackMessage__get_type_hash,
  &day2__action__ChargeBattery_FeedbackMessage__get_type_description,
  &day2__action__ChargeBattery_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_FeedbackMessage)() {
  day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Feedback)();
  if (!day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__ChargeBattery_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeBattery_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
