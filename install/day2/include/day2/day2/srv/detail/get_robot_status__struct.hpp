// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/get_robot_status.hpp"


#ifndef DAY2__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_HPP_
#define DAY2__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__day2__srv__GetRobotStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__GetRobotStatus_Request __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotStatus_Request_
{
  using Type = GetRobotStatus_Request_<ContainerAllocator>;

  explicit GetRobotStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->robot_name = "";
      this->include_sensors = false;
      this->include_diagnostics = false;
      this->include_history = false;
    }
  }

  explicit GetRobotStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->robot_name = "";
      this->include_sensors = false;
      this->include_diagnostics = false;
      this->include_history = false;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _include_sensors_type =
    bool;
  _include_sensors_type include_sensors;
  using _include_diagnostics_type =
    bool;
  _include_diagnostics_type include_diagnostics;
  using _include_history_type =
    bool;
  _include_history_type include_history;
  using _requested_fields_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _requested_fields_type requested_fields;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__include_sensors(
    const bool & _arg)
  {
    this->include_sensors = _arg;
    return *this;
  }
  Type & set__include_diagnostics(
    const bool & _arg)
  {
    this->include_diagnostics = _arg;
    return *this;
  }
  Type & set__include_history(
    const bool & _arg)
  {
    this->include_history = _arg;
    return *this;
  }
  Type & set__requested_fields(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->requested_fields = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::srv::GetRobotStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::GetRobotStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::GetRobotStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::GetRobotStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__GetRobotStatus_Request
    std::shared_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__GetRobotStatus_Request
    std::shared_ptr<day2::srv::GetRobotStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotStatus_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->include_sensors != other.include_sensors) {
      return false;
    }
    if (this->include_diagnostics != other.include_diagnostics) {
      return false;
    }
    if (this->include_history != other.include_history) {
      return false;
    }
    if (this->requested_fields != other.requested_fields) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotStatus_Request_

// alias to use template instance with default allocator
using GetRobotStatus_Request =
  day2::srv::GetRobotStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'current_status'
