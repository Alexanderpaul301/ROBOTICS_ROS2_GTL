// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wpa_cli_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__NETWORK__BUILDER_HPP_
#define WPA_CLI_MSGS__MSG__DETAIL__NETWORK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wpa_cli_msgs/msg/detail/network__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wpa_cli_msgs
{

namespace msg
{

namespace builder
{

class Init_Network_info
{
public:
  explicit Init_Network_info(::wpa_cli_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  ::wpa_cli_msgs::msg::Network info(::wpa_cli_msgs::msg::Network::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Network msg_;
};

class Init_Network_level
{
public:
  explicit Init_Network_level(::wpa_cli_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  Init_Network_info level(::wpa_cli_msgs::msg::Network::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Network_info(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Network msg_;
};

class Init_Network_channel
{
public:
  explicit Init_Network_channel(::wpa_cli_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  Init_Network_level channel(::wpa_cli_msgs::msg::Network::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_Network_level(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Network msg_;
};

class Init_Network_ssid
{
public:
  explicit Init_Network_ssid(::wpa_cli_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  Init_Network_channel ssid(::wpa_cli_msgs::msg::Network::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_Network_channel(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Network msg_;
};

class Init_Network_bssid
{
public:
  Init_Network_bssid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Network_ssid bssid(::wpa_cli_msgs::msg::Network::_bssid_type arg)
  {
    msg_.bssid = std::move(arg);
    return Init_Network_ssid(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Network msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wpa_cli_msgs::msg::Network>()
{
  return wpa_cli_msgs::msg::builder::Init_Network_bssid();
}

}  // namespace wpa_cli_msgs

#endif  // WPA_CLI_MSGS__MSG__DETAIL__NETWORK__BUILDER_HPP_
