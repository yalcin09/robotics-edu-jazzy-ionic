// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/emergency_stop.hpp"


#ifndef DAY2__SRV__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
#define DAY2__SRV__DETAIL__EMERGENCY_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__day2__srv__EmergencyStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__EmergencyStop_Request __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmergencyStop_Request_
{
  using Type = EmergencyStop_Request_<ContainerAllocator>;

  explicit EmergencyStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->reason = "";
      this->stop_type = 0;
      this->disable_motors = false;
      this->lock_brakes = false;
      this->sound_alarm = false;
      this->operator_id = "";
      this->priority_level = 0;
    }
  }

  explicit EmergencyStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc),
    operator_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->reason = "";
      this->stop_type = 0;
      this->disable_motors = false;
      this->lock_brakes = false;
      this->sound_alarm = false;
      this->operator_id = "";
      this->priority_level = 0;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;
  using _stop_type_type =
    uint8_t;
  _stop_type_type stop_type;
  using _disable_motors_type =
    bool;
  _disable_motors_type disable_motors;
  using _lock_brakes_type =
    bool;
  _lock_brakes_type lock_brakes;
  using _sound_alarm_type =
    bool;
  _sound_alarm_type sound_alarm;
  using _operator_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operator_id_type operator_id;
  using _priority_level_type =
    uint8_t;
  _priority_level_type priority_level;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__stop_type(
    const uint8_t & _arg)
  {
    this->stop_type = _arg;
    return *this;
  }
  Type & set__disable_motors(
    const bool & _arg)
  {
    this->disable_motors = _arg;
    return *this;
  }
  Type & set__lock_brakes(
    const bool & _arg)
  {
    this->lock_brakes = _arg;
    return *this;
  }
  Type & set__sound_alarm(
    const bool & _arg)
  {
    this->sound_alarm = _arg;
    return *this;
  }
  Type & set__operator_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operator_id = _arg;
    return *this;
  }
  Type & set__priority_level(
    const uint8_t & _arg)
  {
    this->priority_level = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SOFT_STOP =
    0u;
  static constexpr uint8_t IMMEDIATE_STOP =
    1u;
  static constexpr uint8_t EMERGENCY_STOP =
    2u;

  // pointer types
  using RawPtr =
    day2::srv::EmergencyStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::EmergencyStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::EmergencyStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::EmergencyStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__EmergencyStop_Request
    std::shared_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__EmergencyStop_Request
    std::shared_ptr<day2::srv::EmergencyStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStop_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->stop_type != other.stop_type) {
      return false;
    }
    if (this->disable_motors != other.disable_motors) {
      return false;
    }
    if (this->lock_brakes != other.lock_brakes) {
      return false;
    }
    if (this->sound_alarm != other.sound_alarm) {
      return false;
    }
    if (this->operator_id != other.operator_id) {
      return false;
    }
    if (this->priority_level != other.priority_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStop_Request_

// alias to use template instance with default allocator
using EmergencyStop_Request =
  day2::srv::EmergencyStop_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyStop_Request_<ContainerAllocator>::SOFT_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyStop_Request_<ContainerAllocator>::IMMEDIATE_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyStop_Request_<ContainerAllocator>::EMERGENCY_STOP;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'stop_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__EmergencyStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__EmergencyStop_Response __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmergencyStop_Response_
{
  using Type = EmergencyStop_Response_<ContainerAllocator>;

  explicit EmergencyStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->system_safe_state = false;
      this->manual_reset_required = false;
      this->estimated_recovery_time = 0.0f;
      this->incident_id = 0ul;
      this->incident_classification = "";
      this->requires_investigation = false;
      this->error_code = 0ul;
    }
  }

  explicit EmergencyStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    stop_timestamp(_alloc, _init),
    incident_classification(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->system_safe_state = false;
      this->manual_reset_required = false;
      this->estimated_recovery_time = 0.0f;
      this->incident_id = 0ul;
      this->incident_classification = "";
      this->requires_investigation = false;
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
  using _stop_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stop_timestamp_type stop_timestamp;
  using _stopped_robot_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _stopped_robot_ids_type stopped_robot_ids;
  using _robot_responses_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _robot_responses_type robot_responses;
  using _stop_distances_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _stop_distances_type stop_distances;
  using _system_safe_state_type =
    bool;
  _system_safe_state_type system_safe_state;
  using _active_alarms_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_alarms_type active_alarms;
  using _required_actions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _required_actions_type required_actions;
  using _manual_reset_required_type =
    bool;
  _manual_reset_required_type manual_reset_required;
  using _reset_procedures_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _reset_procedures_type reset_procedures;
  using _estimated_recovery_time_type =
    float;
  _estimated_recovery_time_type estimated_recovery_time;
  using _incident_id_type =
    uint32_t;
  _incident_id_type incident_id;
  using _incident_classification_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _incident_classification_type incident_classification;
  using _requires_investigation_type =
    bool;
  _requires_investigation_type requires_investigation;
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
  Type & set__stop_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stop_timestamp = _arg;
    return *this;
  }
  Type & set__stopped_robot_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->stopped_robot_ids = _arg;
    return *this;
  }
  Type & set__robot_responses(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->robot_responses = _arg;
    return *this;
  }
  Type & set__stop_distances(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->stop_distances = _arg;
    return *this;
  }
  Type & set__system_safe_state(
    const bool & _arg)
  {
    this->system_safe_state = _arg;
    return *this;
  }
  Type & set__active_alarms(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_alarms = _arg;
    return *this;
  }
  Type & set__required_actions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->required_actions = _arg;
    return *this;
  }
  Type & set__manual_reset_required(
    const bool & _arg)
  {
    this->manual_reset_required = _arg;
    return *this;
  }
  Type & set__reset_procedures(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->reset_procedures = _arg;
    return *this;
  }
  Type & set__estimated_recovery_time(
    const float & _arg)
  {
    this->estimated_recovery_time = _arg;
    return *this;
  }
  Type & set__incident_id(
    const uint32_t & _arg)
  {
    this->incident_id = _arg;
    return *this;
  }
  Type & set__incident_classification(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->incident_classification = _arg;
    return *this;
  }
  Type & set__requires_investigation(
    const bool & _arg)
  {
    this->requires_investigation = _arg;
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
  static constexpr uint32_t ERROR_ROBOT_NOT_FOUND =
    1u;
  static constexpr uint32_t ERROR_ALREADY_STOPPED =
    2u;
  static constexpr uint32_t ERROR_STOP_FAILED =
    3u;
  static constexpr uint32_t ERROR_COMMUNICATION_FAILED =
    4u;

  // pointer types
  using RawPtr =
    day2::srv::EmergencyStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::EmergencyStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::EmergencyStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::EmergencyStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__EmergencyStop_Response
    std::shared_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__EmergencyStop_Response
    std::shared_ptr<day2::srv::EmergencyStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStop_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->stop_timestamp != other.stop_timestamp) {
      return false;
    }
    if (this->stopped_robot_ids != other.stopped_robot_ids) {
      return false;
    }
    if (this->robot_responses != other.robot_responses) {
      return false;
    }
    if (this->stop_distances != other.stop_distances) {
      return false;
    }
    if (this->system_safe_state != other.system_safe_state) {
      return false;
    }
    if (this->active_alarms != other.active_alarms) {
      return false;
    }
    if (this->required_actions != other.required_actions) {
      return false;
    }
    if (this->manual_reset_required != other.manual_reset_required) {
      return false;
    }
    if (this->reset_procedures != other.reset_procedures) {
      return false;
    }
    if (this->estimated_recovery_time != other.estimated_recovery_time) {
      return false;
    }
    if (this->incident_id != other.incident_id) {
      return false;
    }
    if (this->incident_classification != other.incident_classification) {
      return false;
    }
    if (this->requires_investigation != other.requires_investigation) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStop_Response_

