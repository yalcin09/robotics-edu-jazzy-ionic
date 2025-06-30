// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:action/ChargeBattery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/charge_battery.hpp"


#ifndef DAY2__ACTION__DETAIL__CHARGE_BATTERY__STRUCT_HPP_
#define DAY2__ACTION__DETAIL__CHARGE_BATTERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'charging_station_location'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_Goal __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_Goal __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_Goal_
{
  using Type = ChargeBattery_Goal_<ContainerAllocator>;

  explicit ChargeBattery_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : charging_station_location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_charge_level = 0.0f;
      this->charging_mode = "";
      this->return_to_dock = false;
      this->max_charging_time = 0.0f;
      this->max_charging_current = 0.0f;
      this->max_charging_voltage = 0.0f;
      this->enable_temperature_monitoring = false;
      this->max_battery_temperature = 0.0f;
      this->enable_safety_monitoring = false;
      this->emergency_stop_voltage = 0.0f;
      this->emergency_stop_temperature = 0.0f;
      this->auto_disconnect_when_full = false;
      this->navigate_to_charger = false;
      this->docking_precision = 0.0f;
      this->docking_approach = "";
    }
  }

  explicit ChargeBattery_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : charging_mode(_alloc),
    charging_station_location(_alloc, _init),
    docking_approach(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_charge_level = 0.0f;
      this->charging_mode = "";
      this->return_to_dock = false;
      this->max_charging_time = 0.0f;
      this->max_charging_current = 0.0f;
      this->max_charging_voltage = 0.0f;
      this->enable_temperature_monitoring = false;
      this->max_battery_temperature = 0.0f;
      this->enable_safety_monitoring = false;
      this->emergency_stop_voltage = 0.0f;
      this->emergency_stop_temperature = 0.0f;
      this->auto_disconnect_when_full = false;
      this->navigate_to_charger = false;
      this->docking_precision = 0.0f;
      this->docking_approach = "";
    }
  }

  // field types and members
  using _target_charge_level_type =
    float;
  _target_charge_level_type target_charge_level;
  using _charging_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _charging_mode_type charging_mode;
  using _return_to_dock_type =
    bool;
  _return_to_dock_type return_to_dock;
  using _charging_station_location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _charging_station_location_type charging_station_location;
  using _max_charging_time_type =
    float;
  _max_charging_time_type max_charging_time;
  using _max_charging_current_type =
    float;
  _max_charging_current_type max_charging_current;
  using _max_charging_voltage_type =
    float;
  _max_charging_voltage_type max_charging_voltage;
  using _enable_temperature_monitoring_type =
    bool;
  _enable_temperature_monitoring_type enable_temperature_monitoring;
  using _max_battery_temperature_type =
    float;
  _max_battery_temperature_type max_battery_temperature;
  using _enable_safety_monitoring_type =
    bool;
  _enable_safety_monitoring_type enable_safety_monitoring;
  using _emergency_stop_voltage_type =
    float;
  _emergency_stop_voltage_type emergency_stop_voltage;
  using _emergency_stop_temperature_type =
    float;
  _emergency_stop_temperature_type emergency_stop_temperature;
  using _auto_disconnect_when_full_type =
    bool;
  _auto_disconnect_when_full_type auto_disconnect_when_full;
  using _navigate_to_charger_type =
    bool;
  _navigate_to_charger_type navigate_to_charger;
  using _docking_precision_type =
    float;
  _docking_precision_type docking_precision;
  using _docking_approach_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _docking_approach_type docking_approach;

  // setters for named parameter idiom
  Type & set__target_charge_level(
    const float & _arg)
  {
    this->target_charge_level = _arg;
    return *this;
  }
  Type & set__charging_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->charging_mode = _arg;
    return *this;
  }
  Type & set__return_to_dock(
    const bool & _arg)
  {
    this->return_to_dock = _arg;
    return *this;
  }
  Type & set__charging_station_location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->charging_station_location = _arg;
    return *this;
  }
  Type & set__max_charging_time(
    const float & _arg)
  {
    this->max_charging_time = _arg;
    return *this;
  }
  Type & set__max_charging_current(
    const float & _arg)
  {
    this->max_charging_current = _arg;
    return *this;
  }
  Type & set__max_charging_voltage(
    const float & _arg)
  {
    this->max_charging_voltage = _arg;
    return *this;
  }
  Type & set__enable_temperature_monitoring(
    const bool & _arg)
  {
    this->enable_temperature_monitoring = _arg;
    return *this;
  }
  Type & set__max_battery_temperature(
    const float & _arg)
  {
    this->max_battery_temperature = _arg;
    return *this;
  }
  Type & set__enable_safety_monitoring(
    const bool & _arg)
  {
    this->enable_safety_monitoring = _arg;
    return *this;
  }
  Type & set__emergency_stop_voltage(
    const float & _arg)
  {
    this->emergency_stop_voltage = _arg;
    return *this;
  }
  Type & set__emergency_stop_temperature(
    const float & _arg)
  {
    this->emergency_stop_temperature = _arg;
    return *this;
  }
  Type & set__auto_disconnect_when_full(
    const bool & _arg)
  {
    this->auto_disconnect_when_full = _arg;
    return *this;
  }
  Type & set__navigate_to_charger(
    const bool & _arg)
  {
    this->navigate_to_charger = _arg;
    return *this;
  }
  Type & set__docking_precision(
    const float & _arg)
  {
    this->docking_precision = _arg;
    return *this;
  }
  Type & set__docking_approach(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->docking_approach = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_Goal
    std::shared_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_Goal
    std::shared_ptr<day2::action::ChargeBattery_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_Goal_ & other) const
  {
    if (this->target_charge_level != other.target_charge_level) {
      return false;
    }
    if (this->charging_mode != other.charging_mode) {
      return false;
    }
    if (this->return_to_dock != other.return_to_dock) {
      return false;
    }
    if (this->charging_station_location != other.charging_station_location) {
      return false;
    }
    if (this->max_charging_time != other.max_charging_time) {
      return false;
    }
    if (this->max_charging_current != other.max_charging_current) {
      return false;
    }
    if (this->max_charging_voltage != other.max_charging_voltage) {
      return false;
    }
    if (this->enable_temperature_monitoring != other.enable_temperature_monitoring) {
      return false;
    }
    if (this->max_battery_temperature != other.max_battery_temperature) {
      return false;
    }
    if (this->enable_safety_monitoring != other.enable_safety_monitoring) {
      return false;
    }
    if (this->emergency_stop_voltage != other.emergency_stop_voltage) {
      return false;
    }
    if (this->emergency_stop_temperature != other.emergency_stop_temperature) {
      return false;
    }
    if (this->auto_disconnect_when_full != other.auto_disconnect_when_full) {
      return false;
    }
    if (this->navigate_to_charger != other.navigate_to_charger) {
      return false;
    }
    if (this->docking_precision != other.docking_precision) {
      return false;
    }
    if (this->docking_approach != other.docking_approach) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_Goal_

// alias to use template instance with default allocator
using ChargeBattery_Goal =
  day2::action::ChargeBattery_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'final_docked_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_Result __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_Result __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_Result_
{
  using Type = ChargeBattery_Result_<ContainerAllocator>;

  explicit ChargeBattery_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final_docked_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->final_charge_level = 0.0f;
      this->total_charging_time = 0.0f;
      this->energy_transferred = 0.0f;
      this->average_charging_power = 0.0f;
      this->charging_efficiency = 0.0f;
      this->max_temperature_reached = 0.0f;
      this->battery_health_score = 0.0f;
      this->charging_cycles_count = 0ul;
      this->estimated_battery_lifespan = 0.0f;
      this->docking_successful = false;
      this->docking_time = 0.0f;
      this->navigation_time = 0.0f;
      this->error_code = 0ul;
    }
  }

  explicit ChargeBattery_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_message(_alloc),
    final_docked_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->final_charge_level = 0.0f;
      this->total_charging_time = 0.0f;
      this->energy_transferred = 0.0f;
      this->average_charging_power = 0.0f;
      this->charging_efficiency = 0.0f;
      this->max_temperature_reached = 0.0f;
      this->battery_health_score = 0.0f;
      this->charging_cycles_count = 0ul;
      this->estimated_battery_lifespan = 0.0f;
      this->docking_successful = false;
      this->docking_time = 0.0f;
      this->navigation_time = 0.0f;
      this->error_code = 0ul;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _result_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_message_type result_message;
  using _final_charge_level_type =
    float;
  _final_charge_level_type final_charge_level;
  using _total_charging_time_type =
    float;
  _total_charging_time_type total_charging_time;
  using _energy_transferred_type =
    float;
  _energy_transferred_type energy_transferred;
  using _average_charging_power_type =
    float;
  _average_charging_power_type average_charging_power;
  using _charging_efficiency_type =
    float;
  _charging_efficiency_type charging_efficiency;
  using _max_temperature_reached_type =
    float;
  _max_temperature_reached_type max_temperature_reached;
  using _battery_health_score_type =
    float;
  _battery_health_score_type battery_health_score;
  using _charging_cycles_count_type =
    uint32_t;
  _charging_cycles_count_type charging_cycles_count;
  using _estimated_battery_lifespan_type =
    float;
  _estimated_battery_lifespan_type estimated_battery_lifespan;
  using _docking_successful_type =
    bool;
  _docking_successful_type docking_successful;
  using _docking_time_type =
    float;
  _docking_time_type docking_time;
  using _navigation_time_type =
    float;
  _navigation_time_type navigation_time;
  using _final_docked_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _final_docked_position_type final_docked_position;
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__result_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_message = _arg;
    return *this;
  }
  Type & set__final_charge_level(
    const float & _arg)
  {
    this->final_charge_level = _arg;
    return *this;
  }
  Type & set__total_charging_time(
    const float & _arg)
  {
    this->total_charging_time = _arg;
    return *this;
  }
  Type & set__energy_transferred(
    const float & _arg)
  {
    this->energy_transferred = _arg;
    return *this;
  }
  Type & set__average_charging_power(
    const float & _arg)
  {
    this->average_charging_power = _arg;
    return *this;
  }
  Type & set__charging_efficiency(
    const float & _arg)
  {
    this->charging_efficiency = _arg;
    return *this;
  }
  Type & set__max_temperature_reached(
    const float & _arg)
  {
    this->max_temperature_reached = _arg;
    return *this;
  }
  Type & set__battery_health_score(
    const float & _arg)
  {
    this->battery_health_score = _arg;
    return *this;
  }
  Type & set__charging_cycles_count(
    const uint32_t & _arg)
  {
    this->charging_cycles_count = _arg;
    return *this;
  }
  Type & set__estimated_battery_lifespan(
    const float & _arg)
  {
    this->estimated_battery_lifespan = _arg;
    return *this;
  }
  Type & set__docking_successful(
    const bool & _arg)
  {
    this->docking_successful = _arg;
    return *this;
  }
  Type & set__docking_time(
    const float & _arg)
  {
    this->docking_time = _arg;
    return *this;
  }
  Type & set__navigation_time(
    const float & _arg)
  {
    this->navigation_time = _arg;
    return *this;
  }
  Type & set__final_docked_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->final_docked_position = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ERROR_NONE =
    0u;
  static constexpr uint32_t ERROR_CHARGING_STATION_NOT_FOUND =
    1u;
  static constexpr uint32_t ERROR_DOCKING_FAILED =
    2u;
  static constexpr uint32_t ERROR_CHARGER_CONNECTION_FAILED =
    3u;
  static constexpr uint32_t ERROR_OVERVOLTAGE =
    4u;
  static constexpr uint32_t ERROR_OVERCURRENT =
    5u;
  static constexpr uint32_t ERROR_OVERTEMPERATURE =
    6u;
  static constexpr uint32_t ERROR_CHARGING_TIMEOUT =
    7u;
  static constexpr uint32_t ERROR_BATTERY_FAULT =
    8u;

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_Result
    std::shared_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_Result
    std::shared_ptr<day2::action::ChargeBattery_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result_message != other.result_message) {
      return false;
    }
    if (this->final_charge_level != other.final_charge_level) {
      return false;
    }
    if (this->total_charging_time != other.total_charging_time) {
      return false;
    }
    if (this->energy_transferred != other.energy_transferred) {
      return false;
    }
    if (this->average_charging_power != other.average_charging_power) {
      return false;
    }
    if (this->charging_efficiency != other.charging_efficiency) {
      return false;
    }
    if (this->max_temperature_reached != other.max_temperature_reached) {
      return false;
    }
    if (this->battery_health_score != other.battery_health_score) {
      return false;
    }
    if (this->charging_cycles_count != other.charging_cycles_count) {
      return false;
    }
    if (this->estimated_battery_lifespan != other.estimated_battery_lifespan) {
      return false;
    }
    if (this->docking_successful != other.docking_successful) {
      return false;
    }
    if (this->docking_time != other.docking_time) {
      return false;
    }
    if (this->navigation_time != other.navigation_time) {
      return false;
    }
    if (this->final_docked_position != other.final_docked_position) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_Result_

