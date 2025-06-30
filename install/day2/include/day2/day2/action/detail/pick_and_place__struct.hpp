// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:action/PickAndPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/pick_and_place.hpp"


#ifndef DAY2__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_HPP_
#define DAY2__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pickup_location'
// Member 'place_location'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'object_dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_Goal __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_Goal __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_Goal_
{
  using Type = PickAndPlace_Goal_<ContainerAllocator>;

  explicit PickAndPlace_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pickup_location(_init),
    place_location(_init),
    object_dimensions(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->object_type = "";
      this->object_weight = 0.0f;
      this->grasp_type = "";
      this->grasp_force = 0.0f;
      this->approach_distance = 0.0f;
      this->lift_height = 0.0f;
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->use_careful_mode = false;
      this->timeout_seconds = 0.0f;
      this->collision_threshold = 0.0f;
      this->enable_force_feedback = false;
    }
  }

  explicit PickAndPlace_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc),
    pickup_location(_alloc, _init),
    place_location(_alloc, _init),
    object_type(_alloc),
    object_dimensions(_alloc, _init),
    grasp_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->object_type = "";
      this->object_weight = 0.0f;
      this->grasp_type = "";
      this->grasp_force = 0.0f;
      this->approach_distance = 0.0f;
      this->lift_height = 0.0f;
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->use_careful_mode = false;
      this->timeout_seconds = 0.0f;
      this->collision_threshold = 0.0f;
      this->enable_force_feedback = false;
    }
  }

  // field types and members
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _pickup_location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pickup_location_type pickup_location;
  using _place_location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _place_location_type place_location;
  using _object_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_type_type object_type;
  using _object_weight_type =
    float;
  _object_weight_type object_weight;
  using _object_dimensions_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _object_dimensions_type object_dimensions;
  using _grasp_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _grasp_type_type grasp_type;
  using _grasp_force_type =
    float;
  _grasp_force_type grasp_force;
  using _approach_distance_type =
    float;
  _approach_distance_type approach_distance;
  using _lift_height_type =
    float;
  _lift_height_type lift_height;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _max_acceleration_type =
    float;
  _max_acceleration_type max_acceleration;
  using _use_careful_mode_type =
    bool;
  _use_careful_mode_type use_careful_mode;
  using _timeout_seconds_type =
    float;
  _timeout_seconds_type timeout_seconds;
  using _collision_threshold_type =
    float;
  _collision_threshold_type collision_threshold;
  using _enable_force_feedback_type =
    bool;
  _enable_force_feedback_type enable_force_feedback;
  using _forbidden_zones_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _forbidden_zones_type forbidden_zones;

  // setters for named parameter idiom
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__pickup_location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pickup_location = _arg;
    return *this;
  }
  Type & set__place_location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->place_location = _arg;
    return *this;
  }
  Type & set__object_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__object_weight(
    const float & _arg)
  {
    this->object_weight = _arg;
    return *this;
  }
  Type & set__object_dimensions(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->object_dimensions = _arg;
    return *this;
  }
  Type & set__grasp_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->grasp_type = _arg;
    return *this;
  }
  Type & set__grasp_force(
    const float & _arg)
  {
    this->grasp_force = _arg;
    return *this;
  }
  Type & set__approach_distance(
    const float & _arg)
  {
    this->approach_distance = _arg;
    return *this;
  }
  Type & set__lift_height(
    const float & _arg)
  {
    this->lift_height = _arg;
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
  Type & set__use_careful_mode(
    const bool & _arg)
  {
    this->use_careful_mode = _arg;
    return *this;
  }
  Type & set__timeout_seconds(
    const float & _arg)
  {
    this->timeout_seconds = _arg;
    return *this;
  }
  Type & set__collision_threshold(
    const float & _arg)
  {
    this->collision_threshold = _arg;
    return *this;
  }
  Type & set__enable_force_feedback(
    const bool & _arg)
  {
    this->enable_force_feedback = _arg;
    return *this;
  }
  Type & set__forbidden_zones(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->forbidden_zones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_Goal
    std::shared_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_Goal
    std::shared_ptr<day2::action::PickAndPlace_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_Goal_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->pickup_location != other.pickup_location) {
      return false;
    }
    if (this->place_location != other.place_location) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->object_weight != other.object_weight) {
      return false;
    }
    if (this->object_dimensions != other.object_dimensions) {
      return false;
    }
    if (this->grasp_type != other.grasp_type) {
      return false;
    }
    if (this->grasp_force != other.grasp_force) {
      return false;
    }
    if (this->approach_distance != other.approach_distance) {
      return false;
    }
    if (this->lift_height != other.lift_height) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->use_careful_mode != other.use_careful_mode) {
      return false;
    }
    if (this->timeout_seconds != other.timeout_seconds) {
      return false;
    }
    if (this->collision_threshold != other.collision_threshold) {
      return false;
    }
    if (this->enable_force_feedback != other.enable_force_feedback) {
      return false;
    }
    if (this->forbidden_zones != other.forbidden_zones) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_Goal_

