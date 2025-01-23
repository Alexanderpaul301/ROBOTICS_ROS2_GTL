// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cs7630_msgs:msg/ROIArray.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_HPP_
#define CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_HPP_

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
// Member 'rois'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cs7630_msgs__msg__ROIArray __attribute__((deprecated))
#else
# define DEPRECATED__cs7630_msgs__msg__ROIArray __declspec(deprecated)
#endif

namespace cs7630_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ROIArray_
{
  using Type = ROIArray_<ContainerAllocator>;

  explicit ROIArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ROIArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rois_type =
    std::vector<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>>>;
  _rois_type rois;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rois(
    const std::vector<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>>> & _arg)
  {
    this->rois = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cs7630_msgs::msg::ROIArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const cs7630_msgs::msg::ROIArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cs7630_msgs::msg::ROIArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cs7630_msgs::msg::ROIArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cs7630_msgs__msg__ROIArray
    std::shared_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cs7630_msgs__msg__ROIArray
    std::shared_ptr<cs7630_msgs::msg::ROIArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ROIArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rois != other.rois) {
      return false;
    }
    return true;
  }
  bool operator!=(const ROIArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ROIArray_

// alias to use template instance with default allocator
using ROIArray =
  cs7630_msgs::msg::ROIArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cs7630_msgs

#endif  // CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_HPP_
