// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:action/MapArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/map_area.hpp"


#ifndef DAY2__ACTION__DETAIL__MAP_AREA__STRUCT_HPP_
#define DAY2__ACTION__DETAIL__MAP_AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'boundary_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_Goal __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_Goal __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_Goal_
{
  using Type = MapArea_Goal_<ContainerAllocator>;

  explicit MapArea_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->mapping_mode = "";
      this->coverage_percentage = 0.0f;
      this->include_3d_data = false;
      this->max_exploration_speed = 0.0f;
      this->sensor_overlap_ratio = 0.0f;
      this->waypoint_spacing = 0.0f;
      this->exploration_pattern = "";
      this->sensor_range = 0.0f;
      this->use_slam = false;
      this->slam_algorithm = "";
      this->min_quality_threshold = 0.0f;
      this->optimize_for_accuracy = false;
      this->optimize_for_speed = false;
      this->timeout_seconds = 0.0f;
    }
  }

  explicit MapArea_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mapping_mode(_alloc),
    exploration_pattern(_alloc),
    slam_algorithm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->mapping_mode = "";
      this->coverage_percentage = 0.0f;
      this->include_3d_data = false;
      this->max_exploration_speed = 0.0f;
      this->sensor_overlap_ratio = 0.0f;
      this->waypoint_spacing = 0.0f;
      this->exploration_pattern = "";
      this->sensor_range = 0.0f;
      this->use_slam = false;
      this->slam_algorithm = "";
      this->min_quality_threshold = 0.0f;
      this->optimize_for_accuracy = false;
      this->optimize_for_speed = false;
      this->timeout_seconds = 0.0f;
    }
  }

  // field types and members
  using _boundary_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _boundary_points_type boundary_points;
  using _resolution_type =
    float;
  _resolution_type resolution;
  using _mapping_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mapping_mode_type mapping_mode;
  using _coverage_percentage_type =
    float;
  _coverage_percentage_type coverage_percentage;
  using _include_3d_data_type =
    bool;
  _include_3d_data_type include_3d_data;
  using _max_exploration_speed_type =
    float;
  _max_exploration_speed_type max_exploration_speed;
  using _sensor_overlap_ratio_type =
    float;
  _sensor_overlap_ratio_type sensor_overlap_ratio;
  using _waypoint_spacing_type =
    float;
  _waypoint_spacing_type waypoint_spacing;
  using _exploration_pattern_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _exploration_pattern_type exploration_pattern;
  using _active_sensors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_sensors_type active_sensors;
  using _sensor_range_type =
    float;
  _sensor_range_type sensor_range;
  using _use_slam_type =
    bool;
  _use_slam_type use_slam;
  using _slam_algorithm_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _slam_algorithm_type slam_algorithm;
  using _min_quality_threshold_type =
    float;
  _min_quality_threshold_type min_quality_threshold;
  using _optimize_for_accuracy_type =
    bool;
  _optimize_for_accuracy_type optimize_for_accuracy;
  using _optimize_for_speed_type =
    bool;
  _optimize_for_speed_type optimize_for_speed;
  using _timeout_seconds_type =
    float;
  _timeout_seconds_type timeout_seconds;

  // setters for named parameter idiom
  Type & set__boundary_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->boundary_points = _arg;
    return *this;
  }
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__mapping_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mapping_mode = _arg;
    return *this;
  }
  Type & set__coverage_percentage(
    const float & _arg)
  {
    this->coverage_percentage = _arg;
    return *this;
  }
  Type & set__include_3d_data(
    const bool & _arg)
  {
    this->include_3d_data = _arg;
    return *this;
  }
  Type & set__max_exploration_speed(
    const float & _arg)
  {
    this->max_exploration_speed = _arg;
    return *this;
  }
  Type & set__sensor_overlap_ratio(
    const float & _arg)
  {
    this->sensor_overlap_ratio = _arg;
    return *this;
  }
  Type & set__waypoint_spacing(
    const float & _arg)
  {
    this->waypoint_spacing = _arg;
    return *this;
  }
  Type & set__exploration_pattern(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->exploration_pattern = _arg;
    return *this;
  }
  Type & set__active_sensors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_sensors = _arg;
    return *this;
  }
  Type & set__sensor_range(
    const float & _arg)
  {
    this->sensor_range = _arg;
    return *this;
  }
  Type & set__use_slam(
    const bool & _arg)
  {
    this->use_slam = _arg;
    return *this;
  }
  Type & set__slam_algorithm(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->slam_algorithm = _arg;
    return *this;
  }
  Type & set__min_quality_threshold(
    const float & _arg)
  {
    this->min_quality_threshold = _arg;
    return *this;
  }
  Type & set__optimize_for_accuracy(
    const bool & _arg)
  {
    this->optimize_for_accuracy = _arg;
    return *this;
  }
  Type & set__optimize_for_speed(
    const bool & _arg)
  {
    this->optimize_for_speed = _arg;
    return *this;
  }
  Type & set__timeout_seconds(
    const float & _arg)
  {
    this->timeout_seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::MapArea_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_Goal
    std::shared_ptr<day2::action::MapArea_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_Goal
    std::shared_ptr<day2::action::MapArea_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_Goal_ & other) const
  {
    if (this->boundary_points != other.boundary_points) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->mapping_mode != other.mapping_mode) {
      return false;
    }
    if (this->coverage_percentage != other.coverage_percentage) {
      return false;
    }
    if (this->include_3d_data != other.include_3d_data) {
      return false;
    }
    if (this->max_exploration_speed != other.max_exploration_speed) {
      return false;
    }
    if (this->sensor_overlap_ratio != other.sensor_overlap_ratio) {
      return false;
    }
    if (this->waypoint_spacing != other.waypoint_spacing) {
      return false;
    }
    if (this->exploration_pattern != other.exploration_pattern) {
      return false;
    }
    if (this->active_sensors != other.active_sensors) {
      return false;
    }
    if (this->sensor_range != other.sensor_range) {
      return false;
    }
    if (this->use_slam != other.use_slam) {
      return false;
    }
    if (this->slam_algorithm != other.slam_algorithm) {
      return false;
    }
    if (this->min_quality_threshold != other.min_quality_threshold) {
      return false;
    }
    if (this->optimize_for_accuracy != other.optimize_for_accuracy) {
      return false;
    }
    if (this->optimize_for_speed != other.optimize_for_speed) {
      return false;
    }
    if (this->timeout_seconds != other.timeout_seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_Goal_

// alias to use template instance with default allocator
using MapArea_Goal =
  day2::action::MapArea_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_Result __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_Result __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_Result_
{
  using Type = MapArea_Result_<ContainerAllocator>;

  explicit MapArea_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->map_topic = "";
      this->map_file_path = "";
      this->area_covered = 0.0f;
      this->coverage_percentage = 0.0f;
      this->map_accuracy = 0.0f;
      this->feature_density = 0.0f;
      this->total_mapping_time = 0.0f;
      this->total_distance_traveled = 0.0f;
      this->total_sensor_readings = 0ul;
      this->average_mapping_speed = 0.0f;
      this->map_width_pixels = 0ul;
      this->map_height_pixels = 0ul;
      this->occupied_cells = 0ul;
      this->free_cells = 0ul;
      this->unknown_cells = 0ul;
      this->error_code = 0ul;
    }
  }

  explicit MapArea_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_message(_alloc),
    map_topic(_alloc),
    map_file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result_message = "";
      this->map_topic = "";
      this->map_file_path = "";
      this->area_covered = 0.0f;
      this->coverage_percentage = 0.0f;
      this->map_accuracy = 0.0f;
      this->feature_density = 0.0f;
      this->total_mapping_time = 0.0f;
      this->total_distance_traveled = 0.0f;
      this->total_sensor_readings = 0ul;
      this->average_mapping_speed = 0.0f;
      this->map_width_pixels = 0ul;
      this->map_height_pixels = 0ul;
      this->occupied_cells = 0ul;
      this->free_cells = 0ul;
      this->unknown_cells = 0ul;
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
  using _map_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_topic_type map_topic;
  using _map_file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_file_path_type map_file_path;
  using _area_covered_type =
    float;
  _area_covered_type area_covered;
  using _coverage_percentage_type =
    float;
  _coverage_percentage_type coverage_percentage;
  using _map_accuracy_type =
    float;
  _map_accuracy_type map_accuracy;
  using _feature_density_type =
    float;
  _feature_density_type feature_density;
  using _total_mapping_time_type =
    float;
  _total_mapping_time_type total_mapping_time;
  using _total_distance_traveled_type =
    float;
  _total_distance_traveled_type total_distance_traveled;
  using _total_sensor_readings_type =
    uint32_t;
  _total_sensor_readings_type total_sensor_readings;
  using _average_mapping_speed_type =
    float;
  _average_mapping_speed_type average_mapping_speed;
  using _map_width_pixels_type =
    uint32_t;
  _map_width_pixels_type map_width_pixels;
  using _map_height_pixels_type =
    uint32_t;
  _map_height_pixels_type map_height_pixels;
  using _occupied_cells_type =
    uint32_t;
  _occupied_cells_type occupied_cells;
  using _free_cells_type =
    uint32_t;
  _free_cells_type free_cells;
  using _unknown_cells_type =
    uint32_t;
  _unknown_cells_type unknown_cells;
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
  Type & set__map_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_topic = _arg;
    return *this;
  }
  Type & set__map_file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_file_path = _arg;
    return *this;
  }
  Type & set__area_covered(
    const float & _arg)
  {
    this->area_covered = _arg;
    return *this;
  }
  Type & set__coverage_percentage(
    const float & _arg)
  {
    this->coverage_percentage = _arg;
    return *this;
  }
  Type & set__map_accuracy(
    const float & _arg)
  {
    this->map_accuracy = _arg;
    return *this;
  }
  Type & set__feature_density(
    const float & _arg)
  {
    this->feature_density = _arg;
    return *this;
  }
  Type & set__total_mapping_time(
    const float & _arg)
  {
    this->total_mapping_time = _arg;
    return *this;
  }
  Type & set__total_distance_traveled(
    const float & _arg)
  {
    this->total_distance_traveled = _arg;
    return *this;
  }
  Type & set__total_sensor_readings(
    const uint32_t & _arg)
  {
    this->total_sensor_readings = _arg;
    return *this;
  }
  Type & set__average_mapping_speed(
    const float & _arg)
  {
    this->average_mapping_speed = _arg;
    return *this;
  }
  Type & set__map_width_pixels(
    const uint32_t & _arg)
  {
    this->map_width_pixels = _arg;
    return *this;
  }
  Type & set__map_height_pixels(
    const uint32_t & _arg)
  {
    this->map_height_pixels = _arg;
    return *this;
  }
  Type & set__occupied_cells(
    const uint32_t & _arg)
  {
    this->occupied_cells = _arg;
    return *this;
  }
  Type & set__free_cells(
    const uint32_t & _arg)
  {
    this->free_cells = _arg;
    return *this;
  }
  Type & set__unknown_cells(
    const uint32_t & _arg)
  {
    this->unknown_cells = _arg;
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
  static constexpr uint32_t ERROR_AREA_TOO_LARGE =
    1u;
  static constexpr uint32_t ERROR_SENSOR_FAILURE =
    2u;
  static constexpr uint32_t ERROR_LOCALIZATION_LOST =
    3u;
  static constexpr uint32_t ERROR_INSUFFICIENT_COVERAGE =
    4u;
  static constexpr uint32_t ERROR_MAP_QUALITY_LOW =
    5u;
  static constexpr uint32_t ERROR_TIMEOUT =
    6u;

  // pointer types
  using RawPtr =
    day2::action::MapArea_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_Result
    std::shared_ptr<day2::action::MapArea_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_Result
    std::shared_ptr<day2::action::MapArea_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result_message != other.result_message) {
      return false;
    }
    if (this->map_topic != other.map_topic) {
      return false;
    }
    if (this->map_file_path != other.map_file_path) {
      return false;
    }
    if (this->area_covered != other.area_covered) {
      return false;
    }
    if (this->coverage_percentage != other.coverage_percentage) {
      return false;
    }
    if (this->map_accuracy != other.map_accuracy) {
      return false;
    }
    if (this->feature_density != other.feature_density) {
      return false;
    }
    if (this->total_mapping_time != other.total_mapping_time) {
      return false;
    }
    if (this->total_distance_traveled != other.total_distance_traveled) {
      return false;
    }
    if (this->total_sensor_readings != other.total_sensor_readings) {
      return false;
    }
    if (this->average_mapping_speed != other.average_mapping_speed) {
      return false;
    }
    if (this->map_width_pixels != other.map_width_pixels) {
      return false;
    }
    if (this->map_height_pixels != other.map_height_pixels) {
      return false;
    }
    if (this->occupied_cells != other.occupied_cells) {
      return false;
    }
    if (this->free_cells != other.free_cells) {
      return false;
    }
    if (this->unknown_cells != other.unknown_cells) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_Result_