// alias to use template instance with default allocator
using PickAndPlace_Goal =
  day2::action::PickAndPlace_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'final_object_location'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_Result __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_Result __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_Result_
{
  using Type = PickAndPlace_Result_<ContainerAllocator>;

  explicit PickAndPlace_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final_object_location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->total_task_time = 0.0f;
      this->pickup_successful = false;
      this->transport_successful = false;
      this->place_successful = false;
      this->pickup_duration = 0.0f;
      this->transport_duration = 0.0f;
      this->place_duration = 0.0f;
      this->accuracy_score = 0.0f;
      this->max_force_applied = 0.0f;
      this->grasp_quality = 0.0f;
      this->error_code = 0ul;
      this->error_details = "";
    }
  }

  explicit PickAndPlace_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_message(_alloc),
    final_object_location(_alloc, _init),
    error_details(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->total_task_time = 0.0f;
      this->pickup_successful = false;
      this->transport_successful = false;
      this->place_successful = false;
      this->pickup_duration = 0.0f;
      this->transport_duration = 0.0f;
      this->place_duration = 0.0f;
      this->accuracy_score = 0.0f;
      this->max_force_applied = 0.0f;
      this->grasp_quality = 0.0f;
      this->error_code = 0ul;
      this->error_details = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _result_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_message_type result_message;
  using _final_object_location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _final_object_location_type final_object_location;
  using _total_task_time_type =
    float;
  _total_task_time_type total_task_time;
  using _pickup_successful_type =
    bool;
  _pickup_successful_type pickup_successful;
  using _transport_successful_type =
    bool;
  _transport_successful_type transport_successful;
  using _place_successful_type =
    bool;
  _place_successful_type place_successful;
  using _pickup_duration_type =
    float;
  _pickup_duration_type pickup_duration;
  using _transport_duration_type =
    float;
  _transport_duration_type transport_duration;
  using _place_duration_type =
    float;
  _place_duration_type place_duration;
  using _accuracy_score_type =
    float;
  _accuracy_score_type accuracy_score;
  using _max_force_applied_type =
    float;
  _max_force_applied_type max_force_applied;
  using _grasp_quality_type =
    float;
  _grasp_quality_type grasp_quality;
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;
  using _error_details_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_details_type error_details;

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
  Type & set__final_object_location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->final_object_location = _arg;
    return *this;
  }
  Type & set__total_task_time(
    const float & _arg)
  {
    this->total_task_time = _arg;
    return *this;
  }
  Type & set__pickup_successful(
    const bool & _arg)
  {
    this->pickup_successful = _arg;
    return *this;
  }
  Type & set__transport_successful(
    const bool & _arg)
  {
    this->transport_successful = _arg;
    return *this;
  }
  Type & set__place_successful(
    const bool & _arg)
  {
    this->place_successful = _arg;
    return *this;
  }
  Type & set__pickup_duration(
    const float & _arg)
  {
    this->pickup_duration = _arg;
    return *this;
  }
  Type & set__transport_duration(
    const float & _arg)
  {
    this->transport_duration = _arg;
    return *this;
  }
  Type & set__place_duration(
    const float & _arg)
  {
    this->place_duration = _arg;
    return *this;
  }
  Type & set__accuracy_score(
    const float & _arg)
  {
    this->accuracy_score = _arg;
    return *this;
  }
  Type & set__max_force_applied(
    const float & _arg)
  {
    this->max_force_applied = _arg;
    return *this;
  }
  Type & set__grasp_quality(
    const float & _arg)
  {
    this->grasp_quality = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_details(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_details = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ERROR_NONE =
    0u;
  static constexpr uint32_t ERROR_OBJECT_NOT_FOUND =
    1u;
  static constexpr uint32_t ERROR_GRASP_FAILED =
    2u;
  static constexpr uint32_t ERROR_OBJECT_DROPPED =
    3u;
  static constexpr uint32_t ERROR_COLLISION_DETECTED =
    4u;
  static constexpr uint32_t ERROR_PLACE_LOCATION_BLOCKED =
    5u;
  static constexpr uint32_t ERROR_FORCE_LIMIT_EXCEEDED =
    6u;
  static constexpr uint32_t ERROR_TIMEOUT =
    7u;

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_Result
    std::shared_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_Result
    std::shared_ptr<day2::action::PickAndPlace_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result_message != other.result_message) {
      return false;
    }
    if (this->final_object_location != other.final_object_location) {
      return false;
    }
    if (this->total_task_time != other.total_task_time) {
      return false;
    }
    if (this->pickup_successful != other.pickup_successful) {
      return false;
    }
    if (this->transport_successful != other.transport_successful) {
      return false;
    }
    if (this->place_successful != other.place_successful) {
      return false;
    }
    if (this->pickup_duration != other.pickup_duration) {
      return false;
    }
    if (this->transport_duration != other.transport_duration) {
      return false;
    }
    if (this->place_duration != other.place_duration) {
      return false;
    }
    if (this->accuracy_score != other.accuracy_score) {
      return false;
    }
    if (this->max_force_applied != other.max_force_applied) {
      return false;
    }
    if (this->grasp_quality != other.grasp_quality) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_details != other.error_details) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_Result_

