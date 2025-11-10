// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stonefish_ros2:msg/EventArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "stonefish_ros2/msg/event_array.h"


#ifndef STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__STRUCT_H_
#define STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'events'
#include "stonefish_ros2/msg/detail/event__struct.h"

/// Struct defined in msg/EventArray in the package stonefish_ros2.
typedef struct stonefish_ros2__msg__EventArray
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  stonefish_ros2__msg__Event__Sequence events;
} stonefish_ros2__msg__EventArray;

// Struct for a sequence of stonefish_ros2__msg__EventArray.
typedef struct stonefish_ros2__msg__EventArray__Sequence
{
  stonefish_ros2__msg__EventArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stonefish_ros2__msg__EventArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STONEFISH_ROS2__MSG__DETAIL__EVENT_ARRAY__STRUCT_H_
