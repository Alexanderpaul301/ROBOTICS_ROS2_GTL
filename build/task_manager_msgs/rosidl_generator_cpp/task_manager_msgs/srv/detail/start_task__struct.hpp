// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_manager_msgs:srv/StartTask.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__STRUCT_HPP_
#define TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'config'
#include "rcl_interfaces/msg/detail/parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__srv__StartTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__srv__StartTask_Request __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartTask_Request_
{
  using Type = StartTask_Request_<ContainerAllocator>;

  explicit StartTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit StartTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _config_type =
    std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::Parameter_<ContainerAllocator>>>;
  _config_type config;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__config(
    const std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::Parameter_<ContainerAllocator>>> & _arg)
  {
    this->config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_manager_msgs::srv::StartTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::srv::StartTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::StartTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::StartTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__srv__StartTask_Request
    std::shared_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__srv__StartTask_Request
    std::shared_ptr<task_manager_msgs::srv::StartTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartTask_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->config != other.config) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartTask_Request_

// alias to use template instance with default allocator
using StartTask_Request =
  task_manager_msgs::srv::StartTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_manager_msgs


#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__srv__StartTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__srv__StartTask_Response __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartTask_Response_
{
  using Type = StartTask_Response_<ContainerAllocator>;

  explicit StartTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit StartTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_manager_msgs::srv::StartTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::srv::StartTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::StartTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::StartTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__srv__StartTask_Response
    std::shared_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__srv__StartTask_Response
    std::shared_ptr<task_manager_msgs::srv::StartTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartTask_Response_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartTask_Response_

// alias to use template instance with default allocator
using StartTask_Response =
  task_manager_msgs::srv::StartTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_manager_msgs

namespace task_manager_msgs
{

namespace srv
{

struct StartTask
{
  using Request = task_manager_msgs::srv::StartTask_Request;
  using Response = task_manager_msgs::srv::StartTask_Response;
};

}  // namespace srv

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__STRUCT_HPP_
