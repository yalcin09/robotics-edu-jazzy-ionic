// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/navigate.hpp"


#ifndef DAY2__ACTION__DETAIL__NAVIGATE__STRUCT_HPP_
#define DAY2__ACTION__DETAIL__NAVIGATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_Goal __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_Goal __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_Goal_
{
  using Type = Navigate_Goal_<ContainerAllocator>;

  explicit Navigate_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0.0f;
      this->tolerance_distance = 0.0f;
      this->tolerance_angle = 0.0f;
      this->use_obstacle_avoidance = false;
      this->planning_algorithm = "";
      this->timeout_seconds = 0.0f;
      this->behavior_on_failure = "";
    }
  }

  explicit Navigate_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init),
    planning_algorithm(_alloc),
    behavior_on_failure(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0.0f;
      this->tolerance_distance = 0.0f;
      this->tolerance_angle = 0.0f;
      this->use_obstacle_avoidance = false;
      this->planning_algorithm = "";
      this->timeout_seconds = 0.0f;
      this->behavior_on_failure = "";
    }
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _max_speed_type =
    float;
  _max_speed_type max_speed;
  using _tolerance_distance_type =
    float;
  _tolerance_distance_type tolerance_distance;
  using _tolerance_angle_type =
    float;
  _tolerance_angle_type tolerance_angle;
  using _use_obstacle_avoidance_type =
    bool;
  _use_obstacle_avoidance_type use_obstacle_avoidance;
  using _planning_algorithm_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_algorithm_type planning_algorithm;
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _timeout_seconds_type =
    float;
  _timeout_seconds_type timeout_seconds;
  using _behavior_on_failure_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_on_failure_type behavior_on_failure;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__max_speed(
    const float & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }
  Type & set__tolerance_distance(
    const float & _arg)
  {
    this->tolerance_distance = _arg;
    return *this;
  }
  Type & set__tolerance_angle(
    const float & _arg)
  {
    this->tolerance_angle = _arg;
    return *this;
  }
  Type & set__use_obstacle_avoidance(
    const bool & _arg)
  {
    this->use_obstacle_avoidance = _arg;
    return *this;
  }
  Type & set__planning_algorithm(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_algorithm = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__timeout_seconds(
    const float & _arg)
  {
    this->timeout_seconds = _arg;
    return *this;
  }
  Type & set__behavior_on_failure(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_on_failure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::Navigate_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_Goal
    std::shared_ptr<day2::action::Navigate_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_Goal
    std::shared_ptr<day2::action::Navigate_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_Goal_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    if (this->tolerance_distance != other.tolerance_distance) {
      return false;
    }
    if (this->tolerance_angle != other.tolerance_angle) {
      return false;
    }
    if (this->use_obstacle_avoidance != other.use_obstacle_avoidance) {
      return false;
    }
    if (this->planning_algorithm != other.planning_algorithm) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->timeout_seconds != other.timeout_seconds) {
      return false;
    }
    if (this->behavior_on_failure != other.behavior_on_failure) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_Goal_

// alias to use template instance with default allocator
using Navigate_Goal =
  day2::action::Navigate_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'final_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_Result __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_Result __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_Result_
{
  using Type = Navigate_Result_<ContainerAllocator>;

  explicit Navigate_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->total_distance_traveled = 0.0f;
      this->total_time_elapsed = 0.0f;
      this->average_speed = 0.0f;
      this->obstacle_encounters = 0ul;
      this->path_efficiency = 0.0f;
      this->smoothness_score = 0.0f;
      this->replanning_count = 0ul;
      this->error_code = 0ul;
    }
  }

  explicit Navigate_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_message(_alloc),
    final_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->total_distance_traveled = 0.0f;
      this->total_time_elapsed = 0.0f;
      this->average_speed = 0.0f;
      this->obstacle_encounters = 0ul;
      this->path_efficiency = 0.0f;
      this->smoothness_score = 0.0f;
      this->replanning_count = 0ul;
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
  using _final_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _final_pose_type final_pose;
  using _total_distance_traveled_type =
    float;
  _total_distance_traveled_type total_distance_traveled;
  using _total_time_elapsed_type =
    float;
  _total_time_elapsed_type total_time_elapsed;
  using _average_speed_type =
    float;
  _average_speed_type average_speed;
  using _obstacle_encounters_type =
    uint32_t;
  _obstacle_encounters_type obstacle_encounters;
  using _warnings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _warnings_type warnings;
  using _path_efficiency_type =
    float;
  _path_efficiency_type path_efficiency;
  using _smoothness_score_type =
    float;
  _smoothness_score_type smoothness_score;
  using _replanning_count_type =
    uint32_t;
  _replanning_count_type replanning_count;
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
  Type & set__final_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->final_pose = _arg;
    return *this;
  }
  Type & set__total_distance_traveled(
    const float & _arg)
  {
    this->total_distance_traveled = _arg;
    return *this;
  }
  Type & set__total_time_elapsed(
    const float & _arg)
  {
    this->total_time_elapsed = _arg;
    return *this;
  }
  Type & set__average_speed(
    const float & _arg)
  {
    this->average_speed = _arg;
    return *this;
  }
  Type & set__obstacle_encounters(
    const uint32_t & _arg)
  {
    this->obstacle_encounters = _arg;
    return *this;
  }
  Type & set__warnings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->warnings = _arg;
    return *this;
  }
  Type & set__path_efficiency(
    const float & _arg)
  {
    this->path_efficiency = _arg;
    return *this;
  }
  Type & set__smoothness_score(
    const float & _arg)
  {
    this->smoothness_score = _arg;
    return *this;
  }
  Type & set__replanning_count(
    const uint32_t & _arg)
  {
    this->replanning_count = _arg;
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
  static constexpr uint32_t ERROR_TIMEOUT =
    1u;
  static constexpr uint32_t ERROR_OBSTACLE_STUCK =
    2u;
  static constexpr uint32_t ERROR_GOAL_UNREACHABLE =
    3u;
  static constexpr uint32_t ERROR_PLANNING_FAILED =
    4u;
  static constexpr uint32_t ERROR_HARDWARE_FAILURE =
    5u;
  static constexpr uint32_t ERROR_PREEMPTED =
    6u;

  // pointer types
  using RawPtr =
    day2::action::Navigate_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_Result
    std::shared_ptr<day2::action::Navigate_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_Result
    std::shared_ptr<day2::action::Navigate_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result_message != other.result_message) {
      return false;
    }
    if (this->final_pose != other.final_pose) {
      return false;
    }
    if (this->total_distance_traveled != other.total_distance_traveled) {
      return false;
    }
    if (this->total_time_elapsed != other.total_time_elapsed) {
      return false;
    }
    if (this->average_speed != other.average_speed) {
      return false;
    }
    if (this->obstacle_encounters != other.obstacle_encounters) {
      return false;
    }
    if (this->warnings != other.warnings) {
      return false;
    }
    if (this->path_efficiency != other.path_efficiency) {
      return false;
    }
    if (this->smoothness_score != other.smoothness_score) {
      return false;
    }
    if (this->replanning_count != other.replanning_count) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_Result_

