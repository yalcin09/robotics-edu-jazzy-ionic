// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from day2:action/MapArea.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "day2/action/detail/map_area__functions.h"
#include "day2/action/detail/map_area__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_Goal_type_support_ids_t;

static const _MapArea_Goal_type_support_ids_t _MapArea_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_Goal_type_support_symbol_names_t _MapArea_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_Goal)),
  }
};

typedef struct _MapArea_Goal_type_support_data_t
{
  void * data[2];
} _MapArea_Goal_type_support_data_t;

static _MapArea_Goal_type_support_data_t _MapArea_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_Goal_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_Goal__get_type_hash,
  &day2__action__MapArea_Goal__get_type_description,
  &day2__action__MapArea_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_Goal>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_Goal)() {
  return get_message_type_support_handle<day2::action::MapArea_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_Result_type_support_ids_t;

static const _MapArea_Result_type_support_ids_t _MapArea_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_Result_type_support_symbol_names_t _MapArea_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_Result)),
  }
};

typedef struct _MapArea_Result_type_support_data_t
{
  void * data[2];
} _MapArea_Result_type_support_data_t;

static _MapArea_Result_type_support_data_t _MapArea_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_Result_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_Result__get_type_hash,
  &day2__action__MapArea_Result__get_type_description,
  &day2__action__MapArea_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_Result>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_Result)() {
  return get_message_type_support_handle<day2::action::MapArea_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_Feedback_type_support_ids_t;

static const _MapArea_Feedback_type_support_ids_t _MapArea_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_Feedback_type_support_symbol_names_t _MapArea_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_Feedback)),
  }
};

typedef struct _MapArea_Feedback_type_support_data_t
{
  void * data[2];
} _MapArea_Feedback_type_support_data_t;

static _MapArea_Feedback_type_support_data_t _MapArea_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_Feedback_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_Feedback__get_type_hash,
  &day2__action__MapArea_Feedback__get_type_description,
  &day2__action__MapArea_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_Feedback>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_Feedback)() {
  return get_message_type_support_handle<day2::action::MapArea_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_SendGoal_Request_type_support_ids_t;

static const _MapArea_SendGoal_Request_type_support_ids_t _MapArea_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_SendGoal_Request_type_support_symbol_names_t _MapArea_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_SendGoal_Request)),
  }
};

typedef struct _MapArea_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MapArea_SendGoal_Request_type_support_data_t;

static _MapArea_SendGoal_Request_type_support_data_t _MapArea_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_SendGoal_Request_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_SendGoal_Request__get_type_hash,
  &day2__action__MapArea_SendGoal_Request__get_type_description,
  &day2__action__MapArea_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_SendGoal_Request>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_SendGoal_Request)() {
  return get_message_type_support_handle<day2::action::MapArea_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_SendGoal_Response_type_support_ids_t;

static const _MapArea_SendGoal_Response_type_support_ids_t _MapArea_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_SendGoal_Response_type_support_symbol_names_t _MapArea_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_SendGoal_Response)),
  }
};

typedef struct _MapArea_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MapArea_SendGoal_Response_type_support_data_t;

static _MapArea_SendGoal_Response_type_support_data_t _MapArea_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_SendGoal_Response_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_SendGoal_Response__get_type_hash,
  &day2__action__MapArea_SendGoal_Response__get_type_description,
  &day2__action__MapArea_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_SendGoal_Response>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_SendGoal_Response)() {
  return get_message_type_support_handle<day2::action::MapArea_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_SendGoal_Event_type_support_ids_t;

static const _MapArea_SendGoal_Event_type_support_ids_t _MapArea_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_SendGoal_Event_type_support_symbol_names_t _MapArea_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_SendGoal_Event)),
  }
};

typedef struct _MapArea_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _MapArea_SendGoal_Event_type_support_data_t;

static _MapArea_SendGoal_Event_type_support_data_t _MapArea_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_SendGoal_Event_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_SendGoal_Event__get_type_hash,
  &day2__action__MapArea_SendGoal_Event__get_type_description,
  &day2__action__MapArea_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_SendGoal_Event>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_SendGoal_Event)() {
  return get_message_type_support_handle<day2::action::MapArea_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_SendGoal_type_support_ids_t;

static const _MapArea_SendGoal_type_support_ids_t _MapArea_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_SendGoal_type_support_symbol_names_t _MapArea_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_SendGoal)),
  }
};

typedef struct _MapArea_SendGoal_type_support_data_t
{
  void * data[2];
} _MapArea_SendGoal_type_support_data_t;

static _MapArea_SendGoal_type_support_data_t _MapArea_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_SendGoal_service_typesupport_map = {
  2,
  "day2",
  &_MapArea_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MapArea_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MapArea_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MapArea_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<day2::action::MapArea_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<day2::action::MapArea_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<day2::action::MapArea_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<day2::action::MapArea_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<day2::action::MapArea_SendGoal>,
  &day2__action__MapArea_SendGoal__get_type_hash,
  &day2__action__MapArea_SendGoal__get_type_description,
  &day2__action__MapArea_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<day2::action::MapArea_SendGoal>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<day2::action::MapArea_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_GetResult_Request_type_support_ids_t;

static const _MapArea_GetResult_Request_type_support_ids_t _MapArea_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_GetResult_Request_type_support_symbol_names_t _MapArea_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_GetResult_Request)),
  }
};