// alias to use template instance with default allocator
using PickAndPlace_Result =
  day2::action::PickAndPlace_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_OBJECT_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_GRASP_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_OBJECT_DROPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_COLLISION_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_PLACE_LOCATION_BLOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_FORCE_LIMIT_EXCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PickAndPlace_Result_<ContainerAllocator>::ERROR_TIMEOUT;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'gripper_position'
// Member 'object_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'current_velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'phase_start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_Feedback __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_Feedback_
{
  using Type = PickAndPlace_Feedback_<ContainerAllocator>;

  explicit PickAndPlace_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gripper_position(_init),
    object_position(_init),
    current_velocity(_init),
    phase_start_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = "";
      this->completion_percentage = 0.0f;
      this->object_detected = false;
      this->object_in_grasp = false;
      this->current_grasp_force = 0.0f;
      this->transport_progress = 0.0f;
      this->collision_warning = false;
      this->estimated_time_remaining = 0.0f;
      this->current_behavior = "";
      this->is_moving = false;
      this->grasp_stability = 0.0f;
      this->path_deviation = 0.0f;
    }
  }

  explicit PickAndPlace_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_phase(_alloc),
    gripper_position(_alloc, _init),
    object_position(_alloc, _init),
    current_velocity(_alloc, _init),
    current_behavior(_alloc),
    phase_start_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = "";
      this->completion_percentage = 0.0f;
      this->object_detected = false;
      this->object_in_grasp = false;
      this->current_grasp_force = 0.0f;
      this->transport_progress = 0.0f;
      this->collision_warning = false;
      this->estimated_time_remaining = 0.0f;
      this->current_behavior = "";
      this->is_moving = false;
      this->grasp_stability = 0.0f;
      this->path_deviation = 0.0f;
    }
  }

  // field types and members
  using _current_phase_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_phase_type current_phase;
  using _completion_percentage_type =
    float;
  _completion_percentage_type completion_percentage;
  using _gripper_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _gripper_position_type gripper_position;
  using _object_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _object_position_type object_position;
  using _object_detected_type =
    bool;
  _object_detected_type object_detected;
  using _object_in_grasp_type =
    bool;
  _object_in_grasp_type object_in_grasp;
  using _current_grasp_force_type =
    float;
  _current_grasp_force_type current_grasp_force;
  using _transport_progress_type =
    float;
  _transport_progress_type transport_progress;
  using _force_torque_readings_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _force_torque_readings_type force_torque_readings;
  using _collision_warning_type =
    bool;
  _collision_warning_type collision_warning;
  using _estimated_time_remaining_type =
    float;
  _estimated_time_remaining_type estimated_time_remaining;
  using _current_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _current_velocity_type current_velocity;
  using _current_behavior_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_behavior_type current_behavior;
  using _is_moving_type =
    bool;
  _is_moving_type is_moving;
  using _grasp_stability_type =
    float;
  _grasp_stability_type grasp_stability;
  using _path_deviation_type =
    float;
  _path_deviation_type path_deviation;
  using _phase_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _phase_start_time_type phase_start_time;

  // setters for named parameter idiom
  Type & set__current_phase(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_phase = _arg;
    return *this;
  }
  Type & set__completion_percentage(
    const float & _arg)
  {
    this->completion_percentage = _arg;
    return *this;
  }
  Type & set__gripper_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->gripper_position = _arg;
    return *this;
  }
  Type & set__object_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->object_position = _arg;
    return *this;
  }
  Type & set__object_detected(
    const bool & _arg)
  {
    this->object_detected = _arg;
    return *this;
  }
  Type & set__object_in_grasp(
    const bool & _arg)
  {
    this->object_in_grasp = _arg;
    return *this;
  }
  Type & set__current_grasp_force(
    const float & _arg)
  {
    this->current_grasp_force = _arg;
    return *this;
  }
  Type & set__transport_progress(
    const float & _arg)
  {
    this->transport_progress = _arg;
    return *this;
  }
  Type & set__force_torque_readings(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->force_torque_readings = _arg;
    return *this;
  }
  Type & set__collision_warning(
    const bool & _arg)
  {
    this->collision_warning = _arg;
    return *this;
  }
  Type & set__estimated_time_remaining(
    const float & _arg)
  {
    this->estimated_time_remaining = _arg;
    return *this;
  }
  Type & set__current_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->current_velocity = _arg;
    return *this;
  }
  Type & set__current_behavior(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_behavior = _arg;
    return *this;
  }
  Type & set__is_moving(
    const bool & _arg)
  {
    this->is_moving = _arg;
    return *this;
  }
  Type & set__grasp_stability(
    const float & _arg)
  {
    this->grasp_stability = _arg;
    return *this;
  }
  Type & set__path_deviation(
    const float & _arg)
  {
    this->path_deviation = _arg;
    return *this;
  }
  Type & set__phase_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->phase_start_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_Feedback
    std::shared_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_Feedback
    std::shared_ptr<day2::action::PickAndPlace_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_Feedback_ & other) const
  {
    if (this->current_phase != other.current_phase) {
      return false;
    }
    if (this->completion_percentage != other.completion_percentage) {
      return false;
    }
    if (this->gripper_position != other.gripper_position) {
      return false;
    }
    if (this->object_position != other.object_position) {
      return false;
    }
    if (this->object_detected != other.object_detected) {
      return false;
    }
    if (this->object_in_grasp != other.object_in_grasp) {
      return false;
    }
    if (this->current_grasp_force != other.current_grasp_force) {
      return false;
    }
    if (this->transport_progress != other.transport_progress) {
      return false;
    }
    if (this->force_torque_readings != other.force_torque_readings) {
      return false;
    }
    if (this->collision_warning != other.collision_warning) {
      return false;
    }
    if (this->estimated_time_remaining != other.estimated_time_remaining) {
      return false;
    }
    if (this->current_velocity != other.current_velocity) {
      return false;
    }
    if (this->current_behavior != other.current_behavior) {
      return false;
    }
    if (this->is_moving != other.is_moving) {
      return false;
    }
    if (this->grasp_stability != other.grasp_stability) {
      return false;
    }
    if (this->path_deviation != other.path_deviation) {
      return false;
    }
    if (this->phase_start_time != other.phase_start_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_Feedback_

// alias to use template instance with default allocator
using PickAndPlace_Feedback =
  day2::action::PickAndPlace_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "day2/action/detail/pick_and_place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_SendGoal_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_SendGoal_Request_
{
  using Type = PickAndPlace_SendGoal_Request_<ContainerAllocator>;

  explicit PickAndPlace_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::PickAndPlace_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const day2::action::PickAndPlace_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_SendGoal_Request
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_SendGoal_Request
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_SendGoal_Request_

// alias to use template instance with default allocator
using PickAndPlace_SendGoal_Request =
  day2::action::PickAndPlace_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_SendGoal_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_SendGoal_Response_
{
  using Type = PickAndPlace_SendGoal_Response_<ContainerAllocator>;

  explicit PickAndPlace_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PickAndPlace_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_SendGoal_Response
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_SendGoal_Response
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_SendGoal_Response_

// alias to use template instance with default allocator
using PickAndPlace_SendGoal_Response =
  day2::action::PickAndPlace_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_SendGoal_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_SendGoal_Event_
{
  using Type = PickAndPlace_SendGoal_Event_<ContainerAllocator>;

  explicit PickAndPlace_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_SendGoal_Event
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_SendGoal_Event
    std::shared_ptr<day2::action::PickAndPlace_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_SendGoal_Event_ & other) const
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
  bool operator!=(const PickAndPlace_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_SendGoal_Event_

// alias to use template instance with default allocator
using PickAndPlace_SendGoal_Event =
  day2::action::PickAndPlace_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct PickAndPlace_SendGoal
{
  using Request = day2::action::PickAndPlace_SendGoal_Request;
  using Response = day2::action::PickAndPlace_SendGoal_Response;
  using Event = day2::action::PickAndPlace_SendGoal_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_GetResult_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_GetResult_Request_
{
  using Type = PickAndPlace_GetResult_Request_<ContainerAllocator>;

  explicit PickAndPlace_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_GetResult_Request
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_GetResult_Request
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_GetResult_Request_

// alias to use template instance with default allocator
using PickAndPlace_GetResult_Request =
  day2::action::PickAndPlace_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/pick_and_place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_GetResult_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_GetResult_Response_
{
  using Type = PickAndPlace_GetResult_Response_<ContainerAllocator>;

  explicit PickAndPlace_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PickAndPlace_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::PickAndPlace_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const day2::action::PickAndPlace_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_GetResult_Response
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_GetResult_Response
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_GetResult_Response_

// alias to use template instance with default allocator
using PickAndPlace_GetResult_Response =
  day2::action::PickAndPlace_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_GetResult_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_GetResult_Event_
{
  using Type = PickAndPlace_GetResult_Event_<ContainerAllocator>;

  explicit PickAndPlace_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_GetResult_Event
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_GetResult_Event
    std::shared_ptr<day2::action::PickAndPlace_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_GetResult_Event_ & other) const
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
  bool operator!=(const PickAndPlace_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_GetResult_Event_

// alias to use template instance with default allocator
using PickAndPlace_GetResult_Event =
  day2::action::PickAndPlace_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct PickAndPlace_GetResult
{
  using Request = day2::action::PickAndPlace_GetResult_Request;
  using Response = day2::action::PickAndPlace_GetResult_Response;
  using Event = day2::action::PickAndPlace_GetResult_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "day2/action/detail/pick_and_place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__PickAndPlace_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__PickAndPlace_FeedbackMessage __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_FeedbackMessage_
{
  using Type = PickAndPlace_FeedbackMessage_<ContainerAllocator>;

  explicit PickAndPlace_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::PickAndPlace_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const day2::action::PickAndPlace_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__PickAndPlace_FeedbackMessage
    std::shared_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__PickAndPlace_FeedbackMessage
    std::shared_ptr<day2::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_FeedbackMessage_

// alias to use template instance with default allocator
using PickAndPlace_FeedbackMessage =
  day2::action::PickAndPlace_FeedbackMessage_<std::allocator<void>>;

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

struct PickAndPlace
{
  /// The goal message defined in the action definition.
  using Goal = day2::action::PickAndPlace_Goal;
  /// The result message defined in the action definition.
  using Result = day2::action::PickAndPlace_Result;
  /// The feedback message defined in the action definition.
  using Feedback = day2::action::PickAndPlace_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = day2::action::PickAndPlace_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = day2::action::PickAndPlace_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = day2::action::PickAndPlace_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PickAndPlace PickAndPlace;

}  // namespace action

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_HPP_