// alias to use template instance with default allocator
using Navigate_Result =
  day2::action::Navigate_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Navigate_Result_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Navigate_Result_<ContainerAllocator>::ERROR_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Navigate_Result_<ContainerAllocator>::ERROR_OBSTACLE_STUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Navigate_Result_<ContainerAllocator>::ERROR_GOAL_UNREACHABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Navigate_Result_<ContainerAllocator>::ERROR_PLANNING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Navigate_Result_<ContainerAllocator>::ERROR_HARDWARE_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Navigate_Result_<ContainerAllocator>::ERROR_PREEMPTED;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'remaining_path'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'last_update_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_Feedback __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_Feedback_
{
  using Type = Navigate_Feedback_<ContainerAllocator>;

  explicit Navigate_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_init),
    last_update_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to_goal = 0.0f;
      this->estimated_time_remaining = 0.0f;
      this->current_speed = 0.0f;
      this->completion_percentage = 0.0f;
      this->current_waypoint_index = 0ul;
      this->current_behavior = "";
      this->obstacle_detected = false;
      this->current_status = "";
      this->path_deviation = 0.0f;
      this->battery_consumption_rate = 0.0f;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
    }
  }

  explicit Navigate_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_alloc, _init),
    current_behavior(_alloc),
    current_status(_alloc),
    last_update_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to_goal = 0.0f;
      this->estimated_time_remaining = 0.0f;
      this->current_speed = 0.0f;
      this->completion_percentage = 0.0f;
      this->current_waypoint_index = 0ul;
      this->current_behavior = "";
      this->obstacle_detected = false;
      this->current_status = "";
      this->path_deviation = 0.0f;
      this->battery_consumption_rate = 0.0f;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
    }
  }

  // field types and members
  using _current_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _distance_to_goal_type =
    float;
  _distance_to_goal_type distance_to_goal;
  using _estimated_time_remaining_type =
    float;
  _estimated_time_remaining_type estimated_time_remaining;
  using _current_speed_type =
    float;
  _current_speed_type current_speed;
  using _completion_percentage_type =
    float;
  _completion_percentage_type completion_percentage;
  using _remaining_path_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _remaining_path_type remaining_path;
  using _current_waypoint_index_type =
    uint32_t;
  _current_waypoint_index_type current_waypoint_index;
  using _current_behavior_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_behavior_type current_behavior;
  using _obstacle_detected_type =
    bool;
  _obstacle_detected_type obstacle_detected;
  using _current_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_status_type current_status;
  using _path_deviation_type =
    float;
  _path_deviation_type path_deviation;
  using _battery_consumption_rate_type =
    float;
  _battery_consumption_rate_type battery_consumption_rate;
  using _cpu_usage_type =
    float;
  _cpu_usage_type cpu_usage;
  using _memory_usage_type =
    float;
  _memory_usage_type memory_usage;
  using _last_update_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_update_time_type last_update_time;

  // setters for named parameter idiom
  Type & set__current_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__distance_to_goal(
    const float & _arg)
  {
    this->distance_to_goal = _arg;
    return *this;
  }
  Type & set__estimated_time_remaining(
    const float & _arg)
  {
    this->estimated_time_remaining = _arg;
    return *this;
  }
  Type & set__current_speed(
    const float & _arg)
  {
    this->current_speed = _arg;
    return *this;
  }
  Type & set__completion_percentage(
    const float & _arg)
  {
    this->completion_percentage = _arg;
    return *this;
  }
  Type & set__remaining_path(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->remaining_path = _arg;
    return *this;
  }
  Type & set__current_waypoint_index(
    const uint32_t & _arg)
  {
    this->current_waypoint_index = _arg;
    return *this;
  }
  Type & set__current_behavior(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_behavior = _arg;
    return *this;
  }
  Type & set__obstacle_detected(
    const bool & _arg)
  {
    this->obstacle_detected = _arg;
    return *this;
  }
  Type & set__current_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_status = _arg;
    return *this;
  }
  Type & set__path_deviation(
    const float & _arg)
  {
    this->path_deviation = _arg;
    return *this;
  }
  Type & set__battery_consumption_rate(
    const float & _arg)
  {
    this->battery_consumption_rate = _arg;
    return *this;
  }
  Type & set__cpu_usage(
    const float & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__memory_usage(
    const float & _arg)
  {
    this->memory_usage = _arg;
    return *this;
  }
  Type & set__last_update_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_update_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::Navigate_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_Feedback
    std::shared_ptr<day2::action::Navigate_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_Feedback
    std::shared_ptr<day2::action::Navigate_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_Feedback_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->distance_to_goal != other.distance_to_goal) {
      return false;
    }
    if (this->estimated_time_remaining != other.estimated_time_remaining) {
      return false;
    }
    if (this->current_speed != other.current_speed) {
      return false;
    }
    if (this->completion_percentage != other.completion_percentage) {
      return false;
    }
    if (this->remaining_path != other.remaining_path) {
      return false;
    }
    if (this->current_waypoint_index != other.current_waypoint_index) {
      return false;
    }
    if (this->current_behavior != other.current_behavior) {
      return false;
    }
    if (this->obstacle_detected != other.obstacle_detected) {
      return false;
    }
    if (this->current_status != other.current_status) {
      return false;
    }
    if (this->path_deviation != other.path_deviation) {
      return false;
    }
    if (this->battery_consumption_rate != other.battery_consumption_rate) {
      return false;
    }
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->last_update_time != other.last_update_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_Feedback_

