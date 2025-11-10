// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stonefish_ros2:msg/EventArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "stonefish_ros2/msg/event_array.hpp"


#ifndef STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__STRUCT_HPP_
#define STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__STRUCT_HPP_

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
// Member 'events'
#include "stonefish_ros2/msg/detail/event__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stonefish_ros2__msg__EventArray __attribute__((deprecated))
#else
# define DEPRECATED__stonefish_ros2__msg__EventArray __declspec(deprecated)
#endif

namespace stonefish_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventArray_
{
  using Type = EventArray_<ContainerAllocator>;

  explicit EventArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  explicit EventArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _events_type =
    std::vector<stonefish_ros2::msg::Event_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<stonefish_ros2::msg::Event_<ContainerAllocator>>>;
  _events_type events;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__events(
    const std::vector<stonefish_ros2::msg::Event_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<stonefish_ros2::msg::Event_<ContainerAllocator>>> & _arg)
  {
    this->events = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stonefish_ros2::msg::EventArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const stonefish_ros2::msg::EventArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stonefish_ros2::msg::EventArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stonefish_ros2::msg::EventArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stonefish_ros2__msg__EventArray
    std::shared_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stonefish_ros2__msg__EventArray
    std::shared_ptr<stonefish_ros2::msg::EventArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventArray_

// alias to use template instance with default allocator
using EventArray =
  stonefish_ros2::msg::EventArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stonefish_ros2

#endif  // STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__STRUCT_HPP_
