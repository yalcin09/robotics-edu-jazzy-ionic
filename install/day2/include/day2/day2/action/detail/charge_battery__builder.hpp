// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:action/ChargeBattery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/charge_battery.hpp"


#ifndef DAY2__ACTION__DETAIL__CHARGE_BATTERY__BUILDER_HPP_
#define DAY2__ACTION__DETAIL__CHARGE_BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/action/detail/charge_battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_Goal_docking_approach
{
public:
  explicit Init_ChargeBattery_Goal_docking_approach(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_Goal docking_approach(::day2::action::ChargeBattery_Goal::_docking_approach_type arg)
  {
    msg_.docking_approach = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_docking_precision
{
public:
  explicit Init_ChargeBattery_Goal_docking_precision(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_docking_approach docking_precision(::day2::action::ChargeBattery_Goal::_docking_precision_type arg)
  {
    msg_.docking_precision = std::move(arg);
    return Init_ChargeBattery_Goal_docking_approach(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_navigate_to_charger
{
public:
  explicit Init_ChargeBattery_Goal_navigate_to_charger(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_docking_precision navigate_to_charger(::day2::action::ChargeBattery_Goal::_navigate_to_charger_type arg)
  {
    msg_.navigate_to_charger = std::move(arg);
    return Init_ChargeBattery_Goal_docking_precision(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_auto_disconnect_when_full
{
public:
  explicit Init_ChargeBattery_Goal_auto_disconnect_when_full(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_navigate_to_charger auto_disconnect_when_full(::day2::action::ChargeBattery_Goal::_auto_disconnect_when_full_type arg)
  {
    msg_.auto_disconnect_when_full = std::move(arg);
    return Init_ChargeBattery_Goal_navigate_to_charger(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_emergency_stop_temperature
{
public:
  explicit Init_ChargeBattery_Goal_emergency_stop_temperature(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_auto_disconnect_when_full emergency_stop_temperature(::day2::action::ChargeBattery_Goal::_emergency_stop_temperature_type arg)
  {
    msg_.emergency_stop_temperature = std::move(arg);
    return Init_ChargeBattery_Goal_auto_disconnect_when_full(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_emergency_stop_voltage
{
public:
  explicit Init_ChargeBattery_Goal_emergency_stop_voltage(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_emergency_stop_temperature emergency_stop_voltage(::day2::action::ChargeBattery_Goal::_emergency_stop_voltage_type arg)
  {
    msg_.emergency_stop_voltage = std::move(arg);
    return Init_ChargeBattery_Goal_emergency_stop_temperature(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_enable_safety_monitoring
{
public:
  explicit Init_ChargeBattery_Goal_enable_safety_monitoring(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_emergency_stop_voltage enable_safety_monitoring(::day2::action::ChargeBattery_Goal::_enable_safety_monitoring_type arg)
  {
    msg_.enable_safety_monitoring = std::move(arg);
    return Init_ChargeBattery_Goal_emergency_stop_voltage(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_max_battery_temperature
{
public:
  explicit Init_ChargeBattery_Goal_max_battery_temperature(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_enable_safety_monitoring max_battery_temperature(::day2::action::ChargeBattery_Goal::_max_battery_temperature_type arg)
  {
    msg_.max_battery_temperature = std::move(arg);
    return Init_ChargeBattery_Goal_enable_safety_monitoring(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_enable_temperature_monitoring
{
public:
  explicit Init_ChargeBattery_Goal_enable_temperature_monitoring(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_max_battery_temperature enable_temperature_monitoring(::day2::action::ChargeBattery_Goal::_enable_temperature_monitoring_type arg)
  {
    msg_.enable_temperature_monitoring = std::move(arg);
    return Init_ChargeBattery_Goal_max_battery_temperature(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_max_charging_voltage
{
public:
  explicit Init_ChargeBattery_Goal_max_charging_voltage(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_enable_temperature_monitoring max_charging_voltage(::day2::action::ChargeBattery_Goal::_max_charging_voltage_type arg)
  {
    msg_.max_charging_voltage = std::move(arg);
    return Init_ChargeBattery_Goal_enable_temperature_monitoring(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_max_charging_current
{
public:
  explicit Init_ChargeBattery_Goal_max_charging_current(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_max_charging_voltage max_charging_current(::day2::action::ChargeBattery_Goal::_max_charging_current_type arg)
  {
    msg_.max_charging_current = std::move(arg);
    return Init_ChargeBattery_Goal_max_charging_voltage(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_max_charging_time
{
public:
  explicit Init_ChargeBattery_Goal_max_charging_time(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_max_charging_current max_charging_time(::day2::action::ChargeBattery_Goal::_max_charging_time_type arg)
  {
    msg_.max_charging_time = std::move(arg);
    return Init_ChargeBattery_Goal_max_charging_current(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_charging_station_location
{
public:
  explicit Init_ChargeBattery_Goal_charging_station_location(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_max_charging_time charging_station_location(::day2::action::ChargeBattery_Goal::_charging_station_location_type arg)
  {
    msg_.charging_station_location = std::move(arg);
    return Init_ChargeBattery_Goal_max_charging_time(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_return_to_dock
{
public:
  explicit Init_ChargeBattery_Goal_return_to_dock(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_charging_station_location return_to_dock(::day2::action::ChargeBattery_Goal::_return_to_dock_type arg)
  {
    msg_.return_to_dock = std::move(arg);
    return Init_ChargeBattery_Goal_charging_station_location(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_charging_mode
{
public:
  explicit Init_ChargeBattery_Goal_charging_mode(::day2::action::ChargeBattery_Goal & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Goal_return_to_dock charging_mode(::day2::action::ChargeBattery_Goal::_charging_mode_type arg)
  {
    msg_.charging_mode = std::move(arg);
    return Init_ChargeBattery_Goal_return_to_dock(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

class Init_ChargeBattery_Goal_target_charge_level
{
public:
  Init_ChargeBattery_Goal_target_charge_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_Goal_charging_mode target_charge_level(::day2::action::ChargeBattery_Goal::_target_charge_level_type arg)
  {
    msg_.target_charge_level = std::move(arg);
    return Init_ChargeBattery_Goal_charging_mode(msg_);
  }

private:
  ::day2::action::ChargeBattery_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_Goal>()
{
  return day2::action::builder::Init_ChargeBattery_Goal_target_charge_level();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_Result_error_code
{
public:
  explicit Init_ChargeBattery_Result_error_code(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_Result error_code(::day2::action::ChargeBattery_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_final_docked_position
{
public:
  explicit Init_ChargeBattery_Result_final_docked_position(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_error_code final_docked_position(::day2::action::ChargeBattery_Result::_final_docked_position_type arg)
  {
    msg_.final_docked_position = std::move(arg);
    return Init_ChargeBattery_Result_error_code(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_navigation_time
{
public:
  explicit Init_ChargeBattery_Result_navigation_time(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_final_docked_position navigation_time(::day2::action::ChargeBattery_Result::_navigation_time_type arg)
  {
    msg_.navigation_time = std::move(arg);
    return Init_ChargeBattery_Result_final_docked_position(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_docking_time
{
public:
  explicit Init_ChargeBattery_Result_docking_time(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_navigation_time docking_time(::day2::action::ChargeBattery_Result::_docking_time_type arg)
  {
    msg_.docking_time = std::move(arg);
    return Init_ChargeBattery_Result_navigation_time(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_docking_successful
{
public:
  explicit Init_ChargeBattery_Result_docking_successful(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_docking_time docking_successful(::day2::action::ChargeBattery_Result::_docking_successful_type arg)
  {
    msg_.docking_successful = std::move(arg);
    return Init_ChargeBattery_Result_docking_time(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_estimated_battery_lifespan
{
public:
  explicit Init_ChargeBattery_Result_estimated_battery_lifespan(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_docking_successful estimated_battery_lifespan(::day2::action::ChargeBattery_Result::_estimated_battery_lifespan_type arg)
  {
    msg_.estimated_battery_lifespan = std::move(arg);
    return Init_ChargeBattery_Result_docking_successful(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_charging_cycles_count
{
public:
  explicit Init_ChargeBattery_Result_charging_cycles_count(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_estimated_battery_lifespan charging_cycles_count(::day2::action::ChargeBattery_Result::_charging_cycles_count_type arg)
  {
    msg_.charging_cycles_count = std::move(arg);
    return Init_ChargeBattery_Result_estimated_battery_lifespan(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_battery_health_score
{
public:
  explicit Init_ChargeBattery_Result_battery_health_score(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_charging_cycles_count battery_health_score(::day2::action::ChargeBattery_Result::_battery_health_score_type arg)
  {
    msg_.battery_health_score = std::move(arg);
    return Init_ChargeBattery_Result_charging_cycles_count(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_max_temperature_reached
{
public:
  explicit Init_ChargeBattery_Result_max_temperature_reached(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_battery_health_score max_temperature_reached(::day2::action::ChargeBattery_Result::_max_temperature_reached_type arg)
  {
    msg_.max_temperature_reached = std::move(arg);
    return Init_ChargeBattery_Result_battery_health_score(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_charging_efficiency
{
public:
  explicit Init_ChargeBattery_Result_charging_efficiency(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_max_temperature_reached charging_efficiency(::day2::action::ChargeBattery_Result::_charging_efficiency_type arg)
  {
    msg_.charging_efficiency = std::move(arg);
    return Init_ChargeBattery_Result_max_temperature_reached(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_average_charging_power
{
public:
  explicit Init_ChargeBattery_Result_average_charging_power(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_charging_efficiency average_charging_power(::day2::action::ChargeBattery_Result::_average_charging_power_type arg)
  {
    msg_.average_charging_power = std::move(arg);
    return Init_ChargeBattery_Result_charging_efficiency(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_energy_transferred
{
public:
  explicit Init_ChargeBattery_Result_energy_transferred(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_average_charging_power energy_transferred(::day2::action::ChargeBattery_Result::_energy_transferred_type arg)
  {
    msg_.energy_transferred = std::move(arg);
    return Init_ChargeBattery_Result_average_charging_power(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_total_charging_time
{
public:
  explicit Init_ChargeBattery_Result_total_charging_time(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_energy_transferred total_charging_time(::day2::action::ChargeBattery_Result::_total_charging_time_type arg)
  {
    msg_.total_charging_time = std::move(arg);
    return Init_ChargeBattery_Result_energy_transferred(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_final_charge_level
{
public:
  explicit Init_ChargeBattery_Result_final_charge_level(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_total_charging_time final_charge_level(::day2::action::ChargeBattery_Result::_final_charge_level_type arg)
  {
    msg_.final_charge_level = std::move(arg);
    return Init_ChargeBattery_Result_total_charging_time(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_result_message
{
public:
  explicit Init_ChargeBattery_Result_result_message(::day2::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_final_charge_level result_message(::day2::action::ChargeBattery_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return Init_ChargeBattery_Result_final_charge_level(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_success
{
public:
  Init_ChargeBattery_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_Result_result_message success(::day2::action::ChargeBattery_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ChargeBattery_Result_result_message(msg_);
  }

private:
  ::day2::action::ChargeBattery_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_Result>()
{
  return day2::action::builder::Init_ChargeBattery_Result_success();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_Feedback_charging_start_time
{
public:
  explicit Init_ChargeBattery_Feedback_charging_start_time(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_Feedback charging_start_time(::day2::action::ChargeBattery_Feedback::_charging_start_time_type arg)
  {
    msg_.charging_start_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_charger_connected
{
public:
  explicit Init_ChargeBattery_Feedback_charger_connected(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charging_start_time charger_connected(::day2::action::ChargeBattery_Feedback::_charger_connected_type arg)
  {
    msg_.charger_connected = std::move(arg);
    return Init_ChargeBattery_Feedback_charging_start_time(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_charger_efficiency
{
public:
  explicit Init_ChargeBattery_Feedback_charger_efficiency(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charger_connected charger_efficiency(::day2::action::ChargeBattery_Feedback::_charger_efficiency_type arg)
  {
    msg_.charger_efficiency = std::move(arg);
    return Init_ChargeBattery_Feedback_charger_connected(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_active_warnings
{
public:
  explicit Init_ChargeBattery_Feedback_active_warnings(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charger_efficiency active_warnings(::day2::action::ChargeBattery_Feedback::_active_warnings_type arg)
  {
    msg_.active_warnings = std::move(arg);
    return Init_ChargeBattery_Feedback_charger_efficiency(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_warning
{
public:
  explicit Init_ChargeBattery_Feedback_current_warning(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_active_warnings current_warning(::day2::action::ChargeBattery_Feedback::_current_warning_type arg)
  {
    msg_.current_warning = std::move(arg);
    return Init_ChargeBattery_Feedback_active_warnings(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_voltage_warning
{
public:
  explicit Init_ChargeBattery_Feedback_voltage_warning(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_current_warning voltage_warning(::day2::action::ChargeBattery_Feedback::_voltage_warning_type arg)
  {
    msg_.voltage_warning = std::move(arg);
    return Init_ChargeBattery_Feedback_current_warning(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_temperature_warning
{
public:
  explicit Init_ChargeBattery_Feedback_temperature_warning(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_voltage_warning temperature_warning(::day2::action::ChargeBattery_Feedback::_temperature_warning_type arg)
  {
    msg_.temperature_warning = std::move(arg);
    return Init_ChargeBattery_Feedback_voltage_warning(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_connection_established
{
public:
  explicit Init_ChargeBattery_Feedback_connection_established(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_temperature_warning connection_established(::day2::action::ChargeBattery_Feedback::_connection_established_type arg)
  {
    msg_.connection_established = std::move(arg);
    return Init_ChargeBattery_Feedback_temperature_warning(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_docking_alignment_error
{
public:
  explicit Init_ChargeBattery_Feedback_docking_alignment_error(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_connection_established docking_alignment_error(::day2::action::ChargeBattery_Feedback::_docking_alignment_error_type arg)
  {
    msg_.docking_alignment_error = std::move(arg);
    return Init_ChargeBattery_Feedback_connection_established(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_docking_initiated
{
public:
  explicit Init_ChargeBattery_Feedback_docking_initiated(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_docking_alignment_error docking_initiated(::day2::action::ChargeBattery_Feedback::_docking_initiated_type arg)
  {
    msg_.docking_initiated = std::move(arg);
    return Init_ChargeBattery_Feedback_docking_alignment_error(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_charger_in_sight
{
public:
  explicit Init_ChargeBattery_Feedback_charger_in_sight(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_docking_initiated charger_in_sight(::day2::action::ChargeBattery_Feedback::_charger_in_sight_type arg)
  {
    msg_.charger_in_sight = std::move(arg);
    return Init_ChargeBattery_Feedback_docking_initiated(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_distance_to_charger
{
public:
  explicit Init_ChargeBattery_Feedback_distance_to_charger(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charger_in_sight distance_to_charger(::day2::action::ChargeBattery_Feedback::_distance_to_charger_type arg)
  {
    msg_.distance_to_charger = std::move(arg);
    return Init_ChargeBattery_Feedback_charger_in_sight(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_position
{
public:
  explicit Init_ChargeBattery_Feedback_current_position(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_distance_to_charger current_position(::day2::action::ChargeBattery_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return Init_ChargeBattery_Feedback_distance_to_charger(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_time_elapsed
{
public:
  explicit Init_ChargeBattery_Feedback_time_elapsed(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_current_position time_elapsed(::day2::action::ChargeBattery_Feedback::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return Init_ChargeBattery_Feedback_current_position(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_charging_state
{
public:
  explicit Init_ChargeBattery_Feedback_charging_state(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_time_elapsed charging_state(::day2::action::ChargeBattery_Feedback::_charging_state_type arg)
  {
    msg_.charging_state = std::move(arg);
    return Init_ChargeBattery_Feedback_time_elapsed(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_charging_rate
{
public:
  explicit Init_ChargeBattery_Feedback_charging_rate(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charging_state charging_rate(::day2::action::ChargeBattery_Feedback::_charging_rate_type arg)
  {
    msg_.charging_rate = std::move(arg);
    return Init_ChargeBattery_Feedback_charging_state(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_temperature
{
public:
  explicit Init_ChargeBattery_Feedback_current_temperature(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charging_rate current_temperature(::day2::action::ChargeBattery_Feedback::_current_temperature_type arg)
  {
    msg_.current_temperature = std::move(arg);
    return Init_ChargeBattery_Feedback_charging_rate(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_power
{
public:
  explicit Init_ChargeBattery_Feedback_current_power(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_current_temperature current_power(::day2::action::ChargeBattery_Feedback::_current_power_type arg)
  {
    msg_.current_power = std::move(arg);
    return Init_ChargeBattery_Feedback_current_temperature(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_amperage
{
public:
  explicit Init_ChargeBattery_Feedback_current_amperage(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_current_power current_amperage(::day2::action::ChargeBattery_Feedback::_current_amperage_type arg)
  {
    msg_.current_amperage = std::move(arg);
    return Init_ChargeBattery_Feedback_current_power(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_voltage
{
public:
  explicit Init_ChargeBattery_Feedback_current_voltage(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_current_amperage current_voltage(::day2::action::ChargeBattery_Feedback::_current_voltage_type arg)
  {
    msg_.current_voltage = std::move(arg);
    return Init_ChargeBattery_Feedback_current_amperage(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_estimated_time_to_completion
{
public:
  explicit Init_ChargeBattery_Feedback_estimated_time_to_completion(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_current_voltage estimated_time_to_completion(::day2::action::ChargeBattery_Feedback::_estimated_time_to_completion_type arg)
  {
    msg_.estimated_time_to_completion = std::move(arg);
    return Init_ChargeBattery_Feedback_current_voltage(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_charging_progress_percentage
{
public:
  explicit Init_ChargeBattery_Feedback_charging_progress_percentage(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_estimated_time_to_completion charging_progress_percentage(::day2::action::ChargeBattery_Feedback::_charging_progress_percentage_type arg)
  {
    msg_.charging_progress_percentage = std::move(arg);
    return Init_ChargeBattery_Feedback_estimated_time_to_completion(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_charge_level
{
public:
  explicit Init_ChargeBattery_Feedback_current_charge_level(::day2::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charging_progress_percentage current_charge_level(::day2::action::ChargeBattery_Feedback::_current_charge_level_type arg)
  {
    msg_.current_charge_level = std::move(arg);
    return Init_ChargeBattery_Feedback_charging_progress_percentage(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_phase
{
public:
  Init_ChargeBattery_Feedback_current_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_Feedback_current_charge_level current_phase(::day2::action::ChargeBattery_Feedback::_current_phase_type arg)
  {
    msg_.current_phase = std::move(arg);
    return Init_ChargeBattery_Feedback_current_charge_level(msg_);
  }

private:
  ::day2::action::ChargeBattery_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_Feedback>()
{
  return day2::action::builder::Init_ChargeBattery_Feedback_current_phase();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_SendGoal_Request_goal
{
public:
  explicit Init_ChargeBattery_SendGoal_Request_goal(::day2::action::ChargeBattery_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_SendGoal_Request goal(::day2::action::ChargeBattery_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_SendGoal_Request msg_;
};

class Init_ChargeBattery_SendGoal_Request_goal_id
{
public:
  Init_ChargeBattery_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_SendGoal_Request_goal goal_id(::day2::action::ChargeBattery_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeBattery_SendGoal_Request_goal(msg_);
  }

private:
  ::day2::action::ChargeBattery_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_SendGoal_Request>()
{
  return day2::action::builder::Init_ChargeBattery_SendGoal_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_SendGoal_Response_stamp
{
public:
  explicit Init_ChargeBattery_SendGoal_Response_stamp(::day2::action::ChargeBattery_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_SendGoal_Response stamp(::day2::action::ChargeBattery_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_SendGoal_Response msg_;
};

class Init_ChargeBattery_SendGoal_Response_accepted
{
public:
  Init_ChargeBattery_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_SendGoal_Response_stamp accepted(::day2::action::ChargeBattery_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ChargeBattery_SendGoal_Response_stamp(msg_);
  }

private:
  ::day2::action::ChargeBattery_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_SendGoal_Response>()
{
  return day2::action::builder::Init_ChargeBattery_SendGoal_Response_accepted();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_SendGoal_Event_response
{
public:
  explicit Init_ChargeBattery_SendGoal_Event_response(::day2::action::ChargeBattery_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_SendGoal_Event response(::day2::action::ChargeBattery_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_SendGoal_Event msg_;
};

class Init_ChargeBattery_SendGoal_Event_request
{
public:
  explicit Init_ChargeBattery_SendGoal_Event_request(::day2::action::ChargeBattery_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_SendGoal_Event_response request(::day2::action::ChargeBattery_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChargeBattery_SendGoal_Event_response(msg_);
  }

private:
  ::day2::action::ChargeBattery_SendGoal_Event msg_;
};

class Init_ChargeBattery_SendGoal_Event_info
{
public:
  Init_ChargeBattery_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_SendGoal_Event_request info(::day2::action::ChargeBattery_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChargeBattery_SendGoal_Event_request(msg_);
  }

private:
  ::day2::action::ChargeBattery_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_SendGoal_Event>()
{
  return day2::action::builder::Init_ChargeBattery_SendGoal_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_GetResult_Request_goal_id
{
public:
  Init_ChargeBattery_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::day2::action::ChargeBattery_GetResult_Request goal_id(::day2::action::ChargeBattery_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_GetResult_Request>()
{
  return day2::action::builder::Init_ChargeBattery_GetResult_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_GetResult_Response_result
{
public:
  explicit Init_ChargeBattery_GetResult_Response_result(::day2::action::ChargeBattery_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_GetResult_Response result(::day2::action::ChargeBattery_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_GetResult_Response msg_;
};

class Init_ChargeBattery_GetResult_Response_status
{
public:
  Init_ChargeBattery_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_GetResult_Response_result status(::day2::action::ChargeBattery_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ChargeBattery_GetResult_Response_result(msg_);
  }

private:
  ::day2::action::ChargeBattery_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_GetResult_Response>()
{
  return day2::action::builder::Init_ChargeBattery_GetResult_Response_status();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_GetResult_Event_response
{
public:
  explicit Init_ChargeBattery_GetResult_Event_response(::day2::action::ChargeBattery_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_GetResult_Event response(::day2::action::ChargeBattery_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_GetResult_Event msg_;
};

class Init_ChargeBattery_GetResult_Event_request
{
public:
  explicit Init_ChargeBattery_GetResult_Event_request(::day2::action::ChargeBattery_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_GetResult_Event_response request(::day2::action::ChargeBattery_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChargeBattery_GetResult_Event_response(msg_);
  }

private:
  ::day2::action::ChargeBattery_GetResult_Event msg_;
};

class Init_ChargeBattery_GetResult_Event_info
{
public:
  Init_ChargeBattery_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_GetResult_Event_request info(::day2::action::ChargeBattery_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChargeBattery_GetResult_Event_request(msg_);
  }

private:
  ::day2::action::ChargeBattery_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_GetResult_Event>()
{
  return day2::action::builder::Init_ChargeBattery_GetResult_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_FeedbackMessage_feedback
{
public:
  explicit Init_ChargeBattery_FeedbackMessage_feedback(::day2::action::ChargeBattery_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::day2::action::ChargeBattery_FeedbackMessage feedback(::day2::action::ChargeBattery_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::ChargeBattery_FeedbackMessage msg_;
};

class Init_ChargeBattery_FeedbackMessage_goal_id
{
public:
  Init_ChargeBattery_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_FeedbackMessage_feedback goal_id(::day2::action::ChargeBattery_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeBattery_FeedbackMessage_feedback(msg_);
  }

private:
  ::day2::action::ChargeBattery_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::ChargeBattery_FeedbackMessage>()
{
  return day2::action::builder::Init_ChargeBattery_FeedbackMessage_goal_id();
}

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__CHARGE_BATTERY__BUILDER_HPP_
