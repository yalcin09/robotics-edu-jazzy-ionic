// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:action/ChargeBattery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/charge_battery.hpp"


#ifndef DAY2__ACTION__DETAIL__CHARGE_BATTERY__TRAITS_HPP_
#define DAY2__ACTION__DETAIL__CHARGE_BATTERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/action/detail/charge_battery__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'charging_station_location'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_charge_level
  {
    out << "target_charge_level: ";
    rosidl_generator_traits::value_to_yaml(msg.target_charge_level, out);
    out << ", ";
  }

  // member: charging_mode
  {
    out << "charging_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_mode, out);
    out << ", ";
  }

  // member: return_to_dock
  {
    out << "return_to_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.return_to_dock, out);
    out << ", ";
  }

  // member: charging_station_location
  {
    out << "charging_station_location: ";
    to_flow_style_yaml(msg.charging_station_location, out);
    out << ", ";
  }

  // member: max_charging_time
  {
    out << "max_charging_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_charging_time, out);
    out << ", ";
  }

  // member: max_charging_current
  {
    out << "max_charging_current: ";
    rosidl_generator_traits::value_to_yaml(msg.max_charging_current, out);
    out << ", ";
  }

  // member: max_charging_voltage
  {
    out << "max_charging_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.max_charging_voltage, out);
    out << ", ";
  }

  // member: enable_temperature_monitoring
  {
    out << "enable_temperature_monitoring: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_temperature_monitoring, out);
    out << ", ";
  }

  // member: max_battery_temperature
  {
    out << "max_battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.max_battery_temperature, out);
    out << ", ";
  }

  // member: enable_safety_monitoring
  {
    out << "enable_safety_monitoring: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_safety_monitoring, out);
    out << ", ";
  }

  // member: emergency_stop_voltage
  {
    out << "emergency_stop_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_voltage, out);
    out << ", ";
  }

  // member: emergency_stop_temperature
  {
    out << "emergency_stop_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_temperature, out);
    out << ", ";
  }

  // member: auto_disconnect_when_full
  {
    out << "auto_disconnect_when_full: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_disconnect_when_full, out);
    out << ", ";
  }

  // member: navigate_to_charger
  {
    out << "navigate_to_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.navigate_to_charger, out);
    out << ", ";
  }

  // member: docking_precision
  {
    out << "docking_precision: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_precision, out);
    out << ", ";
  }

  // member: docking_approach
  {
    out << "docking_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_approach, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeBattery_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_charge_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_charge_level: ";
    rosidl_generator_traits::value_to_yaml(msg.target_charge_level, out);
    out << "\n";
  }

  // member: charging_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_mode, out);
    out << "\n";
  }

  // member: return_to_dock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_to_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.return_to_dock, out);
    out << "\n";
  }

  // member: charging_station_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_station_location:\n";
    to_block_style_yaml(msg.charging_station_location, out, indentation + 2);
  }

  // member: max_charging_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_charging_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_charging_time, out);
    out << "\n";
  }

  // member: max_charging_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_charging_current: ";
    rosidl_generator_traits::value_to_yaml(msg.max_charging_current, out);
    out << "\n";
  }

  // member: max_charging_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_charging_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.max_charging_voltage, out);
    out << "\n";
  }

  // member: enable_temperature_monitoring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_temperature_monitoring: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_temperature_monitoring, out);
    out << "\n";
  }

  // member: max_battery_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.max_battery_temperature, out);
    out << "\n";
  }

  // member: enable_safety_monitoring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_safety_monitoring: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_safety_monitoring, out);
    out << "\n";
  }

  // member: emergency_stop_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_voltage, out);
    out << "\n";
  }

  // member: emergency_stop_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_temperature, out);
    out << "\n";
  }

  // member: auto_disconnect_when_full
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_disconnect_when_full: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_disconnect_when_full, out);
    out << "\n";
  }

  // member: navigate_to_charger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigate_to_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.navigate_to_charger, out);
    out << "\n";
  }

  // member: docking_precision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_precision: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_precision, out);
    out << "\n";
  }

  // member: docking_approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_approach, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeBattery_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_Goal & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_Goal>()
{
  return "day2::action::ChargeBattery_Goal";
}