// alias to use template instance with default allocator
using MapArea_Result =
  day2::action::MapArea_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MapArea_Result_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MapArea_Result_<ContainerAllocator>::ERROR_AREA_TOO_LARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MapArea_Result_<ContainerAllocator>::ERROR_SENSOR_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MapArea_Result_<ContainerAllocator>::ERROR_LOCALIZATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MapArea_Result_<ContainerAllocator>::ERROR_INSUFFICIENT_COVERAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MapArea_Result_<ContainerAllocator>::ERROR_MAP_QUALITY_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MapArea_Result_<ContainerAllocator>::ERROR_TIMEOUT;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'current_position'
// Member 'next_target'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'last_sensor_update'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_Feedback __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_Feedback_
{
  using Type = MapArea_Feedback_<ContainerAllocator>;

  explicit MapArea_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_init),
    next_target(_init),
    last_sensor_update(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area_mapped_so_far = 0.0f;
      this->coverage_percentage = 0.0f;
      this->estimated_time_remaining = 0.0f;
      this->current_phase = "";
      this->waypoints_completed = 0ul;
      this->total_waypoints = 0ul;
      this->current_map_width = 0ul;
      this->current_map_height = 0ul;
      this->current_resolution = 0.0f;
      this->new_features_detected = 0ul;
      this->sensor_readings_per_second = 0ul;
      this->localization_confidence = 0.0f;
      this->loop_closures_detected = 0ul;
      this->pose_uncertainty = 0.0f;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
      this->storage_space_used = 0.0f;
    }
  }

  explicit MapArea_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_alloc, _init),
    current_phase(_alloc),
    next_target(_alloc, _init),
    last_sensor_update(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area_mapped_so_far = 0.0f;
      this->coverage_percentage = 0.0f;
      this->estimated_time_remaining = 0.0f;
      this->current_phase = "";
      this->waypoints_completed = 0ul;
      this->total_waypoints = 0ul;
      this->current_map_width = 0ul;
      this->current_map_height = 0ul;
      this->current_resolution = 0.0f;
      this->new_features_detected = 0ul;
      this->sensor_readings_per_second = 0ul;
      this->localization_confidence = 0.0f;
      this->loop_closures_detected = 0ul;
      this->pose_uncertainty = 0.0f;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
      this->storage_space_used = 0.0f;
    }
  }

  // field types and members
  using _current_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _current_position_type current_position;
  using _area_mapped_so_far_type =
    float;
  _area_mapped_so_far_type area_mapped_so_far;
  using _coverage_percentage_type =
    float;
  _coverage_percentage_type coverage_percentage;
  using _estimated_time_remaining_type =
    float;
  _estimated_time_remaining_type estimated_time_remaining;
  using _current_phase_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_phase_type current_phase;
  using _next_target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _next_target_type next_target;
  using _waypoints_completed_type =
    uint32_t;
  _waypoints_completed_type waypoints_completed;
  using _total_waypoints_type =
    uint32_t;
  _total_waypoints_type total_waypoints;
  using _current_map_width_type =
    uint32_t;
  _current_map_width_type current_map_width;
  using _current_map_height_type =
    uint32_t;
  _current_map_height_type current_map_height;
  using _current_resolution_type =
    float;
  _current_resolution_type current_resolution;
  using _new_features_detected_type =
    uint32_t;
  _new_features_detected_type new_features_detected;
  using _sensor_active_status_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _sensor_active_status_type sensor_active_status;
  using _sensor_data_quality_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _sensor_data_quality_type sensor_data_quality;
  using _sensor_readings_per_second_type =
    uint32_t;
  _sensor_readings_per_second_type sensor_readings_per_second;
  using _localization_confidence_type =
    float;
  _localization_confidence_type localization_confidence;
  using _loop_closures_detected_type =
    uint32_t;
  _loop_closures_detected_type loop_closures_detected;
  using _pose_uncertainty_type =
    float;
  _pose_uncertainty_type pose_uncertainty;
  using _cpu_usage_type =
    float;
  _cpu_usage_type cpu_usage;
  using _memory_usage_type =
    float;
  _memory_usage_type memory_usage;
  using _storage_space_used_type =
    float;
  _storage_space_used_type storage_space_used;
  using _last_sensor_update_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_sensor_update_type last_sensor_update;

  // setters for named parameter idiom
  Type & set__current_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__area_mapped_so_far(
    const float & _arg)
  {
    this->area_mapped_so_far = _arg;
    return *this;
  }
  Type & set__coverage_percentage(
    const float & _arg)
  {
    this->coverage_percentage = _arg;
    return *this;
  }
  Type & set__estimated_time_remaining(
    const float & _arg)
  {
    this->estimated_time_remaining = _arg;
    return *this;
  }
  Type & set__current_phase(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_phase = _arg;
    return *this;
  }
  Type & set__next_target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->next_target = _arg;
    return *this;
  }
  Type & set__waypoints_completed(
    const uint32_t & _arg)
  {
    this->waypoints_completed = _arg;
    return *this;
  }
  Type & set__total_waypoints(
    const uint32_t & _arg)
  {
    this->total_waypoints = _arg;
    return *this;
  }
  Type & set__current_map_width(
    const uint32_t & _arg)
  {
    this->current_map_width = _arg;
    return *this;
  }
  Type & set__current_map_height(
    const uint32_t & _arg)
  {
    this->current_map_height = _arg;
    return *this;
  }
  Type & set__current_resolution(
    const float & _arg)
  {
    this->current_resolution = _arg;
    return *this;
  }
  Type & set__new_features_detected(
    const uint32_t & _arg)
  {
    this->new_features_detected = _arg;
    return *this;
  }
  Type & set__sensor_active_status(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->sensor_active_status = _arg;
    return *this;
  }
  Type & set__sensor_data_quality(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->sensor_data_quality = _arg;
    return *this;
  }
  Type & set__sensor_readings_per_second(
    const uint32_t & _arg)
  {
    this->sensor_readings_per_second = _arg;
    return *this;
  }
  Type & set__localization_confidence(
    const float & _arg)
  {
    this->localization_confidence = _arg;
    return *this;
  }
  Type & set__loop_closures_detected(
    const uint32_t & _arg)
  {
    this->loop_closures_detected = _arg;
    return *this;
  }
  Type & set__pose_uncertainty(
    const float & _arg)
  {
    this->pose_uncertainty = _arg;
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
  Type & set__storage_space_used(
    const float & _arg)
  {
    this->storage_space_used = _arg;
    return *this;
  }
  Type & set__last_sensor_update(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_sensor_update = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::MapArea_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_Feedback
    std::shared_ptr<day2::action::MapArea_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_Feedback
    std::shared_ptr<day2::action::MapArea_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_Feedback_ & other) const
  {
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->area_mapped_so_far != other.area_mapped_so_far) {
      return false;
    }
    if (this->coverage_percentage != other.coverage_percentage) {
      return false;
    }
    if (this->estimated_time_remaining != other.estimated_time_remaining) {
      return false;
    }
    if (this->current_phase != other.current_phase) {
      return false;
    }
    if (this->next_target != other.next_target) {
      return false;
    }
    if (this->waypoints_completed != other.waypoints_completed) {
      return false;
    }
    if (this->total_waypoints != other.total_waypoints) {
      return false;
    }
    if (this->current_map_width != other.current_map_width) {
      return false;
    }
    if (this->current_map_height != other.current_map_height) {
      return false;
    }
    if (this->current_resolution != other.current_resolution) {
      return false;
    }
    if (this->new_features_detected != other.new_features_detected) {
      return false;
    }
    if (this->sensor_active_status != other.sensor_active_status) {
      return false;
    }
    if (this->sensor_data_quality != other.sensor_data_quality) {
      return false;
    }
    if (this->sensor_readings_per_second != other.sensor_readings_per_second) {
      return false;
    }
    if (this->localization_confidence != other.localization_confidence) {
      return false;
    }
    if (this->loop_closures_detected != other.loop_closures_detected) {
      return false;
    }
    if (this->pose_uncertainty != other.pose_uncertainty) {
      return false;
    }
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->storage_space_used != other.storage_space_used) {
      return false;
    }
    if (this->last_sensor_update != other.last_sensor_update) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_Feedback_

