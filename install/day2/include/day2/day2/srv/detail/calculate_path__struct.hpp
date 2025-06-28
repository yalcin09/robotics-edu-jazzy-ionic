// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/calculate_path.hpp"


#ifndef DAY2__SRV__DETAIL__CALCULATE_PATH__STRUCT_HPP_
#define DAY2__SRV__DETAIL__CALCULATE_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_position'
// Member 'goal_position'
// Member 'waypoints'
// Member 'forbidden_zones'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'start_orientation'
// Member 'goal_orientation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__CalculatePath_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__CalculatePath_Request __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculatePath_Request_
{
  using Type = CalculatePath_Request_<ContainerAllocator>;

  explicit CalculatePath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_position(_init),
    goal_position(_init),
    start_orientation(_init),
    goal_orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->turning_radius = 0.0f;
      this->safety_margin = 0.0f;
      this->planning_algorithm = "";
      this->planning_timeout = 0.0f;
      this->optimize_for_speed = false;
      this->optimize_for_smoothness = false;
      this->avoid_dynamic_obstacles = false;
    }
  }

  explicit CalculatePath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_position(_alloc, _init),
    goal_position(_alloc, _init),
    start_orientation(_alloc, _init),
    goal_orientation(_alloc, _init),
    planning_algorithm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->turning_radius = 0.0f;
      this->safety_margin = 0.0f;
      this->planning_algorithm = "";
      this->planning_timeout = 0.0f;
      this->optimize_for_speed = false;
      this->optimize_for_smoothness = false;
      this->avoid_dynamic_obstacles = false;
    }
  }

  // field types and members
  using _start_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_position_type start_position;
  using _goal_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _goal_position_type goal_position;
  using _start_orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _start_orientation_type start_orientation;
  using _goal_orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _goal_orientation_type goal_orientation;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _max_acceleration_type =
    float;
  _max_acceleration_type max_acceleration;
  using _turning_radius_type =
    float;
  _turning_radius_type turning_radius;
  using _safety_margin_type =
    float;
  _safety_margin_type safety_margin;
  using _planning_algorithm_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_algorithm_type planning_algorithm;
  using _planning_timeout_type =
    float;
  _planning_timeout_type planning_timeout;
  using _optimize_for_speed_type =
    bool;
  _optimize_for_speed_type optimize_for_speed;
  using _optimize_for_smoothness_type =
    bool;
  _optimize_for_smoothness_type optimize_for_smoothness;
  using _avoid_dynamic_obstacles_type =
    bool;
  _avoid_dynamic_obstacles_type avoid_dynamic_obstacles;
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _forbidden_zones_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _forbidden_zones_type forbidden_zones;
  using _special_constraints_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _special_constraints_type special_constraints;

  // setters for named parameter idiom
  Type & set__start_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start_position = _arg;
    return *this;
  }
  Type & set__goal_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->goal_position = _arg;
    return *this;
  }
  Type & set__start_orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->start_orientation = _arg;
    return *this;
  }
  Type & set__goal_orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->goal_orientation = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const float & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__turning_radius(
    const float & _arg)
  {
    this->turning_radius = _arg;
    return *this;
  }
  Type & set__safety_margin(
    const float & _arg)
  {
    this->safety_margin = _arg;
    return *this;
  }
  Type & set__planning_algorithm(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_algorithm = _arg;
    return *this;
  }
  Type & set__planning_timeout(
    const float & _arg)
  {
    this->planning_timeout = _arg;
    return *this;
  }
  Type & set__optimize_for_speed(
    const bool & _arg)
  {
    this->optimize_for_speed = _arg;
    return *this;
  }
  Type & set__optimize_for_smoothness(
    const bool & _arg)
  {
    this->optimize_for_smoothness = _arg;
    return *this;
  }
  Type & set__avoid_dynamic_obstacles(
    const bool & _arg)
  {
    this->avoid_dynamic_obstacles = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__forbidden_zones(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->forbidden_zones = _arg;
    return *this;
  }
  Type & set__special_constraints(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->special_constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::srv::CalculatePath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::CalculatePath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::CalculatePath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::CalculatePath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__CalculatePath_Request
    std::shared_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__CalculatePath_Request
    std::shared_ptr<day2::srv::CalculatePath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculatePath_Request_ & other) const
  {
    if (this->start_position != other.start_position) {
      return false;
    }
    if (this->goal_position != other.goal_position) {
      return false;
    }
    if (this->start_orientation != other.start_orientation) {
      return false;
    }
    if (this->goal_orientation != other.goal_orientation) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->turning_radius != other.turning_radius) {
      return false;
    }
    if (this->safety_margin != other.safety_margin) {
      return false;
    }
    if (this->planning_algorithm != other.planning_algorithm) {
      return false;
    }
    if (this->planning_timeout != other.planning_timeout) {
      return false;
    }
    if (this->optimize_for_speed != other.optimize_for_speed) {
      return false;
    }
    if (this->optimize_for_smoothness != other.optimize_for_smoothness) {
      return false;
    }
    if (this->avoid_dynamic_obstacles != other.avoid_dynamic_obstacles) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->forbidden_zones != other.forbidden_zones) {
      return false;
    }
    if (this->special_constraints != other.special_constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculatePath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculatePath_Request_

// alias to use template instance with default allocator
using CalculatePath_Request =
  day2::srv::CalculatePath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'path_points'
// Member 'alternative_paths'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'path_orientations'
// already included above
// #include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__CalculatePath_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__CalculatePath_Response __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculatePath_Response_
{
  using Type = CalculatePath_Response_<ContainerAllocator>;

  explicit CalculatePath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->total_distance = 0.0f;
      this->total_time = 0.0f;
      this->path_smoothness = 0.0f;
      this->safety_score = 0.0f;
      this->num_waypoints = 0ul;
      this->planning_time_ms = 0.0f;
      this->algorithm_used = "";
      this->nodes_explored = 0ul;
      this->iterations_count = 0ul;
      this->error_code = 0ul;
    }
  }

  explicit CalculatePath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    algorithm_used(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->total_distance = 0.0f;
      this->total_time = 0.0f;
      this->path_smoothness = 0.0f;
      this->safety_score = 0.0f;
      this->num_waypoints = 0ul;
      this->planning_time_ms = 0.0f;
      this->algorithm_used = "";
      this->nodes_explored = 0ul;
      this->iterations_count = 0ul;
      this->error_code = 0ul;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _path_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _path_points_type path_points;
  using _path_orientations_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _path_orientations_type path_orientations;
  using _path_velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _path_velocities_type path_velocities;
  using _path_timestamps_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _path_timestamps_type path_timestamps;
  using _total_distance_type =
    float;
  _total_distance_type total_distance;
  using _total_time_type =
    float;
  _total_time_type total_time;
  using _path_smoothness_type =
    float;
  _path_smoothness_type path_smoothness;
  using _safety_score_type =
    float;
  _safety_score_type safety_score;
  using _num_waypoints_type =
    uint32_t;
  _num_waypoints_type num_waypoints;
  using _alternative_paths_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _alternative_paths_type alternative_paths;
  using _alternative_scores_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _alternative_scores_type alternative_scores;
  using _planning_time_ms_type =
    float;
  _planning_time_ms_type planning_time_ms;
  using _algorithm_used_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _algorithm_used_type algorithm_used;
  using _nodes_explored_type =
    uint32_t;
  _nodes_explored_type nodes_explored;
  using _iterations_count_type =
    uint32_t;
  _iterations_count_type iterations_count;
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
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__path_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->path_points = _arg;
    return *this;
  }
  Type & set__path_orientations(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->path_orientations = _arg;
    return *this;
  }
  Type & set__path_velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->path_velocities = _arg;
    return *this;
  }
  Type & set__path_timestamps(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->path_timestamps = _arg;
    return *this;
  }
  Type & set__total_distance(
    const float & _arg)
  {
    this->total_distance = _arg;
    return *this;
  }
  Type & set__total_time(
    const float & _arg)
  {
    this->total_time = _arg;
    return *this;
  }
  Type & set__path_smoothness(
    const float & _arg)
  {
    this->path_smoothness = _arg;
    return *this;
  }
  Type & set__safety_score(
    const float & _arg)
  {
    this->safety_score = _arg;
    return *this;
  }
  Type & set__num_waypoints(
    const uint32_t & _arg)
  {
    this->num_waypoints = _arg;
    return *this;
  }
  Type & set__alternative_paths(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->alternative_paths = _arg;
    return *this;
  }
  Type & set__alternative_scores(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->alternative_scores = _arg;
    return *this;
  }
  Type & set__planning_time_ms(
    const float & _arg)
  {
    this->planning_time_ms = _arg;
    return *this;
  }
  Type & set__algorithm_used(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->algorithm_used = _arg;
    return *this;
  }
  Type & set__nodes_explored(
    const uint32_t & _arg)
  {
    this->nodes_explored = _arg;
    return *this;
  }
  Type & set__iterations_count(
    const uint32_t & _arg)
  {
    this->iterations_count = _arg;
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
  static constexpr uint32_t ERROR_NO_PATH_FOUND =
    1u;
  static constexpr uint32_t ERROR_START_OCCUPIED =
    2u;
  static constexpr uint32_t ERROR_GOAL_OCCUPIED =
    3u;
  static constexpr uint32_t ERROR_TIMEOUT =
    4u;
  static constexpr uint32_t ERROR_INVALID_CONSTRAINTS =
    5u;

  // pointer types
  using RawPtr =
    day2::srv::CalculatePath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::CalculatePath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::CalculatePath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::CalculatePath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__CalculatePath_Response
    std::shared_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__CalculatePath_Response
    std::shared_ptr<day2::srv::CalculatePath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculatePath_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->path_points != other.path_points) {
      return false;
    }
    if (this->path_orientations != other.path_orientations) {
      return false;
    }
    if (this->path_velocities != other.path_velocities) {
      return false;
    }
    if (this->path_timestamps != other.path_timestamps) {
      return false;
    }
    if (this->total_distance != other.total_distance) {
      return false;
    }
    if (this->total_time != other.total_time) {
      return false;
    }
    if (this->path_smoothness != other.path_smoothness) {
      return false;
    }
    if (this->safety_score != other.safety_score) {
      return false;
    }
    if (this->num_waypoints != other.num_waypoints) {
      return false;
    }
    if (this->alternative_paths != other.alternative_paths) {
      return false;
    }
    if (this->alternative_scores != other.alternative_scores) {
      return false;
    }
    if (this->planning_time_ms != other.planning_time_ms) {
      return false;
    }
    if (this->algorithm_used != other.algorithm_used) {
      return false;
    }
    if (this->nodes_explored != other.nodes_explored) {
      return false;
    }
    if (this->iterations_count != other.iterations_count) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculatePath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculatePath_Response_

