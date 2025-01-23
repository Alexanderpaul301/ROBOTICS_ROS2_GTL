// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_manager_msgs:msg/EncapsulatedMessage.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__STRUCT_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__msg__EncapsulatedMessage __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__msg__EncapsulatedMessage __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncapsulatedMessage_
{
  using Type = EncapsulatedMessage_<ContainerAllocator>;

  explicit EncapsulatedMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->md5sum = "";
      this->data = "";
    }
  }

  explicit EncapsulatedMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    md5sum(_alloc),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->md5sum = "";
      this->data = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _md5sum_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _md5sum_type md5sum;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__md5sum(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->md5sum = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__msg__EncapsulatedMessage
    std::shared_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__msg__EncapsulatedMessage
    std::shared_ptr<task_manager_msgs::msg::EncapsulatedMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncapsulatedMessage_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->md5sum != other.md5sum) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncapsulatedMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncapsulatedMessage_

// alias to use template instance with default allocator
using EncapsulatedMessage =
  task_manager_msgs::msg::EncapsulatedMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__STRUCT_HPP_
