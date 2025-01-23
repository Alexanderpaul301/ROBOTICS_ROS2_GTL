// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_manager_msgs:msg/TaskConfig.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__STRUCT_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'plist'
#include "rcl_interfaces/msg/detail/parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__msg__TaskConfig __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__msg__TaskConfig __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskConfig_
{
  using Type = TaskConfig_<ContainerAllocator>;

  explicit TaskConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TaskConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _plist_type =
    std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::Parameter_<ContainerAllocator>>>;
  _plist_type plist;

  // setters for named parameter idiom
  Type & set__plist(
    const std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::Parameter_<ContainerAllocator>>> & _arg)
  {
    this->plist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_manager_msgs::msg::TaskConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::msg::TaskConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::TaskConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::TaskConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__msg__TaskConfig
    std::shared_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__msg__TaskConfig
    std::shared_ptr<task_manager_msgs::msg::TaskConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskConfig_ & other) const
  {
    if (this->plist != other.plist) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskConfig_

// alias to use template instance with default allocator
using TaskConfig =
  task_manager_msgs::msg::TaskConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__STRUCT_HPP_