template<>
inline const char * name<day2::action::ChargeBattery_Goal>()
{
  return "day2/action/ChargeBattery_Goal";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::ChargeBattery_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'final_docked_position'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: result_message
  {
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
    out << ", ";
  }

  // member: final_charge_level
  {
    out << "final_charge_level: ";
    rosidl_generator_traits::value_to_yaml(msg.final_charge_level, out);
    out << ", ";
  }

  // member: total_charging_time
  {
    out << "total_charging_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_charging_time, out);
    out << ", ";
  }

  // member: energy_transferred
  {
    out << "energy_transferred: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_transferred, out);
    out << ", ";
  }

  // member: average_charging_power
  {
    out << "average_charging_power: ";
    rosidl_generator_traits::value_to_yaml(msg.average_charging_power, out);
    out << ", ";
  }

  // member: charging_efficiency
  {
    out << "charging_efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_efficiency, out);
    out << ", ";
  }

  // member: max_temperature_reached
  {
    out << "max_temperature_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.max_temperature_reached, out);
    out << ", ";
  }

  // member: battery_health_score
  {
    out << "battery_health_score: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_health_score, out);
    out << ", ";
  }

  // member: charging_cycles_count
  {
    out << "charging_cycles_count: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_cycles_count, out);
    out << ", ";
  }

  // member: estimated_battery_lifespan
  {
    out << "estimated_battery_lifespan: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_battery_lifespan, out);
    out << ", ";
  }

  // member: docking_successful
  {
    out << "docking_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_successful, out);
    out << ", ";
  }

  // member: docking_time
  {
    out << "docking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_time, out);
    out << ", ";
  }

  // member: navigation_time
  {
    out << "navigation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_time, out);
    out << ", ";
  }

  // member: final_docked_position
  {
    out << "final_docked_position: ";
    to_flow_style_yaml(msg.final_docked_position, out);
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
  const ChargeBattery_Result & msg,
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

  // member: result_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
    out << "\n";
  }

  // member: final_charge_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_charge_level: ";
    rosidl_generator_traits::value_to_yaml(msg.final_charge_level, out);
    out << "\n";
  }

  // member: total_charging_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_charging_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_charging_time, out);
    out << "\n";
  }

  // member: energy_transferred
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_transferred: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_transferred, out);
    out << "\n";
  }

  // member: average_charging_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_charging_power: ";
    rosidl_generator_traits::value_to_yaml(msg.average_charging_power, out);
    out << "\n";
  }

  // member: charging_efficiency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_efficiency, out);
    out << "\n";
  }

  // member: max_temperature_reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_temperature_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.max_temperature_reached, out);
    out << "\n";
  }

  // member: battery_health_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_health_score: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_health_score, out);
    out << "\n";
  }

  // member: charging_cycles_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_cycles_count: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_cycles_count, out);
    out << "\n";
  }

  // member: estimated_battery_lifespan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_battery_lifespan: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_battery_lifespan, out);
    out << "\n";
  }

  // member: docking_successful
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_successful, out);
    out << "\n";
  }

  // member: docking_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_time, out);
    out << "\n";
  }

  // member: navigation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_time, out);
    out << "\n";
  }

  // member: final_docked_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_docked_position:\n";
    to_block_style_yaml(msg.final_docked_position, out, indentation + 2);
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

