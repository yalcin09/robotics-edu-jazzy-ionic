// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from day2:action/ChargeBattery.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "day2/action/detail/charge_battery__struct.h"
#include "day2/action/detail/charge_battery__type_support.h"
#include "day2/action/detail/charge_battery__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_Goal_type_support_ids_t;

static const _ChargeBattery_Goal_type_support_ids_t _ChargeBattery_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_Goal_type_support_symbol_names_t _ChargeBattery_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Goal)),
  }
};

typedef struct _ChargeBattery_Goal_type_support_data_t
{
  void * data[2];
} _ChargeBattery_Goal_type_support_data_t;

static _ChargeBattery_Goal_type_support_data_t _ChargeBattery_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_Goal_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_Goal__get_type_hash,
  &day2__action__ChargeBattery_Goal__get_type_description,
  &day2__action__ChargeBattery_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_Goal)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_Result_type_support_ids_t;

static const _ChargeBattery_Result_type_support_ids_t _ChargeBattery_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_Result_type_support_symbol_names_t _ChargeBattery_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Result)),
  }
};

typedef struct _ChargeBattery_Result_type_support_data_t
{
  void * data[2];
} _ChargeBattery_Result_type_support_data_t;

static _ChargeBattery_Result_type_support_data_t _ChargeBattery_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_Result_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_Result__get_type_hash,
  &day2__action__ChargeBattery_Result__get_type_description,
  &day2__action__ChargeBattery_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_Result)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_Feedback_type_support_ids_t;

static const _ChargeBattery_Feedback_type_support_ids_t _ChargeBattery_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_Feedback_type_support_symbol_names_t _ChargeBattery_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_Feedback)),
  }
};

typedef struct _ChargeBattery_Feedback_type_support_data_t
{
  void * data[2];
} _ChargeBattery_Feedback_type_support_data_t;

static _ChargeBattery_Feedback_type_support_data_t _ChargeBattery_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_Feedback_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_Feedback__get_type_hash,
  &day2__action__ChargeBattery_Feedback__get_type_description,
  &day2__action__ChargeBattery_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_Feedback)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_SendGoal_Request_type_support_ids_t;

static const _ChargeBattery_SendGoal_Request_type_support_ids_t _ChargeBattery_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_SendGoal_Request_type_support_symbol_names_t _ChargeBattery_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Request)),
  }
};

typedef struct _ChargeBattery_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ChargeBattery_SendGoal_Request_type_support_data_t;

static _ChargeBattery_SendGoal_Request_type_support_data_t _ChargeBattery_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_SendGoal_Request_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_SendGoal_Request__get_type_hash,
  &day2__action__ChargeBattery_SendGoal_Request__get_type_description,
  &day2__action__ChargeBattery_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_SendGoal_Request)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_SendGoal_Response_type_support_ids_t;

static const _ChargeBattery_SendGoal_Response_type_support_ids_t _ChargeBattery_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_SendGoal_Response_type_support_symbol_names_t _ChargeBattery_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Response)),
  }
};

typedef struct _ChargeBattery_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ChargeBattery_SendGoal_Response_type_support_data_t;

static _ChargeBattery_SendGoal_Response_type_support_data_t _ChargeBattery_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_SendGoal_Response_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_SendGoal_Response__get_type_hash,
  &day2__action__ChargeBattery_SendGoal_Response__get_type_description,
  &day2__action__ChargeBattery_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_SendGoal_Response)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_SendGoal_Event_type_support_ids_t;

static const _ChargeBattery_SendGoal_Event_type_support_ids_t _ChargeBattery_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_SendGoal_Event_type_support_symbol_names_t _ChargeBattery_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal_Event)),
  }
};

typedef struct _ChargeBattery_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ChargeBattery_SendGoal_Event_type_support_data_t;

static _ChargeBattery_SendGoal_Event_type_support_data_t _ChargeBattery_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_SendGoal_Event_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_SendGoal_Event__get_type_hash,
  &day2__action__ChargeBattery_SendGoal_Event__get_type_description,
  &day2__action__ChargeBattery_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_SendGoal_Event)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ChargeBattery_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_SendGoal_type_support_ids_t;

static const _ChargeBattery_SendGoal_type_support_ids_t _ChargeBattery_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_SendGoal_type_support_symbol_names_t _ChargeBattery_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_SendGoal)),
  }
};

typedef struct _ChargeBattery_SendGoal_type_support_data_t
{
  void * data[2];
} _ChargeBattery_SendGoal_type_support_data_t;

static _ChargeBattery_SendGoal_type_support_data_t _ChargeBattery_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_SendGoal_service_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ChargeBattery_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ChargeBattery_SendGoal_Request_message_type_support_handle,
  &ChargeBattery_SendGoal_Response_message_type_support_handle,
  &ChargeBattery_SendGoal_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_SendGoal)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_GetResult_Request_type_support_ids_t;

