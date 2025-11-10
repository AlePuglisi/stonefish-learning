// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stonefish_ros2:msg/EventArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stonefish_ros2/msg/detail/event_array__functions.h"
#include "stonefish_ros2/msg/detail/event_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace stonefish_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EventArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stonefish_ros2::msg::EventArray(_init);
}

void EventArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stonefish_ros2::msg::EventArray *>(message_memory);
  typed_message->~EventArray();
}

size_t size_function__EventArray__events(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<stonefish_ros2::msg::Event> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EventArray__events(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<stonefish_ros2::msg::Event> *>(untyped_member);
  return &member[index];
}

void * get_function__EventArray__events(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<stonefish_ros2::msg::Event> *>(untyped_member);
  return &member[index];
}

void fetch_function__EventArray__events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const stonefish_ros2::msg::Event *>(
    get_const_function__EventArray__events(untyped_member, index));
  auto & value = *reinterpret_cast<stonefish_ros2::msg::Event *>(untyped_value);
  value = item;
}

void assign_function__EventArray__events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<stonefish_ros2::msg::Event *>(
    get_function__EventArray__events(untyped_member, index));
  const auto & value = *reinterpret_cast<const stonefish_ros2::msg::Event *>(untyped_value);
  item = value;
}

void resize_function__EventArray__events(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<stonefish_ros2::msg::Event> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EventArray_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::EventArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::EventArray, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::EventArray, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "events",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<stonefish_ros2::msg::Event>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::EventArray, events),  // bytes offset in struct
    nullptr,  // default value
    size_function__EventArray__events,  // size() function pointer
    get_const_function__EventArray__events,  // get_const(index) function pointer
    get_function__EventArray__events,  // get(index) function pointer
    fetch_function__EventArray__events,  // fetch(index, &value) function pointer
    assign_function__EventArray__events,  // assign(index, value) function pointer
    resize_function__EventArray__events  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EventArray_message_members = {
  "stonefish_ros2::msg",  // message namespace
  "EventArray",  // message name
  4,  // number of fields
  sizeof(stonefish_ros2::msg::EventArray),
  false,  // has_any_key_member_
  EventArray_message_member_array,  // message members
  EventArray_init_function,  // function to initialize message memory (memory has to be allocated)
  EventArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EventArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EventArray_message_members,
  get_message_typesupport_handle_function,
  &stonefish_ros2__msg__EventArray__get_type_hash,
  &stonefish_ros2__msg__EventArray__get_type_description,
  &stonefish_ros2__msg__EventArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace stonefish_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stonefish_ros2::msg::EventArray>()
{
  return &::stonefish_ros2::msg::rosidl_typesupport_introspection_cpp::EventArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stonefish_ros2, msg, EventArray)() {
  return &::stonefish_ros2::msg::rosidl_typesupport_introspection_cpp::EventArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
