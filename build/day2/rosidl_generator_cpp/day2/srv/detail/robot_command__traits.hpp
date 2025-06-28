// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:srv/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/robot_command.hpp"


#ifndef DAY2__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
#define DAY2__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/srv/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'target_orientation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_type
  {
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << ", ";
  }

  // member: target_position
  {
    out << "target_position: ";
    to_flow_style_yaml(msg.target_position, out);
    out << ", ";
  }

  // member: target_orientation
  {
    out << "target_orientation: ";
    to_flow_style_yaml(msg.target_orientation, out);
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << ", ";
  }

  // member: max_acceleration
  {
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << ", ";
  }

  // member: timeout_seconds
  {
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
    out << ", ";
  }

  // member: force_execution
  {
    out << "force_execution: ";
    rosidl_generator_traits::value_to_yaml(msg.force_execution, out);
    out << ", ";
  }

  // member: additional_params
  {
    if (msg.additional_params.size() == 0) {
      out << "additional_params: []";
    } else {
      out << "additional_params: [";
      size_t pending_items = msg.additional_params.size();
      for (auto item : msg.additional_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deadline
  {
    out << "deadline: ";
    to_flow_style_yaml(msg.deadline, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << "\n";
  }

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position:\n";
    to_block_style_yaml(msg.target_position, out, indentation + 2);
  }

  // member: target_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_orientation:\n";
    to_block_style_yaml(msg.target_orientation, out, indentation + 2);
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }

  // member: timeout_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
    out << "\n";
  }

  // member: force_execution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_execution: ";
    rosidl_generator_traits::value_to_yaml(msg.force_execution, out);
    out << "\n";
  }

  // member: additional_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_params.size() == 0) {
      out << "additional_params: []\n";
    } else {
      out << "additional_params:\n";
      for (auto item : msg.additional_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deadline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deadline:\n";
    to_block_style_yaml(msg.deadline, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::srv::RobotCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::RobotCommand_Request & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::RobotCommand_Request>()
{
  return "day2::srv::RobotCommand_Request";
}

template<>
inline const char * name<day2::srv::RobotCommand_Request>()
{
  return "day2/srv/RobotCommand_Request";
}

template<>
struct has_fixed_size<day2::srv::RobotCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::RobotCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::RobotCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'actual_target'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'estimated_completion'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: command_id
  {
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << ", ";
  }

  // member: estimated_duration
  {
    out << "estimated_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_duration, out);
    out << ", ";
  }

  // member: actual_target
  {
    out << "actual_target: ";
    to_flow_style_yaml(msg.actual_target, out);
    out << ", ";
  }

  // member: estimated_completion
  {
    out << "estimated_completion: ";
    to_flow_style_yaml(msg.estimated_completion, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << "\n";
  }

  // member: estimated_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_duration, out);
    out << "\n";
  }

  // member: actual_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_target:\n";
    to_block_style_yaml(msg.actual_target, out, indentation + 2);
  }

  // member: estimated_completion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_completion:\n";
    to_block_style_yaml(msg.estimated_completion, out, indentation + 2);
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::srv::RobotCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::RobotCommand_Response & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::RobotCommand_Response>()
{
  return "day2::srv::RobotCommand_Response";
}

template<>
inline const char * name<day2::srv::RobotCommand_Response>()
{
  return "day2/srv/RobotCommand_Response";
}

template<>
struct has_fixed_size<day2::srv::RobotCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::RobotCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::RobotCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotCommand_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCommand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCommand_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::srv::RobotCommand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::RobotCommand_Event & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::RobotCommand_Event>()
{
  return "day2::srv::RobotCommand_Event";
}

template<>
inline const char * name<day2::srv::RobotCommand_Event>()
{
  return "day2/srv/RobotCommand_Event";
}

template<>
struct has_fixed_size<day2::srv::RobotCommand_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::RobotCommand_Event>
  : std::integral_constant<bool, has_bounded_size<day2::srv::RobotCommand_Request>::value && has_bounded_size<day2::srv::RobotCommand_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::srv::RobotCommand_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::srv::RobotCommand>()
{
  return "day2::srv::RobotCommand";
}

template<>
inline const char * name<day2::srv::RobotCommand>()
{
  return "day2/srv/RobotCommand";
}

template<>
struct has_fixed_size<day2::srv::RobotCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::srv::RobotCommand_Request>::value &&
    has_fixed_size<day2::srv::RobotCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::srv::RobotCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::srv::RobotCommand_Request>::value &&
    has_bounded_size<day2::srv::RobotCommand_Response>::value
  >
{
};

template<>
struct is_service<day2::srv::RobotCommand>
  : std::true_type
{
};

template<>
struct is_service_request<day2::srv::RobotCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::srv::RobotCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAY2__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