static const _ChargeBattery_GetResult_Request_type_support_ids_t _ChargeBattery_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_GetResult_Request_type_support_symbol_names_t _ChargeBattery_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Request)),
  }
};

typedef struct _ChargeBattery_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ChargeBattery_GetResult_Request_type_support_data_t;

static _ChargeBattery_GetResult_Request_type_support_data_t _ChargeBattery_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_GetResult_Request_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_GetResult_Request__get_type_hash,
  &day2__action__ChargeBattery_GetResult_Request__get_type_description,
  &day2__action__ChargeBattery_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_GetResult_Request)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_GetResult_Response_type_support_ids_t;

static const _ChargeBattery_GetResult_Response_type_support_ids_t _ChargeBattery_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_GetResult_Response_type_support_symbol_names_t _ChargeBattery_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Response)),
  }
};

typedef struct _ChargeBattery_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ChargeBattery_GetResult_Response_type_support_data_t;

static _ChargeBattery_GetResult_Response_type_support_data_t _ChargeBattery_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_GetResult_Response_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_GetResult_Response__get_type_hash,
  &day2__action__ChargeBattery_GetResult_Response__get_type_description,
  &day2__action__ChargeBattery_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_GetResult_Response)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_GetResult_Event_type_support_ids_t;

static const _ChargeBattery_GetResult_Event_type_support_ids_t _ChargeBattery_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_GetResult_Event_type_support_symbol_names_t _ChargeBattery_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult_Event)),
  }
};

typedef struct _ChargeBattery_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ChargeBattery_GetResult_Event_type_support_data_t;

static _ChargeBattery_GetResult_Event_type_support_data_t _ChargeBattery_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_GetResult_Event_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_GetResult_Event__get_type_hash,
  &day2__action__ChargeBattery_GetResult_Event__get_type_description,
  &day2__action__ChargeBattery_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_GetResult_Event)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ChargeBattery_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_GetResult_type_support_ids_t;

static const _ChargeBattery_GetResult_type_support_ids_t _ChargeBattery_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_GetResult_type_support_symbol_names_t _ChargeBattery_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_GetResult)),
  }
};

typedef struct _ChargeBattery_GetResult_type_support_data_t
{
  void * data[2];
} _ChargeBattery_GetResult_type_support_data_t;

static _ChargeBattery_GetResult_type_support_data_t _ChargeBattery_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_GetResult_service_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ChargeBattery_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ChargeBattery_GetResult_Request_message_type_support_handle,
  &ChargeBattery_GetResult_Response_message_type_support_handle,
  &ChargeBattery_GetResult_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_GetResult)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ChargeBattery_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChargeBattery_FeedbackMessage_type_support_ids_t;

static const _ChargeBattery_FeedbackMessage_type_support_ids_t _ChargeBattery_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChargeBattery_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChargeBattery_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChargeBattery_FeedbackMessage_type_support_symbol_names_t _ChargeBattery_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, action, ChargeBattery_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, ChargeBattery_FeedbackMessage)),
  }
};

typedef struct _ChargeBattery_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ChargeBattery_FeedbackMessage_type_support_data_t;

static _ChargeBattery_FeedbackMessage_type_support_data_t _ChargeBattery_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChargeBattery_FeedbackMessage_message_typesupport_map = {
  2,
  "day2",
  &_ChargeBattery_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ChargeBattery_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ChargeBattery_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChargeBattery_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChargeBattery_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__action__ChargeBattery_FeedbackMessage__get_type_hash,
  &day2__action__ChargeBattery_FeedbackMessage__get_type_description,
  &day2__action__ChargeBattery_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, action, ChargeBattery_FeedbackMessage)() {
  return &::day2::action::rosidl_typesupport_c::ChargeBattery_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "day2/action/charge_battery.h"
// already included above
// #include "day2/action/detail/charge_battery__type_support.h"

static rosidl_action_type_support_t _day2__action__ChargeBattery__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &day2__action__ChargeBattery__get_type_hash,
  &day2__action__ChargeBattery__get_type_description,
  &day2__action__ChargeBattery__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, day2, action, ChargeBattery)()
{
  // Thread-safe by always writing the same values to the static struct
  _day2__action__ChargeBattery__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, day2, action, ChargeBattery_SendGoal)();
  _day2__action__ChargeBattery__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, day2, action, ChargeBattery_GetResult)();
  _day2__action__ChargeBattery__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _day2__action__ChargeBattery__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, day2, action, ChargeBattery_FeedbackMessage)();
  _day2__action__ChargeBattery__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_day2__action__ChargeBattery__typesupport_c;
}

#ifdef __cplusplus
}
#endif