// alias to use template instance with default allocator
using CalculatePath_Response =
  day2::srv::CalculatePath_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CalculatePath_Response_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CalculatePath_Response_<ContainerAllocator>::ERROR_NO_PATH_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CalculatePath_Response_<ContainerAllocator>::ERROR_START_OCCUPIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CalculatePath_Response_<ContainerAllocator>::ERROR_GOAL_OCCUPIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CalculatePath_Response_<ContainerAllocator>::ERROR_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CalculatePath_Response_<ContainerAllocator>::ERROR_INVALID_CONSTRAINTS;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__CalculatePath_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__CalculatePath_Event __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculatePath_Event_
{
  using Type = CalculatePath_Event_<ContainerAllocator>;

  explicit CalculatePath_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CalculatePath_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::CalculatePath_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::CalculatePath_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::CalculatePath_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::CalculatePath_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::CalculatePath_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::CalculatePath_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::CalculatePath_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::CalculatePath_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::srv::CalculatePath_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::CalculatePath_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::CalculatePath_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::CalculatePath_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__CalculatePath_Event
    std::shared_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__CalculatePath_Event
    std::shared_ptr<day2::srv::CalculatePath_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculatePath_Event_ & other) const
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
  bool operator!=(const CalculatePath_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculatePath_Event_

// alias to use template instance with default allocator
using CalculatePath_Event =
  day2::srv::CalculatePath_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2

namespace day2
{

namespace srv
{

struct CalculatePath
{
  using Request = day2::srv::CalculatePath_Request;
  using Response = day2::srv::CalculatePath_Response;
  using Event = day2::srv::CalculatePath_Event;
};

}  // namespace srv

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__CALCULATE_PATH__STRUCT_HPP_