// alias to use template instance with default allocator
using EmergencyStop_Response =
  day2::srv::EmergencyStop_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t EmergencyStop_Response_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t EmergencyStop_Response_<ContainerAllocator>::ERROR_ROBOT_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t EmergencyStop_Response_<ContainerAllocator>::ERROR_ALREADY_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t EmergencyStop_Response_<ContainerAllocator>::ERROR_STOP_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t EmergencyStop_Response_<ContainerAllocator>::ERROR_COMMUNICATION_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__EmergencyStop_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__EmergencyStop_Event __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmergencyStop_Event_
{
  using Type = EmergencyStop_Event_<ContainerAllocator>;

  explicit EmergencyStop_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit EmergencyStop_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::EmergencyStop_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::EmergencyStop_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::EmergencyStop_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::EmergencyStop_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::EmergencyStop_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::EmergencyStop_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::EmergencyStop_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::EmergencyStop_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::srv::EmergencyStop_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::EmergencyStop_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::EmergencyStop_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::EmergencyStop_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__EmergencyStop_Event
    std::shared_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__EmergencyStop_Event
    std::shared_ptr<day2::srv::EmergencyStop_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStop_Event_ & other) const
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
  bool operator!=(const EmergencyStop_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStop_Event_

// alias to use template instance with default allocator
using EmergencyStop_Event =
  day2::srv::EmergencyStop_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2

namespace day2
{

namespace srv
{

struct EmergencyStop
{
  using Request = day2::srv::EmergencyStop_Request;
  using Response = day2::srv::EmergencyStop_Response;
  using Event = day2::srv::EmergencyStop_Event;
};

}  // namespace srv

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