// alias to use template instance with default allocator
using MapArea_Feedback =
  day2::action::MapArea_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "day2/action/detail/map_area__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_SendGoal_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_SendGoal_Request_
{
  using Type = MapArea_SendGoal_Request_<ContainerAllocator>;

  explicit MapArea_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MapArea_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::MapArea_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const day2::action::MapArea_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::MapArea_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_SendGoal_Request
    std::shared_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_SendGoal_Request
    std::shared_ptr<day2::action::MapArea_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_SendGoal_Request_

// alias to use template instance with default allocator
using MapArea_SendGoal_Request =
  day2::action::MapArea_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_SendGoal_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_SendGoal_Response_
{
  using Type = MapArea_SendGoal_Response_<ContainerAllocator>;

  explicit MapArea_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MapArea_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::MapArea_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_SendGoal_Response
    std::shared_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_SendGoal_Response
    std::shared_ptr<day2::action::MapArea_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_SendGoal_Response_

// alias to use template instance with default allocator
using MapArea_SendGoal_Response =
  day2::action::MapArea_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_SendGoal_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_SendGoal_Event_
{
  using Type = MapArea_SendGoal_Event_<ContainerAllocator>;

  explicit MapArea_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MapArea_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::MapArea_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_SendGoal_Event
    std::shared_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_SendGoal_Event
    std::shared_ptr<day2::action::MapArea_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_SendGoal_Event_ & other) const
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
  bool operator!=(const MapArea_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_SendGoal_Event_

// alias to use template instance with default allocator
using MapArea_SendGoal_Event =
  day2::action::MapArea_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct MapArea_SendGoal
{
  using Request = day2::action::MapArea_SendGoal_Request;
  using Response = day2::action::MapArea_SendGoal_Response;
  using Event = day2::action::MapArea_SendGoal_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_GetResult_Request __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_GetResult_Request_
{
  using Type = MapArea_GetResult_Request_<ContainerAllocator>;

  explicit MapArea_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MapArea_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::MapArea_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_GetResult_Request
    std::shared_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_GetResult_Request
    std::shared_ptr<day2::action::MapArea_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_GetResult_Request_

// alias to use template instance with default allocator
using MapArea_GetResult_Request =
  day2::action::MapArea_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/map_area__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_GetResult_Response __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_GetResult_Response_
{
  using Type = MapArea_GetResult_Response_<ContainerAllocator>;

  explicit MapArea_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MapArea_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::MapArea_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const day2::action::MapArea_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::MapArea_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_GetResult_Response
    std::shared_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_GetResult_Response
    std::shared_ptr<day2::action::MapArea_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_GetResult_Response_

// alias to use template instance with default allocator
using MapArea_GetResult_Response =
  day2::action::MapArea_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_GetResult_Event __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_GetResult_Event_
{
  using Type = MapArea_GetResult_Event_<ContainerAllocator>;

  explicit MapArea_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MapArea_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::action::MapArea_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::action::MapArea_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::MapArea_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_GetResult_Event
    std::shared_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_GetResult_Event
    std::shared_ptr<day2::action::MapArea_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_GetResult_Event_ & other) const
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
  bool operator!=(const MapArea_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_GetResult_Event_

// alias to use template instance with default allocator
using MapArea_GetResult_Event =
  day2::action::MapArea_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace day2

namespace day2
{

namespace action
{

struct MapArea_GetResult
{
  using Request = day2::action::MapArea_GetResult_Request;
  using Response = day2::action::MapArea_GetResult_Response;
  using Event = day2::action::MapArea_GetResult_Event;
};

}  // namespace action

}  // namespace day2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "day2/action/detail/map_area__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__action__MapArea_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__day2__action__MapArea_FeedbackMessage __declspec(deprecated)
#endif

namespace day2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapArea_FeedbackMessage_
{
  using Type = MapArea_FeedbackMessage_<ContainerAllocator>;

  explicit MapArea_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MapArea_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    day2::action::MapArea_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const day2::action::MapArea_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::action::MapArea_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::action::MapArea_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::action::MapArea_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__action__MapArea_FeedbackMessage
    std::shared_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__action__MapArea_FeedbackMessage
    std::shared_ptr<day2::action::MapArea_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapArea_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapArea_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapArea_FeedbackMessage_

// alias to use template instance with default allocator
using MapArea_FeedbackMessage =
  day2::action::MapArea_FeedbackMessage_<std::allocator<void>>;

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

struct MapArea
{
  /// The goal message defined in the action definition.
  using Goal = day2::action::MapArea_Goal;
  /// The result message defined in the action definition.
  using Result = day2::action::MapArea_Result;
  /// The feedback message defined in the action definition.
  using Feedback = day2::action::MapArea_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = day2::action::MapArea_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = day2::action::MapArea_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = day2::action::MapArea_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MapArea MapArea;

}  // namespace action

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__MAP_AREA__STRUCT_HPP_