typedef struct _MapArea_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MapArea_GetResult_Request_type_support_data_t;

static _MapArea_GetResult_Request_type_support_data_t _MapArea_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_GetResult_Request_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_GetResult_Request__get_type_hash,
  &day2__action__MapArea_GetResult_Request__get_type_description,
  &day2__action__MapArea_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_GetResult_Request>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_GetResult_Request)() {
  return get_message_type_support_handle<day2::action::MapArea_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_GetResult_Response_type_support_ids_t;

static const _MapArea_GetResult_Response_type_support_ids_t _MapArea_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_GetResult_Response_type_support_symbol_names_t _MapArea_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_GetResult_Response)),
  }
};

typedef struct _MapArea_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MapArea_GetResult_Response_type_support_data_t;

static _MapArea_GetResult_Response_type_support_data_t _MapArea_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_GetResult_Response_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_GetResult_Response__get_type_hash,
  &day2__action__MapArea_GetResult_Response__get_type_description,
  &day2__action__MapArea_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_GetResult_Response>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_GetResult_Response)() {
  return get_message_type_support_handle<day2::action::MapArea_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_GetResult_Event_type_support_ids_t;

static const _MapArea_GetResult_Event_type_support_ids_t _MapArea_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_GetResult_Event_type_support_symbol_names_t _MapArea_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_GetResult_Event)),
  }
};

typedef struct _MapArea_GetResult_Event_type_support_data_t
{
  void * data[2];
} _MapArea_GetResult_Event_type_support_data_t;

static _MapArea_GetResult_Event_type_support_data_t _MapArea_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_GetResult_Event_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_GetResult_Event__get_type_hash,
  &day2__action__MapArea_GetResult_Event__get_type_description,
  &day2__action__MapArea_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_GetResult_Event>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_GetResult_Event)() {
  return get_message_type_support_handle<day2::action::MapArea_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_GetResult_type_support_ids_t;

static const _MapArea_GetResult_type_support_ids_t _MapArea_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_GetResult_type_support_symbol_names_t _MapArea_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_GetResult)),
  }
};

typedef struct _MapArea_GetResult_type_support_data_t
{
  void * data[2];
} _MapArea_GetResult_type_support_data_t;

static _MapArea_GetResult_type_support_data_t _MapArea_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_GetResult_service_typesupport_map = {
  2,
  "day2",
  &_MapArea_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MapArea_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MapArea_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MapArea_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<day2::action::MapArea_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<day2::action::MapArea_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<day2::action::MapArea_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<day2::action::MapArea_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<day2::action::MapArea_GetResult>,
  &day2__action__MapArea_GetResult__get_type_hash,
  &day2__action__MapArea_GetResult__get_type_description,
  &day2__action__MapArea_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<day2::action::MapArea_GetResult>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<day2::action::MapArea_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapArea_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapArea_FeedbackMessage_type_support_ids_t;

static const _MapArea_FeedbackMessage_type_support_ids_t _MapArea_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapArea_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapArea_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapArea_FeedbackMessage_type_support_symbol_names_t _MapArea_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, day2, action, MapArea_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, action, MapArea_FeedbackMessage)),
  }
};

typedef struct _MapArea_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MapArea_FeedbackMessage_type_support_data_t;

static _MapArea_FeedbackMessage_type_support_data_t _MapArea_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapArea_FeedbackMessage_message_typesupport_map = {
  2,
  "day2",
  &_MapArea_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MapArea_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MapArea_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapArea_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapArea_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &day2__action__MapArea_FeedbackMessage__get_type_hash,
  &day2__action__MapArea_FeedbackMessage__get_type_description,
  &day2__action__MapArea_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::action::MapArea_FeedbackMessage>()
{
  return &::day2::action::rosidl_typesupport_cpp::MapArea_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea_FeedbackMessage)() {
  return get_message_type_support_handle<day2::action::MapArea_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "day2/action/detail/map_area__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace day2
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MapArea_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &day2__action__MapArea__get_type_hash,
  &day2__action__MapArea__get_type_description,
  &day2__action__MapArea__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace day2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<day2::action::MapArea>()
{
  using ::day2::action::rosidl_typesupport_cpp::MapArea_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MapArea_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::day2::action::MapArea::Impl::SendGoalService>();
  MapArea_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::day2::action::MapArea::Impl::GetResultService>();
  MapArea_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::day2::action::MapArea::Impl::CancelGoalService>();
  MapArea_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::day2::action::MapArea::Impl::FeedbackMessage>();
  MapArea_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::day2::action::MapArea::Impl::GoalStatusMessage>();
  return &MapArea_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, day2, action, MapArea)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<day2::action::MapArea>();
}

#ifdef __cplusplus
}
#endif
