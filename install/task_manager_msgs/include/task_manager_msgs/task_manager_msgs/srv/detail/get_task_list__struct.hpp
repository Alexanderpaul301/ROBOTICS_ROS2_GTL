// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_manager_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_HPP_
#define TASK_MANAGER_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__srv__GetTaskList_Request __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__srv__GetTaskList_Request __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTaskList_Request_
{
  using Type = GetTaskList_Request_<ContainerAllocator>;

  explicit GetTaskList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetTaskList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__srv__GetTaskList_Request
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__srv__GetTaskList_Request
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTaskList_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTaskList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTaskList_Request_

// alias to use template instance with default allocator
using GetTaskList_Request =
  task_manager_msgs::srv::GetTaskList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_manager_msgs


// Include directives for member types
// Member 'tlist'
#include "task_manager_msgs/msg/detail/task_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_manager_msgs__srv__GetTaskList_Response __attribute__((deprecated))
#else
# define DEPRECATED__task_manager_msgs__srv__GetTaskList_Response __declspec(deprecated)
#endif

namespace task_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTaskList_Response_
{
  using Type = GetTaskList_Response_<ContainerAllocator>;

  explicit GetTaskList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetTaskList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tlist_type =
    std::vector<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>>>;
  _tlist_type tlist;

  // setters for named parameter idiom
  Type & set__tlist(
    const std::vector<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<task_manager_msgs::msg::TaskDescription_<ContainerAllocator>>> & _arg)
  {
    this->tlist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager_msgs__srv__GetTaskList_Response
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager_msgs__srv__GetTaskList_Response
    std::shared_ptr<task_manager_msgs::srv::GetTaskList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTaskList_Response_ & other) const
  {
    if (this->tlist != other.tlist) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTaskList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTaskList_Response_

// alias to use template instance with default allocator
using GetTaskList_Response =
  task_manager_msgs::srv::GetTaskList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_manager_msgs

namespace task_manager_msgs
{

namespace srv
{

struct GetTaskList
{
  using Request = task_manager_msgs::srv::GetTaskList_Request;
  using Response = task_manager_msgs::srv::GetTaskList_Response;
};

}  // namespace srv

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_HPP_
