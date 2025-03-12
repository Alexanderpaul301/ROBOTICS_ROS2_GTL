// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wpa_cli_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__NETWORK__TRAITS_HPP_
#define WPA_CLI_MSGS__MSG__DETAIL__NETWORK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wpa_cli_msgs/msg/detail/network__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wpa_cli_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Network & msg,
  std::ostream & out)
{
  out << "{";
  // member: bssid
  {
    out << "bssid: ";
    rosidl_generator_traits::value_to_yaml(msg.bssid, out);
    out << ", ";
  }

  // member: ssid
  {
    out << "ssid: ";
    rosidl_generator_traits::value_to_yaml(msg.ssid, out);
    out << ", ";
  }

  // member: channel
  {
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Network & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bssid: ";
    rosidl_generator_traits::value_to_yaml(msg.bssid, out);
    out << "\n";
  }

  // member: ssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssid: ";
    rosidl_generator_traits::value_to_yaml(msg.ssid, out);
    out << "\n";
  }

  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Network & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wpa_cli_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wpa_cli_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wpa_cli_msgs::msg::Network & msg,
  std::ostream & out, size_t indentation = 0)
{
  wpa_cli_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wpa_cli_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wpa_cli_msgs::msg::Network & msg)
{
  return wpa_cli_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wpa_cli_msgs::msg::Network>()
{
  return "wpa_cli_msgs::msg::Network";
}

template<>
inline const char * name<wpa_cli_msgs::msg::Network>()
{
  return "wpa_cli_msgs/msg/Network";
}

template<>
struct has_fixed_size<wpa_cli_msgs::msg::Network>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wpa_cli_msgs::msg::Network>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wpa_cli_msgs::msg::Network>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WPA_CLI_MSGS__MSG__DETAIL__NETWORK__TRAITS_HPP_
