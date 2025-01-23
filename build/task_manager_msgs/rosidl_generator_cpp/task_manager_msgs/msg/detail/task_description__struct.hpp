// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_manager_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'config'
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__msg__TaskDescription __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__msg__TaskDescription __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskDescription_
{
  using Type = TaskDescription_<ContainerAllocator>;

  explicit TaskDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
      this->periodic = false;
    }
  }

  explicit TaskDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
      this->periodic = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _periodic_type =
    bool;
  _periodic_type periodic;
  using _config_type =
    std::vector<rcl_interfaces::msg::ParameterDescriptor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::ParameterDescriptor_<ContainerAllocator>>>;
  _config_type config;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__periodic(
    const bool & _arg)
  {
    this->periodic = _arg;
    return *this;
  }
  Type & set__config(
    const std::vector<rcl_interfaces::msg::ParameterDescriptor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::ParameterDescriptor_<ContainerAllocator>>> & _arg)
  {
    this->config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_manager_msgs::msg::TaskDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::msg::TaskDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::TaskDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::TaskDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__msg__TaskDescription
    std::shared_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__msg__TaskDescription
    std::shared_ptr<task_manager_msgs::msg::TaskDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskDescription_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->periodic != other.periodic) {
      return false;
    }
    if (this->config != other.config) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskDescription_

// alias to use template instance with default allocator
using TaskDescription =
  task_manager_msgs::msg::TaskDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_HPP_
