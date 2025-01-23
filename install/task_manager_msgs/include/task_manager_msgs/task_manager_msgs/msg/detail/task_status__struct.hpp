// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_manager_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'plist'
#include "rcl_interfaces/msg/detail/parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__msg__TaskStatus __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__msg__TaskStatus __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskStatus_
{
  using Type = TaskStatus_<ContainerAllocator>;

  explicit TaskStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->name = "";
      this->status = 0;
      this->status_string = "";
    }
  }

  explicit TaskStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    status_string(_alloc),
    status_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->name = "";
      this->status = 0;
      this->status_string = "";
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _status_type =
    uint8_t;
  _status_type status;
  using _status_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_string_type status_string;
  using _status_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _status_time_type status_time;
  using _plist_type =
    std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::Parameter_<ContainerAllocator>>>;
  _plist_type plist;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__status_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_string = _arg;
    return *this;
  }
  Type & set__status_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->status_time = _arg;
    return *this;
  }
  Type & set__plist(
    const std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::Parameter_<ContainerAllocator>>> & _arg)
  {
    this->plist = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TASK_NEWBORN =
    0u;
  static constexpr uint8_t TASK_CONFIGURED =
    1u;
  static constexpr uint8_t TASK_INITIALISED =
    2u;
  static constexpr uint8_t TASK_RUNNING =
    3u;
  static constexpr uint8_t TASK_COMPLETED =
    4u;
  static constexpr uint8_t TASK_TERMINATED =
    128u;
  static constexpr uint8_t TASK_INTERRUPTED =
    6u;
  static constexpr uint8_t TASK_FAILED =
    7u;
  static constexpr uint8_t TASK_TIMEOUT =
    8u;
  static constexpr uint8_t TASK_CONFIGURATION_FAILED =
    9u;
  static constexpr uint8_t TASK_INITIALISATION_FAILED =
    10u;

  // pointer types
  using RawPtr =
    task_manager_msgs::msg::TaskStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::msg::TaskStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::TaskStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::TaskStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__msg__TaskStatus
    std::shared_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__msg__TaskStatus
    std::shared_ptr<task_manager_msgs::msg::TaskStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskStatus_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->status_string != other.status_string) {
      return false;
    }
    if (this->status_time != other.status_time) {
      return false;
    }
    if (this->plist != other.plist) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskStatus_

// alias to use template instance with default allocator
using TaskStatus =
  task_manager_msgs::msg::TaskStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_NEWBORN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_CONFIGURED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_INITIALISED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_TERMINATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_INTERRUPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_CONFIGURATION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatus_<ContainerAllocator>::TASK_INITIALISATION_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_HPP_
