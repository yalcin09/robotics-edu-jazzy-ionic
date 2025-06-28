// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/robot_status.hpp"


#ifndef DAY2__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define DAY2__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace day2
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: sensor_status
  {
    if (msg.sensor_status.size() == 0) {
      out << "sensor_status: []";
    } else {
      out << "sensor_status: [";
      size_t pending_items = msg.sensor_status.size();
      for (auto item : msg.sensor_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensor_names
  {
    if (msg.sensor_names.size() == 0) {
      out << "sensor_names: []";
    } else {
      out << "sensor_names: [";
      size_t pending_items = msg.sensor_names.size();
      for (auto item : msg.sensor_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_task
  {
    out << "current_task: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task, out);
    out << ", ";
  }

  // member: task_progress
  {
    out << "task_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.task_progress, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: sensor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_status.size() == 0) {
      out << "sensor_status: []\n";
    } else {
      out << "sensor_status:\n";
      for (auto item : msg.sensor_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensor_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_names.size() == 0) {
      out << "sensor_names: []\n";
    } else {
      out << "sensor_names:\n";
      for (auto item : msg.sensor_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_task: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task, out);
    out << "\n";
  }

  // member: task_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.task_progress, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::msg::to_yaml() instead")]]
inline std::string to_yaml(const day2::msg::RobotStatus & msg)
{
  return day2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<day2::msg::RobotStatus>()
{
  return "day2::msg::RobotStatus";
}

template<>
inline const char * name<day2::msg::RobotStatus>()
{
  return "day2/msg/RobotStatus";
}

template<>
struct has_fixed_size<day2::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAY2__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
