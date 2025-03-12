// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wpa_cli_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__NETWORK__STRUCT_HPP_
#define WPA_CLI_MSGS__MSG__DETAIL__NETWORK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wpa_cli_msgs__msg__Network __attribute__((deprecated))
#else
# define DEPRECATED__wpa_cli_msgs__msg__Network __declspec(deprecated)
#endif

namespace wpa_cli_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Network_
{
  using Type = Network_<ContainerAllocator>;

  explicit Network_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bssid = "";
      this->ssid = "";
      this->channel = 0l;
      this->level = 0l;
      this->info = "";
    }
  }

  explicit Network_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bssid(_alloc),
    ssid(_alloc),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bssid = "";
      this->ssid = "";
      this->channel = 0l;
      this->level = 0l;
      this->info = "";
    }
  }

  // field types and members
  using _bssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bssid_type bssid;
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _channel_type =
    int32_t;
  _channel_type channel;
  using _level_type =
    int32_t;
  _level_type level;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__bssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bssid = _arg;
    return *this;
  }
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__channel(
    const int32_t & _arg)
  {
    this->channel = _arg;
    return *this;
  }
  Type & set__level(
    const int32_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wpa_cli_msgs::msg::Network_<ContainerAllocator> *;
  using ConstRawPtr =
    const wpa_cli_msgs::msg::Network_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wpa_cli_msgs::msg::Network_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wpa_cli_msgs::msg::Network_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wpa_cli_msgs__msg__Network
    std::shared_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wpa_cli_msgs__msg__Network
    std::shared_ptr<wpa_cli_msgs::msg::Network_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Network_ & other) const
  {
    if (this->bssid != other.bssid) {
      return false;
    }
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Network_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Network_

// alias to use template instance with default allocator
using Network =
  wpa_cli_msgs::msg::Network_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wpa_cli_msgs

#endif  // WPA_CLI_MSGS__MSG__DETAIL__NETWORK__STRUCT_HPP_