// Member 'status_history'
#include "day2/msg/detail/robot_status__struct.hpp"
// Member 'sensor_data'
#include "day2/msg/detail/sensor_data__struct.hpp"
// Member 'query_timestamp'
// Member 'last_update_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__GetRobotStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__GetRobotStatus_Response __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotStatus_Response_
{
  using Type = GetRobotStatus_Response_<ContainerAllocator>;

  explicit GetRobotStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_status(_init),
    query_timestamp(_init),
    last_update_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->uptime_hours = 0.0f;
      this->total_commands_executed = 0ul;
      this->total_distance_traveled = 0.0f;
      this->error_count_today = 0ul;
      this->average_response_time_ms = 0.0f;
      this->cpu_usage_percent = 0.0f;
      this->memory_usage_percent = 0.0f;
      this->network_latency_ms = 0.0f;
    }
  }

  explicit GetRobotStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    current_status(_alloc, _init),
    query_timestamp(_alloc, _init),
    last_update_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->uptime_hours = 0.0f;
      this->total_commands_executed = 0ul;
      this->total_distance_traveled = 0.0f;
      this->error_count_today = 0ul;
      this->average_response_time_ms = 0.0f;
      this->cpu_usage_percent = 0.0f;
      this->memory_usage_percent = 0.0f;
      this->network_latency_ms = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _current_status_type =
    day2::msg::RobotStatus_<ContainerAllocator>;
  _current_status_type current_status;
  using _sensor_data_type =
    std::vector<day2::msg::SensorData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::msg::SensorData_<ContainerAllocator>>>;
  _sensor_data_type sensor_data;
  using _diagnostic_messages_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _diagnostic_messages_type diagnostic_messages;
  using _status_history_type =
    std::vector<day2::msg::RobotStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::msg::RobotStatus_<ContainerAllocator>>>;
  _status_history_type status_history;
  using _uptime_hours_type =
    float;
  _uptime_hours_type uptime_hours;
  using _total_commands_executed_type =
    uint32_t;
  _total_commands_executed_type total_commands_executed;
  using _total_distance_traveled_type =
    float;
  _total_distance_traveled_type total_distance_traveled;
  using _error_count_today_type =
    uint32_t;
  _error_count_today_type error_count_today;
  using _average_response_time_ms_type =
    float;
  _average_response_time_ms_type average_response_time_ms;
  using _cpu_usage_percent_type =
    float;
  _cpu_usage_percent_type cpu_usage_percent;
  using _memory_usage_percent_type =
    float;
  _memory_usage_percent_type memory_usage_percent;
  using _network_latency_ms_type =
    float;
  _network_latency_ms_type network_latency_ms;
  using _query_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _query_timestamp_type query_timestamp;
  using _last_update_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_update_time_type last_update_time;

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
  Type & set__current_status(
    const day2::msg::RobotStatus_<ContainerAllocator> & _arg)
  {
    this->current_status = _arg;
    return *this;
  }
  Type & set__sensor_data(
    const std::vector<day2::msg::SensorData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::msg::SensorData_<ContainerAllocator>>> & _arg)
  {
    this->sensor_data = _arg;
    return *this;
  }
  Type & set__diagnostic_messages(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->diagnostic_messages = _arg;
    return *this;
  }
  Type & set__status_history(
    const std::vector<day2::msg::RobotStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::msg::RobotStatus_<ContainerAllocator>>> & _arg)
  {
    this->status_history = _arg;
    return *this;
  }
  Type & set__uptime_hours(
    const float & _arg)
  {
    this->uptime_hours = _arg;
    return *this;
  }
  Type & set__total_commands_executed(
    const uint32_t & _arg)
  {
    this->total_commands_executed = _arg;
    return *this;
  }
  Type & set__total_distance_traveled(
    const float & _arg)
  {
    this->total_distance_traveled = _arg;
    return *this;
  }
  Type & set__error_count_today(
    const uint32_t & _arg)
  {
    this->error_count_today = _arg;
    return *this;
  }
  Type & set__average_response_time_ms(
    const float & _arg)
  {
    this->average_response_time_ms = _arg;
    return *this;
  }
  Type & set__cpu_usage_percent(
    const float & _arg)
  {
    this->cpu_usage_percent = _arg;
    return *this;
  }
  Type & set__memory_usage_percent(
    const float & _arg)
  {
    this->memory_usage_percent = _arg;
    return *this;
  }
  Type & set__network_latency_ms(
    const float & _arg)
  {
    this->network_latency_ms = _arg;
    return *this;
  }
  Type & set__query_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->query_timestamp = _arg;
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
    day2::srv::GetRobotStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::GetRobotStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::GetRobotStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::GetRobotStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__GetRobotStatus_Response
    std::shared_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__GetRobotStatus_Response
    std::shared_ptr<day2::srv::GetRobotStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotStatus_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->current_status != other.current_status) {
      return false;
    }
    if (this->sensor_data != other.sensor_data) {
      return false;
    }
    if (this->diagnostic_messages != other.diagnostic_messages) {
      return false;
    }
    if (this->status_history != other.status_history) {
      return false;
    }
    if (this->uptime_hours != other.uptime_hours) {
      return false;
    }
    if (this->total_commands_executed != other.total_commands_executed) {
      return false;
    }
    if (this->total_distance_traveled != other.total_distance_traveled) {
      return false;
    }
    if (this->error_count_today != other.error_count_today) {
      return false;
    }
    if (this->average_response_time_ms != other.average_response_time_ms) {
      return false;
    }
    if (this->cpu_usage_percent != other.cpu_usage_percent) {
      return false;
    }
    if (this->memory_usage_percent != other.memory_usage_percent) {
      return false;
    }
    if (this->network_latency_ms != other.network_latency_ms) {
      return false;
    }
    if (this->query_timestamp != other.query_timestamp) {
      return false;
    }
    if (this->last_update_time != other.last_update_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotStatus_Response_

// alias to use template instance with default allocator
using GetRobotStatus_Response =
  day2::srv::GetRobotStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__GetRobotStatus_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__GetRobotStatus_Event __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotStatus_Event_
{
  using Type = GetRobotStatus_Event_<ContainerAllocator>;

  explicit GetRobotStatus_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetRobotStatus_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::GetRobotStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::GetRobotStatus_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::GetRobotStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::GetRobotStatus_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::GetRobotStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::GetRobotStatus_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::GetRobotStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::GetRobotStatus_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::srv::GetRobotStatus_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::GetRobotStatus_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::GetRobotStatus_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::GetRobotStatus_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__GetRobotStatus_Event
    std::shared_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__GetRobotStatus_Event
    std::shared_ptr<day2::srv::GetRobotStatus_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotStatus_Event_ & other) const
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
  bool operator!=(const GetRobotStatus_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotStatus_Event_

// alias to use template instance with default allocator
using GetRobotStatus_Event =
  day2::srv::GetRobotStatus_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2

namespace day2
{

namespace srv
{

struct GetRobotStatus
{
  using Request = day2::srv::GetRobotStatus_Request;
  using Response = day2::srv::GetRobotStatus_Response;
  using Event = day2::srv::GetRobotStatus_Event;
};

}  // namespace srv

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_HPP_