// alias to use template instance with default allocator
using Navigate_Feedback =
  day2::action::Navigate_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "day2/action/detail/navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_SendGoal_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_SendGoal_Request_
{
  using Type = Navigate_SendGoal_Request_<ContainerAllocator>;

  explicit Navigate_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Navigate_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::Navigate_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const day2::action::Navigate_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::Navigate_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_SendGoal_Request
    std::shared_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_SendGoal_Request
    std::shared_ptr<day2::action::Navigate_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_SendGoal_Request_

// alias to use template instance with default allocator
using Navigate_SendGoal_Request =
  day2::action::Navigate_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_SendGoal_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_SendGoal_Response_
{
  using Type = Navigate_SendGoal_Response_<ContainerAllocator>;

  explicit Navigate_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Navigate_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::Navigate_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_SendGoal_Response
    std::shared_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_SendGoal_Response
    std::shared_ptr<day2::action::Navigate_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_SendGoal_Response_

// alias to use template instance with default allocator
using Navigate_SendGoal_Response =
  day2::action::Navigate_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_SendGoal_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_SendGoal_Event_
{
  using Type = Navigate_SendGoal_Event_<ContainerAllocator>;

  explicit Navigate_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Navigate_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::Navigate_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_SendGoal_Event
    std::shared_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_SendGoal_Event
    std::shared_ptr<day2::action::Navigate_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_SendGoal_Event_ & other) const
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
  bool operator!=(const Navigate_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_SendGoal_Event_

// alias to use template instance with default allocator
using Navigate_SendGoal_Event =
  day2::action::Navigate_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct Navigate_SendGoal
{
  using Request = day2::action::Navigate_SendGoal_Request;
  using Response = day2::action::Navigate_SendGoal_Response;
  using Event = day2::action::Navigate_SendGoal_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_GetResult_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_GetResult_Request_
{
  using Type = Navigate_GetResult_Request_<ContainerAllocator>;

  explicit Navigate_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Navigate_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::Navigate_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_GetResult_Request
    std::shared_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_GetResult_Request
    std::shared_ptr<day2::action::Navigate_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_GetResult_Request_

// alias to use template instance with default allocator
using Navigate_GetResult_Request =
  day2::action::Navigate_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_GetResult_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_GetResult_Response_
{
  using Type = Navigate_GetResult_Response_<ContainerAllocator>;

  explicit Navigate_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Navigate_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::Navigate_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const day2::action::Navigate_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::Navigate_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_GetResult_Response
    std::shared_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_GetResult_Response
    std::shared_ptr<day2::action::Navigate_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_GetResult_Response_

// alias to use template instance with default allocator
using Navigate_GetResult_Response =
  day2::action::Navigate_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_GetResult_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_GetResult_Event_
{
  using Type = Navigate_GetResult_Event_<ContainerAllocator>;

  explicit Navigate_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Navigate_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::Navigate_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::Navigate_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::Navigate_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_GetResult_Event
    std::shared_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_GetResult_Event
    std::shared_ptr<day2::action::Navigate_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_GetResult_Event_ & other) const
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
  bool operator!=(const Navigate_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_GetResult_Event_

// alias to use template instance with default allocator
using Navigate_GetResult_Event =
  day2::action::Navigate_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct Navigate_GetResult
{
  using Request = day2::action::Navigate_GetResult_Request;
  using Response = day2::action::Navigate_GetResult_Response;
  using Event = day2::action::Navigate_GetResult_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "day2/action/detail/navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__Navigate_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__Navigate_FeedbackMessage __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_FeedbackMessage_
{
  using Type = Navigate_FeedbackMessage_<ContainerAllocator>;

  explicit Navigate_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Navigate_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::Navigate_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const day2::action::Navigate_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::Navigate_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::Navigate_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::Navigate_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__Navigate_FeedbackMessage
    std::shared_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__Navigate_FeedbackMessage
    std::shared_ptr<day2::action::Navigate_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_FeedbackMessage_

// alias to use template instance with default allocator
using Navigate_FeedbackMessage =
  day2::action::Navigate_FeedbackMessage_<std::allocator<void>>;

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

struct Navigate
{
  /// The goal message defined in the action definition.
  using Goal = day2::action::Navigate_Goal;
  /// The result message defined in the action definition.
  using Result = day2::action::Navigate_Result;
  /// The feedback message defined in the action definition.
  using Feedback = day2::action::Navigate_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = day2::action::Navigate_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = day2::action::Navigate_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = day2::action::Navigate_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Navigate Navigate;

}  // namespace action

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__NAVIGATE__STRUCT_HPP_