// alias to use template instance with default allocator
using ChargeBattery_Result =
  day2::action::ChargeBattery_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_CHARGING_STATION_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_DOCKING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_CHARGER_CONNECTION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_OVERVOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_OVERCURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_OVERTEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_CHARGING_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargeBattery_Result_<ContainerAllocator>::ERROR_BATTERY_FAULT;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'current_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'charging_start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_Feedback __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_Feedback_
{
  using Type = ChargeBattery_Feedback_<ContainerAllocator>;

  explicit ChargeBattery_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_init),
    charging_start_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = "";
      this->current_charge_level = 0.0f;
      this->charging_progress_percentage = 0.0f;
      this->estimated_time_to_completion = 0.0f;
      this->current_voltage = 0.0f;
      this->current_amperage = 0.0f;
      this->current_power = 0.0f;
      this->current_temperature = 0.0f;
      this->charging_rate = 0.0f;
      this->charging_state = "";
      this->time_elapsed = 0.0f;
      this->distance_to_charger = 0.0f;
      this->charger_in_sight = false;
      this->docking_initiated = false;
      this->docking_alignment_error = 0.0f;
      this->connection_established = false;
      this->temperature_warning = false;
      this->voltage_warning = false;
      this->current_warning = false;
      this->charger_efficiency = 0.0f;
      this->charger_connected = false;
    }
  }

  explicit ChargeBattery_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_phase(_alloc),
    charging_state(_alloc),
    current_position(_alloc, _init),
    charging_start_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = "";
      this->current_charge_level = 0.0f;
      this->charging_progress_percentage = 0.0f;
      this->estimated_time_to_completion = 0.0f;
      this->current_voltage = 0.0f;
      this->current_amperage = 0.0f;
      this->current_power = 0.0f;
      this->current_temperature = 0.0f;
      this->charging_rate = 0.0f;
      this->charging_state = "";
      this->time_elapsed = 0.0f;
      this->distance_to_charger = 0.0f;
      this->charger_in_sight = false;
      this->docking_initiated = false;
      this->docking_alignment_error = 0.0f;
      this->connection_established = false;
      this->temperature_warning = false;
      this->voltage_warning = false;
      this->current_warning = false;
      this->charger_efficiency = 0.0f;
      this->charger_connected = false;
    }
  }

  // field types and members
  using _current_phase_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_phase_type current_phase;
  using _current_charge_level_type =
    float;
  _current_charge_level_type current_charge_level;
  using _charging_progress_percentage_type =
    float;
  _charging_progress_percentage_type charging_progress_percentage;
  using _estimated_time_to_completion_type =
    float;
  _estimated_time_to_completion_type estimated_time_to_completion;
  using _current_voltage_type =
    float;
  _current_voltage_type current_voltage;
  using _current_amperage_type =
    float;
  _current_amperage_type current_amperage;
  using _current_power_type =
    float;
  _current_power_type current_power;
  using _current_temperature_type =
    float;
  _current_temperature_type current_temperature;
  using _charging_rate_type =
    float;
  _charging_rate_type charging_rate;
  using _charging_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _charging_state_type charging_state;
  using _time_elapsed_type =
    float;
  _time_elapsed_type time_elapsed;
  using _current_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _current_position_type current_position;
  using _distance_to_charger_type =
    float;
  _distance_to_charger_type distance_to_charger;
  using _charger_in_sight_type =
    bool;
  _charger_in_sight_type charger_in_sight;
  using _docking_initiated_type =
    bool;
  _docking_initiated_type docking_initiated;
  using _docking_alignment_error_type =
    float;
  _docking_alignment_error_type docking_alignment_error;
  using _connection_established_type =
    bool;
  _connection_established_type connection_established;
  using _temperature_warning_type =
    bool;
  _temperature_warning_type temperature_warning;
  using _voltage_warning_type =
    bool;
  _voltage_warning_type voltage_warning;
  using _current_warning_type =
    bool;
  _current_warning_type current_warning;
  using _active_warnings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_warnings_type active_warnings;
  using _charger_efficiency_type =
    float;
  _charger_efficiency_type charger_efficiency;
  using _charger_connected_type =
    bool;
  _charger_connected_type charger_connected;
  using _charging_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _charging_start_time_type charging_start_time;

  // setters for named parameter idiom
  Type & set__current_phase(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_phase = _arg;
    return *this;
  }
  Type & set__current_charge_level(
    const float & _arg)
  {
    this->current_charge_level = _arg;
    return *this;
  }
  Type & set__charging_progress_percentage(
    const float & _arg)
  {
    this->charging_progress_percentage = _arg;
    return *this;
  }
  Type & set__estimated_time_to_completion(
    const float & _arg)
  {
    this->estimated_time_to_completion = _arg;
    return *this;
  }
  Type & set__current_voltage(
    const float & _arg)
  {
    this->current_voltage = _arg;
    return *this;
  }
  Type & set__current_amperage(
    const float & _arg)
  {
    this->current_amperage = _arg;
    return *this;
  }
  Type & set__current_power(
    const float & _arg)
  {
    this->current_power = _arg;
    return *this;
  }
  Type & set__current_temperature(
    const float & _arg)
  {
    this->current_temperature = _arg;
    return *this;
  }
  Type & set__charging_rate(
    const float & _arg)
  {
    this->charging_rate = _arg;
    return *this;
  }
  Type & set__charging_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->charging_state = _arg;
    return *this;
  }
  Type & set__time_elapsed(
    const float & _arg)
  {
    this->time_elapsed = _arg;
    return *this;
  }
  Type & set__current_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__distance_to_charger(
    const float & _arg)
  {
    this->distance_to_charger = _arg;
    return *this;
  }
  Type & set__charger_in_sight(
    const bool & _arg)
  {
    this->charger_in_sight = _arg;
    return *this;
  }
  Type & set__docking_initiated(
    const bool & _arg)
  {
    this->docking_initiated = _arg;
    return *this;
  }
  Type & set__docking_alignment_error(
    const float & _arg)
  {
    this->docking_alignment_error = _arg;
    return *this;
  }
  Type & set__connection_established(
    const bool & _arg)
  {
    this->connection_established = _arg;
    return *this;
  }
  Type & set__temperature_warning(
    const bool & _arg)
  {
    this->temperature_warning = _arg;
    return *this;
  }
  Type & set__voltage_warning(
    const bool & _arg)
  {
    this->voltage_warning = _arg;
    return *this;
  }
  Type & set__current_warning(
    const bool & _arg)
  {
    this->current_warning = _arg;
    return *this;
  }
  Type & set__active_warnings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_warnings = _arg;
    return *this;
  }
  Type & set__charger_efficiency(
    const float & _arg)
  {
    this->charger_efficiency = _arg;
    return *this;
  }
  Type & set__charger_connected(
    const bool & _arg)
  {
    this->charger_connected = _arg;
    return *this;
  }
  Type & set__charging_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->charging_start_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_Feedback
    std::shared_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_Feedback
    std::shared_ptr<day2::action::ChargeBattery_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_Feedback_ & other) const
  {
    if (this->current_phase != other.current_phase) {
      return false;
    }
    if (this->current_charge_level != other.current_charge_level) {
      return false;
    }
    if (this->charging_progress_percentage != other.charging_progress_percentage) {
      return false;
    }
    if (this->estimated_time_to_completion != other.estimated_time_to_completion) {
      return false;
    }
    if (this->current_voltage != other.current_voltage) {
      return false;
    }
    if (this->current_amperage != other.current_amperage) {
      return false;
    }
    if (this->current_power != other.current_power) {
      return false;
    }
    if (this->current_temperature != other.current_temperature) {
      return false;
    }
    if (this->charging_rate != other.charging_rate) {
      return false;
    }
    if (this->charging_state != other.charging_state) {
      return false;
    }
    if (this->time_elapsed != other.time_elapsed) {
      return false;
    }
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->distance_to_charger != other.distance_to_charger) {
      return false;
    }
    if (this->charger_in_sight != other.charger_in_sight) {
      return false;
    }
    if (this->docking_initiated != other.docking_initiated) {
      return false;
    }
    if (this->docking_alignment_error != other.docking_alignment_error) {
      return false;
    }
    if (this->connection_established != other.connection_established) {
      return false;
    }
    if (this->temperature_warning != other.temperature_warning) {
      return false;
    }
    if (this->voltage_warning != other.voltage_warning) {
      return false;
    }
    if (this->current_warning != other.current_warning) {
      return false;
    }
    if (this->active_warnings != other.active_warnings) {
      return false;
    }
    if (this->charger_efficiency != other.charger_efficiency) {
      return false;
    }
    if (this->charger_connected != other.charger_connected) {
      return false;
    }
    if (this->charging_start_time != other.charging_start_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_Feedback_

// alias to use template instance with default allocator
using ChargeBattery_Feedback =
  day2::action::ChargeBattery_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "day2/action/detail/charge_battery__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_SendGoal_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_SendGoal_Request_
{
  using Type = ChargeBattery_SendGoal_Request_<ContainerAllocator>;

  explicit ChargeBattery_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ChargeBattery_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    day2::action::ChargeBattery_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const day2::action::ChargeBattery_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_SendGoal_Request
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_SendGoal_Request
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_SendGoal_Request_

// alias to use template instance with default allocator
using ChargeBattery_SendGoal_Request =
  day2::action::ChargeBattery_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_SendGoal_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_SendGoal_Response_
{
  using Type = ChargeBattery_SendGoal_Response_<ContainerAllocator>;

  explicit ChargeBattery_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ChargeBattery_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_SendGoal_Response
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_SendGoal_Response
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_SendGoal_Response_

// alias to use template instance with default allocator
using ChargeBattery_SendGoal_Response =
  day2::action::ChargeBattery_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_SendGoal_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_SendGoal_Event_
{
  using Type = ChargeBattery_SendGoal_Event_<ContainerAllocator>;

  explicit ChargeBattery_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ChargeBattery_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_SendGoal_Event
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_SendGoal_Event
    std::shared_ptr<day2::action::ChargeBattery_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_SendGoal_Event_

// alias to use template instance with default allocator
using ChargeBattery_SendGoal_Event =
  day2::action::ChargeBattery_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct ChargeBattery_SendGoal
{
  using Request = day2::action::ChargeBattery_SendGoal_Request;
  using Response = day2::action::ChargeBattery_SendGoal_Response;
  using Event = day2::action::ChargeBattery_SendGoal_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_GetResult_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_GetResult_Request_
{
  using Type = ChargeBattery_GetResult_Request_<ContainerAllocator>;

  explicit ChargeBattery_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ChargeBattery_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_GetResult_Request
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_GetResult_Request
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_GetResult_Request_

// alias to use template instance with default allocator
using ChargeBattery_GetResult_Request =
  day2::action::ChargeBattery_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/charge_battery__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_GetResult_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_GetResult_Response_
{
  using Type = ChargeBattery_GetResult_Response_<ContainerAllocator>;

  explicit ChargeBattery_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ChargeBattery_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    day2::action::ChargeBattery_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const day2::action::ChargeBattery_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_GetResult_Response
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_GetResult_Response
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_GetResult_Response_

// alias to use template instance with default allocator
using ChargeBattery_GetResult_Response =
  day2::action::ChargeBattery_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_GetResult_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_GetResult_Event_
{
  using Type = ChargeBattery_GetResult_Event_<ContainerAllocator>;

  explicit ChargeBattery_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ChargeBattery_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::ChargeBattery_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_GetResult_Event
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_GetResult_Event
    std::shared_ptr<day2::action::ChargeBattery_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_GetResult_Event_

// alias to use template instance with default allocator
using ChargeBattery_GetResult_Event =
  day2::action::ChargeBattery_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct ChargeBattery_GetResult
{
  using Request = day2::action::ChargeBattery_GetResult_Request;
  using Response = day2::action::ChargeBattery_GetResult_Response;
  using Event = day2::action::ChargeBattery_GetResult_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "day2/action/detail/charge_battery__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__ChargeBattery_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__ChargeBattery_FeedbackMessage __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_FeedbackMessage_
{
  using Type = ChargeBattery_FeedbackMessage_<ContainerAllocator>;

  explicit ChargeBattery_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ChargeBattery_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    day2::action::ChargeBattery_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const day2::action::ChargeBattery_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__ChargeBattery_FeedbackMessage
    std::shared_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__ChargeBattery_FeedbackMessage
    std::shared_ptr<day2::action::ChargeBattery_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_FeedbackMessage_

// alias to use template instance with default allocator
using ChargeBattery_FeedbackMessage =
  day2::action::ChargeBattery_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace day2
{

namespace action
{

struct ChargeBattery
{
  /// The goal message defined in the action definition.
  using Goal = day2::action::ChargeBattery_Goal;
  /// The result message defined in the action definition.
  using Result = day2::action::ChargeBattery_Result;
  /// The feedback message defined in the action definition.
  using Feedback = day2::action::ChargeBattery_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = day2::action::ChargeBattery_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = day2::action::ChargeBattery_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = day2::action::ChargeBattery_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ChargeBattery ChargeBattery;

}  // namespace action

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__CHARGE_BATTERY__STRUCT_HPP_
