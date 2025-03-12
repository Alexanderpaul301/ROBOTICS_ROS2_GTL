// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wpa_cli_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__SCAN__BUILDER_HPP_
#define WPA_CLI_MSGS__MSG__DETAIL__SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wpa_cli_msgs/msg/detail/scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wpa_cli_msgs
{

namespace msg
{

namespace builder
{

class Init_Scan_networks
{
public:
  explicit Init_Scan_networks(::wpa_cli_msgs::msg::Scan & msg)
  : msg_(msg)
  {}
  ::wpa_cli_msgs::msg::Scan networks(::wpa_cli_msgs::msg::Scan::_networks_type arg)
  {
    msg_.networks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Scan msg_;
};

class Init_Scan_interface
{
public:
  explicit Init_Scan_interface(::wpa_cli_msgs::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_networks interface(::wpa_cli_msgs::msg::Scan::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return Init_Scan_networks(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Scan msg_;
};

class Init_Scan_header
{
public:
  Init_Scan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Scan_interface header(::wpa_cli_msgs::msg::Scan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Scan_interface(msg_);
  }

private:
  ::wpa_cli_msgs::msg::Scan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wpa_cli_msgs::msg::Scan>()
{
  return wpa_cli_msgs::msg::builder::Init_Scan_header();
}

}  // namespace wpa_cli_msgs

#endif  // WPA_CLI_MSGS__MSG__DETAIL__SCAN__BUILDER_HPP_
