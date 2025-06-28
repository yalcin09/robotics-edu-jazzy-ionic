// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:msg/RobotArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/robot_array.hpp"


#ifndef DAY2__MSG__DETAIL__ROBOT_ARRAY__STRUCT_HPP_
#define DAY2__MSG__DETAIL__ROBOT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'robots'
#include "day2/msg/detail/robot_status__struct.hpp"
// Member 'workspace_min'
// Member 'workspace_max'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'emergency_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__msg__RobotArray __attribute__((deprecated))
#else
# define DEPRECATED__day2__msg__RobotArray __declspec(deprecated)
#endif

namespace day2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotArray_
{
  using Type = RobotArray_<ContainerAllocator>;

  explicit RobotArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    workspace_min(_init),
    workspace_max(_init),
    emergency_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->fleet_id = 0ul;
      this->coordinator_node = "";
      this->total_robots = 0ul;
      this->active_robots = 0ul;
      this->idle_robots = 0ul;
      this->charging_robots = 0ul;
      this->error_robots = 0ul;
      this->fleet_status = 0;
      this->average_battery_level = 0.0f;
      this->total_distance_traveled = 0.0f;
      this->average_speed = 0.0f;
      this->completed_tasks = 0ul;
      this->pending_tasks = 0ul;
      this->workspace_name = "";
      this->emergency_stop = false;
      this->emergency_reason = "";
      this->system_health_score = 0.0f;
      this->update_frequency_hz = 0.0f;
    }
  }

  explicit RobotArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fleet_name(_alloc),
    coordinator_node(_alloc),
    workspace_min(_alloc, _init),
    workspace_max(_alloc, _init),
    workspace_name(_alloc),
    emergency_reason(_alloc),
    emergency_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->fleet_id = 0ul;
      this->coordinator_node = "";
      this->total_robots = 0ul;
      this->active_robots = 0ul;
      this->idle_robots = 0ul;
      this->charging_robots = 0ul;
      this->error_robots = 0ul;
      this->fleet_status = 0;
      this->average_battery_level = 0.0f;
      this->total_distance_traveled = 0.0f;
      this->average_speed = 0.0f;
      this->completed_tasks = 0ul;
      this->pending_tasks = 0ul;
      this->workspace_name = "";
      this->emergency_stop = false;
      this->emergency_reason = "";
      this->system_health_score = 0.0f;
      this->update_frequency_hz = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _fleet_id_type =
    uint32_t;
  _fleet_id_type fleet_id;
  using _coordinator_node_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _coordinator_node_type coordinator_node;
  using _robots_type =
    std::vector<day2::msg::RobotStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::msg::RobotStatus_<ContainerAllocator>>>;
  _robots_type robots;
  using _total_robots_type =
    uint32_t;
  _total_robots_type total_robots;
  using _active_robots_type =
    uint32_t;
  _active_robots_type active_robots;
  using _idle_robots_type =
    uint32_t;
  _idle_robots_type idle_robots;
  using _charging_robots_type =
    uint32_t;
  _charging_robots_type charging_robots;
  using _error_robots_type =
    uint32_t;
  _error_robots_type error_robots;
  using _fleet_status_type =
    uint8_t;
  _fleet_status_type fleet_status;
  using _average_battery_level_type =
    float;
  _average_battery_level_type average_battery_level;
  using _total_distance_traveled_type =
    float;
  _total_distance_traveled_type total_distance_traveled;
  using _average_speed_type =
    float;
  _average_speed_type average_speed;
  using _completed_tasks_type =
    uint32_t;
  _completed_tasks_type completed_tasks;
  using _pending_tasks_type =
    uint32_t;
  _pending_tasks_type pending_tasks;
  using _workspace_min_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _workspace_min_type workspace_min;
  using _workspace_max_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _workspace_max_type workspace_max;
  using _workspace_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _workspace_name_type workspace_name;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _emergency_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _emergency_reason_type emergency_reason;
  using _emergency_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _emergency_timestamp_type emergency_timestamp;
  using _system_health_score_type =
    float;
  _system_health_score_type system_health_score;
  using _critical_warnings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _critical_warnings_type critical_warnings;
  using _system_messages_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _system_messages_type system_messages;
  using _update_frequency_hz_type =
    float;
  _update_frequency_hz_type update_frequency_hz;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__fleet_id(
    const uint32_t & _arg)
  {
    this->fleet_id = _arg;
    return *this;
  }
  Type & set__coordinator_node(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->coordinator_node = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<day2::msg::RobotStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::msg::RobotStatus_<ContainerAllocator>>> & _arg)
  {
    this->robots = _arg;
    return *this;
  }
  Type & set__total_robots(
    const uint32_t & _arg)
  {
    this->total_robots = _arg;
    return *this;
  }
  Type & set__active_robots(
    const uint32_t & _arg)
  {
    this->active_robots = _arg;
    return *this;
  }
  Type & set__idle_robots(
    const uint32_t & _arg)
  {
    this->idle_robots = _arg;
    return *this;
  }
  Type & set__charging_robots(
    const uint32_t & _arg)
  {
    this->charging_robots = _arg;
    return *this;
  }
  Type & set__error_robots(
    const uint32_t & _arg)
  {
    this->error_robots = _arg;
    return *this;
  }
  Type & set__fleet_status(
    const uint8_t & _arg)
  {
    this->fleet_status = _arg;
    return *this;
  }
  Type & set__average_battery_level(
    const float & _arg)
  {
    this->average_battery_level = _arg;
    return *this;
  }
  Type & set__total_distance_traveled(
    const float & _arg)
  {
    this->total_distance_traveled = _arg;
    return *this;
  }
  Type & set__average_speed(
    const float & _arg)
  {
    this->average_speed = _arg;
    return *this;
  }
  Type & set__completed_tasks(
    const uint32_t & _arg)
  {
    this->completed_tasks = _arg;
    return *this;
  }
  Type & set__pending_tasks(
    const uint32_t & _arg)
  {
    this->pending_tasks = _arg;
    return *this;
  }
  Type & set__workspace_min(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->workspace_min = _arg;
    return *this;
  }
  Type & set__workspace_max(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->workspace_max = _arg;
    return *this;
  }
  Type & set__workspace_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->workspace_name = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__emergency_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->emergency_reason = _arg;
    return *this;
  }
  Type & set__emergency_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->emergency_timestamp = _arg;
    return *this;
  }
  Type & set__system_health_score(
    const float & _arg)
  {
    this->system_health_score = _arg;
    return *this;
  }
  Type & set__critical_warnings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->critical_warnings = _arg;
    return *this;
  }
  Type & set__system_messages(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->system_messages = _arg;
    return *this;
  }
  Type & set__update_frequency_hz(
    const float & _arg)
  {
    this->update_frequency_hz = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FLEET_IDLE =
    0u;
  static constexpr uint8_t FLEET_ACTIVE =
    1u;
  static constexpr uint8_t FLEET_EMERGENCY =
    2u;
  static constexpr uint8_t FLEET_MAINTENANCE =
    3u;

  // pointer types
  using RawPtr =
    day2::msg::RobotArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::msg::RobotArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::msg::RobotArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::msg::RobotArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::msg::RobotArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::msg::RobotArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::msg::RobotArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::msg::RobotArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::msg::RobotArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::msg::RobotArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__msg__RobotArray
    std::shared_ptr<day2::msg::RobotArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__msg__RobotArray
    std::shared_ptr<day2::msg::RobotArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->fleet_id != other.fleet_id) {
      return false;
    }
    if (this->coordinator_node != other.coordinator_node) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    if (this->total_robots != other.total_robots) {
      return false;
    }
    if (this->active_robots != other.active_robots) {
      return false;
    }
    if (this->idle_robots != other.idle_robots) {
      return false;
    }
    if (this->charging_robots != other.charging_robots) {
      return false;
    }
    if (this->error_robots != other.error_robots) {
      return false;
    }
    if (this->fleet_status != other.fleet_status) {
      return false;
    }
    if (this->average_battery_level != other.average_battery_level) {
      return false;
    }
    if (this->total_distance_traveled != other.total_distance_traveled) {
      return false;
    }
    if (this->average_speed != other.average_speed) {
      return false;
    }
    if (this->completed_tasks != other.completed_tasks) {
      return false;
    }
    if (this->pending_tasks != other.pending_tasks) {
      return false;
    }
    if (this->workspace_min != other.workspace_min) {
      return false;
    }
    if (this->workspace_max != other.workspace_max) {
      return false;
    }
    if (this->workspace_name != other.workspace_name) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->emergency_reason != other.emergency_reason) {
      return false;
    }
    if (this->emergency_timestamp != other.emergency_timestamp) {
      return false;
    }
    if (this->system_health_score != other.system_health_score) {
      return false;
    }
    if (this->critical_warnings != other.critical_warnings) {
      return false;
    }
    if (this->system_messages != other.system_messages) {
      return false;
    }
    if (this->update_frequency_hz != other.update_frequency_hz) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotArray_

// alias to use template instance with default allocator
using RobotArray =
  day2::msg::RobotArray_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArray_<ContainerAllocator>::FLEET_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArray_<ContainerAllocator>::FLEET_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArray_<ContainerAllocator>::FLEET_EMERGENCY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArray_<ContainerAllocator>::FLEET_MAINTENANCE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace day2

#endif  // DAY2__MSG__DETAIL__ROBOT_ARRAY__STRUCT_HPP_
