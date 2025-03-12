// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wpa_cli_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__SCAN__STRUCT_HPP_
#define WPA_CLI_MSGS__MSG__DETAIL__SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'networks'
#include "wpa_cli_msgs/msg/detail/network__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wpa_cli_msgs__msg__Scan __attribute__((deprecated))
#else
# define DEPRECATED__wpa_cli_msgs__msg__Scan __declspec(deprecated)
#endif

namespace wpa_cli_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Scan_
{
  using Type = Scan_<ContainerAllocator>;

  explicit Scan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interface = "";
    }
  }

  explicit Scan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    interface(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interface = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _interface_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _interface_type interface;
  using _networks_type =
    std::vector<wpa_cli_msgs::msg::Network_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wpa_cli_msgs::msg::Network_<ContainerAllocator>>>;
  _networks_type networks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__interface(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->interface = _arg;
    return *this;
  }
  Type & set__networks(
    const std::vector<wpa_cli_msgs::msg::Network_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wpa_cli_msgs::msg::Network_<ContainerAllocator>>> & _arg)
  {
    this->networks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wpa_cli_msgs::msg::Scan_<ContainerAllocator> *;
  using ConstRawPtr =
    const wpa_cli_msgs::msg::Scan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wpa_cli_msgs::msg::Scan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wpa_cli_msgs::msg::Scan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wpa_cli_msgs__msg__Scan
    std::shared_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wpa_cli_msgs__msg__Scan
    std::shared_ptr<wpa_cli_msgs::msg::Scan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Scan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->interface != other.interface) {
      return false;
    }
    if (this->networks != other.networks) {
      return false;
    }
    return true;
  }
  bool operator!=(const Scan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Scan_

// alias to use template instance with default allocator
using Scan =
  wpa_cli_msgs::msg::Scan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wpa_cli_msgs

#endif  // WPA_CLI_MSGS__MSG__DETAIL__SCAN__STRUCT_HPP_
