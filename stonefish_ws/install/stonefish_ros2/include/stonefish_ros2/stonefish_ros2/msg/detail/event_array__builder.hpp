// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stonefish_ros2:msg/EventArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "stonefish_ros2/msg/event_array.hpp"


#ifndef STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__BUILDER_HPP_
#define STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stonefish_ros2/msg/detail/event_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stonefish_ros2
{

namespace msg
{

namespace builder
{

class Init_EventArray_events
{
public:
  explicit Init_EventArray_events(::stonefish_ros2::msg::EventArray & msg)
  : msg_(msg)
  {}
  ::stonefish_ros2::msg::EventArray events(::stonefish_ros2::msg::EventArray::_events_type arg)
  {
    msg_.events = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stonefish_ros2::msg::EventArray msg_;
};

class Init_EventArray_width
{
public:
  explicit Init_EventArray_width(::stonefish_ros2::msg::EventArray & msg)
  : msg_(msg)
  {}
  Init_EventArray_events width(::stonefish_ros2::msg::EventArray::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_EventArray_events(msg_);
  }

private:
  ::stonefish_ros2::msg::EventArray msg_;
};

class Init_EventArray_height
{
public:
  explicit Init_EventArray_height(::stonefish_ros2::msg::EventArray & msg)
  : msg_(msg)
  {}
  Init_EventArray_width height(::stonefish_ros2::msg::EventArray::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_EventArray_width(msg_);
  }

private:
  ::stonefish_ros2::msg::EventArray msg_;
};

class Init_EventArray_header
{
public:
  Init_EventArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventArray_height header(::stonefish_ros2::msg::EventArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EventArray_height(msg_);
  }

private:
  ::stonefish_ros2::msg::EventArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stonefish_ros2::msg::EventArray>()
{
  return stonefish_ros2::msg::builder::Init_EventArray_header();
}

}  // namespace stonefish_ros2

#endif  // STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__BUILDER_HPP_