inline std::string to_yaml(const ChargeBattery_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_Result & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_Result>()
{
  return "day2::action::ChargeBattery_Result";
}

template<>
inline const char * name<day2::action::ChargeBattery_Result>()
{
  return "day2/action/ChargeBattery_Result";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::ChargeBattery_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_position'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'charging_start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_phase
  {
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << ", ";
  }

  // member: current_charge_level
  {
    out << "current_charge_level: ";
    rosidl_generator_traits::value_to_yaml(msg.current_charge_level, out);
    out << ", ";
  }

  // member: charging_progress_percentage
  {
    out << "charging_progress_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_progress_percentage, out);
    out << ", ";
  }

  // member: estimated_time_to_completion
  {
    out << "estimated_time_to_completion: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_time_to_completion, out);
    out << ", ";
  }

  // member: current_voltage
  {
    out << "current_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.current_voltage, out);
    out << ", ";
  }

  // member: current_amperage
  {
    out << "current_amperage: ";
    rosidl_generator_traits::value_to_yaml(msg.current_amperage, out);
    out << ", ";
  }

  // member: current_power
  {
    out << "current_power: ";
    rosidl_generator_traits::value_to_yaml(msg.current_power, out);
    out << ", ";
  }

  // member: current_temperature
  {
    out << "current_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.current_temperature, out);
    out << ", ";
  }

  // member: charging_rate
  {
    out << "charging_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_rate, out);
    out << ", ";
  }

  // member: charging_state
  {
    out << "charging_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_state, out);
    out << ", ";
  }

  // member: time_elapsed
  {
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << ", ";
  }

  // member: current_position
  {
    out << "current_position: ";
    to_flow_style_yaml(msg.current_position, out);
    out << ", ";
  }

  // member: distance_to_charger
  {
    out << "distance_to_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_charger, out);
    out << ", ";
  }

  // member: charger_in_sight
  {
    out << "charger_in_sight: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_in_sight, out);
    out << ", ";
  }

  // member: docking_initiated
  {
    out << "docking_initiated: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_initiated, out);
    out << ", ";
  }

  // member: docking_alignment_error
  {
    out << "docking_alignment_error: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_alignment_error, out);
    out << ", ";
  }

  // member: connection_established
  {
    out << "connection_established: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_established, out);
    out << ", ";
  }

  // member: temperature_warning
  {
    out << "temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_warning, out);
    out << ", ";
  }

  // member: voltage_warning
  {
    out << "voltage_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_warning, out);
    out << ", ";
  }

  // member: current_warning
  {
    out << "current_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.current_warning, out);
    out << ", ";
  }

  // member: active_warnings
  {
    if (msg.active_warnings.size() == 0) {
      out << "active_warnings: []";
    } else {
      out << "active_warnings: [";
      size_t pending_items = msg.active_warnings.size();
      for (auto item : msg.active_warnings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: charger_efficiency
  {
    out << "charger_efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_efficiency, out);
    out << ", ";
  }

  // member: charger_connected
  {
    out << "charger_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_connected, out);
    out << ", ";
  }

  // member: charging_start_time
  {
    out << "charging_start_time: ";
    to_flow_style_yaml(msg.charging_start_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeBattery_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << "\n";
  }

  // member: current_charge_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_charge_level: ";
    rosidl_generator_traits::value_to_yaml(msg.current_charge_level, out);
    out << "\n";
  }

  // member: charging_progress_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_progress_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_progress_percentage, out);
    out << "\n";
  }

  // member: estimated_time_to_completion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_time_to_completion: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_time_to_completion, out);
    out << "\n";
  }

  // member: current_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.current_voltage, out);
    out << "\n";
  }

  // member: current_amperage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_amperage: ";
    rosidl_generator_traits::value_to_yaml(msg.current_amperage, out);
    out << "\n";
  }

  // member: current_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_power: ";
    rosidl_generator_traits::value_to_yaml(msg.current_power, out);
    out << "\n";
  }

  // member: current_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.current_temperature, out);
    out << "\n";
  }

  // member: charging_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_rate, out);
    out << "\n";
  }

  // member: charging_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_state, out);
    out << "\n";
  }

  // member: time_elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << "\n";
  }

  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position:\n";
    to_block_style_yaml(msg.current_position, out, indentation + 2);
  }

  // member: distance_to_charger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_charger, out);
    out << "\n";
  }

  // member: charger_in_sight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_in_sight: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_in_sight, out);
    out << "\n";
  }

  // member: docking_initiated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_initiated: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_initiated, out);
    out << "\n";
  }

  // member: docking_alignment_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_alignment_error: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_alignment_error, out);
    out << "\n";
  }

  // member: connection_established
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_established: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_established, out);
    out << "\n";
  }

  // member: temperature_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_warning, out);
    out << "\n";
  }

  // member: voltage_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_warning, out);
    out << "\n";
  }

  // member: current_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.current_warning, out);
    out << "\n";
  }

  // member: active_warnings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_warnings.size() == 0) {
      out << "active_warnings: []\n";
    } else {
      out << "active_warnings:\n";
      for (auto item : msg.active_warnings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: charger_efficiency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_efficiency, out);
    out << "\n";
  }

  // member: charger_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_connected, out);
    out << "\n";
  }

  // member: charging_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_start_time:\n";
    to_block_style_yaml(msg.charging_start_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeBattery_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_Feedback & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_Feedback>()
{
  return "day2::action::ChargeBattery_Feedback";
}

template<>
inline const char * name<day2::action::ChargeBattery_Feedback>()
{
  return "day2/action/ChargeBattery_Feedback";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::ChargeBattery_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "day2/action/detail/charge_battery__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeBattery_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeBattery_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_SendGoal_Request & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_SendGoal_Request>()
{
  return "day2::action::ChargeBattery_SendGoal_Request";
}

template<>
inline const char * name<day2::action::ChargeBattery_SendGoal_Request>()
{
  return "day2/action/ChargeBattery_SendGoal_Request";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<day2::action::ChargeBattery_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<day2::action::ChargeBattery_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::ChargeBattery_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeBattery_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeBattery_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_SendGoal_Response & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_SendGoal_Response>()
{
  return "day2::action::ChargeBattery_SendGoal_Response";
}

template<>
inline const char * name<day2::action::ChargeBattery_SendGoal_Response>()
{
  return "day2/action/ChargeBattery_SendGoal_Response";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<day2::action::ChargeBattery_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_SendGoal_Event & msg,
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
  const ChargeBattery_SendGoal_Event & msg,
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

inline std::string to_yaml(const ChargeBattery_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_SendGoal_Event & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_SendGoal_Event>()
{
  return "day2::action::ChargeBattery_SendGoal_Event";
}

template<>
inline const char * name<day2::action::ChargeBattery_SendGoal_Event>()
{
  return "day2/action/ChargeBattery_SendGoal_Event";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<day2::action::ChargeBattery_SendGoal_Request>::value && has_bounded_size<day2::action::ChargeBattery_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::action::ChargeBattery_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::action::ChargeBattery_SendGoal>()
{
  return "day2::action::ChargeBattery_SendGoal";
}

template<>
inline const char * name<day2::action::ChargeBattery_SendGoal>()
{
  return "day2/action/ChargeBattery_SendGoal";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::action::ChargeBattery_SendGoal_Request>::value &&
    has_fixed_size<day2::action::ChargeBattery_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::action::ChargeBattery_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::action::ChargeBattery_SendGoal_Request>::value &&
    has_bounded_size<day2::action::ChargeBattery_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<day2::action::ChargeBattery_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<day2::action::ChargeBattery_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::action::ChargeBattery_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeBattery_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeBattery_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_GetResult_Request & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_GetResult_Request>()
{
  return "day2::action::ChargeBattery_GetResult_Request";
}

template<>
inline const char * name<day2::action::ChargeBattery_GetResult_Request>()
{
  return "day2/action/ChargeBattery_GetResult_Request";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::ChargeBattery_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/charge_battery__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeBattery_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeBattery_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_GetResult_Response & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_GetResult_Response>()
{
  return "day2::action::ChargeBattery_GetResult_Response";
}

template<>
inline const char * name<day2::action::ChargeBattery_GetResult_Response>()
{
  return "day2/action/ChargeBattery_GetResult_Response";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<day2::action::ChargeBattery_Result>::value> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<day2::action::ChargeBattery_Result>::value> {};

template<>
struct is_message<day2::action::ChargeBattery_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_GetResult_Event & msg,
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
  const ChargeBattery_GetResult_Event & msg,
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

inline std::string to_yaml(const ChargeBattery_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_GetResult_Event & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_GetResult_Event>()
{
  return "day2::action::ChargeBattery_GetResult_Event";
}

template<>
inline const char * name<day2::action::ChargeBattery_GetResult_Event>()
{
  return "day2/action/ChargeBattery_GetResult_Event";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<day2::action::ChargeBattery_GetResult_Request>::value && has_bounded_size<day2::action::ChargeBattery_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::action::ChargeBattery_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::action::ChargeBattery_GetResult>()
{
  return "day2::action::ChargeBattery_GetResult";
}

template<>
inline const char * name<day2::action::ChargeBattery_GetResult>()
{
  return "day2/action/ChargeBattery_GetResult";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::action::ChargeBattery_GetResult_Request>::value &&
    has_fixed_size<day2::action::ChargeBattery_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::action::ChargeBattery_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::action::ChargeBattery_GetResult_Request>::value &&
    has_bounded_size<day2::action::ChargeBattery_GetResult_Response>::value
  >
{
};

template<>
struct is_service<day2::action::ChargeBattery_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<day2::action::ChargeBattery_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::action::ChargeBattery_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "day2/action/detail/charge_battery__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const ChargeBattery_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeBattery_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeBattery_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::ChargeBattery_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::ChargeBattery_FeedbackMessage & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::ChargeBattery_FeedbackMessage>()
{
  return "day2::action::ChargeBattery_FeedbackMessage";
}

template<>
inline const char * name<day2::action::ChargeBattery_FeedbackMessage>()
{
  return "day2/action/ChargeBattery_FeedbackMessage";
}

template<>
struct has_fixed_size<day2::action::ChargeBattery_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<day2::action::ChargeBattery_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::ChargeBattery_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<day2::action::ChargeBattery_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::ChargeBattery_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<day2::action::ChargeBattery>
  : std::true_type
{
};

template<>
struct is_action_goal<day2::action::ChargeBattery_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<day2::action::ChargeBattery_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<day2::action::ChargeBattery_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DAY2__ACTION__DETAIL__CHARGE_BATTERY__TRAITS_HPP_
