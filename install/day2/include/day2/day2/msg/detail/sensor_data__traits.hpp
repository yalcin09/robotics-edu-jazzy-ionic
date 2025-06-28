// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/sensor_data.hpp"


#ifndef DAY2__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define DAY2__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace day2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_name
  {
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: value_names
  {
    if (msg.value_names.size() == 0) {
      out << "value_names: []";
    } else {
      out << "value_names: [";
      size_t pending_items = msg.value_names.size();
      for (auto item : msg.value_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << ", ";
  }

  // member: is_active
  {
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy, out);
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
  const SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sensor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << "\n";
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: value_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value_names.size() == 0) {
      out << "value_names: []\n";
    } else {
      out << "value_names:\n";
      for (auto item : msg.value_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }

  // member: is_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << "\n";
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy, out);
    out << "\n";
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

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
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
  const day2::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::msg::to_yaml() instead")]]
inline std::string to_yaml(const day2::msg::SensorData & msg)
{
  return day2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<day2::msg::SensorData>()
{
  return "day2::msg::SensorData";
}

template<>
inline const char * name<day2::msg::SensorData>()
{
  return "day2/msg/SensorData";
}

template<>
struct has_fixed_size<day2::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAY2__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
