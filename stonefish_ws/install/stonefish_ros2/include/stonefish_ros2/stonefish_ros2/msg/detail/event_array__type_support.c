// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stonefish_ros2:msg/EventArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stonefish_ros2/msg/detail/event_array__rosidl_typesupport_introspection_c.h"
#include "stonefish_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stonefish_ros2/msg/detail/event_array__functions.h"
#include "stonefish_ros2/msg/detail/event_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `events`
#include "stonefish_ros2/msg/event.h"
// Member `events`
#include "stonefish_ros2/msg/detail/event__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stonefish_ros2__msg__EventArray__init(message_memory);
}

void stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_fini_function(void * message_memory)
{
  stonefish_ros2__msg__EventArray__fini(message_memory);
}

size_t stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__size_function__EventArray__events(
  const void * untyped_member)
{
  const stonefish_ros2__msg__Event__Sequence * member =
    (const stonefish_ros2__msg__Event__Sequence *)(untyped_member);
  return member->size;
}

const void * stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__get_const_function__EventArray__events(
  const void * untyped_member, size_t index)
{
  const stonefish_ros2__msg__Event__Sequence * member =
    (const stonefish_ros2__msg__Event__Sequence *)(untyped_member);
  return &member->data[index];
}

void * stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__get_function__EventArray__events(
  void * untyped_member, size_t index)
{
  stonefish_ros2__msg__Event__Sequence * member =
    (stonefish_ros2__msg__Event__Sequence *)(untyped_member);
  return &member->data[index];
}

void stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__fetch_function__EventArray__events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const stonefish_ros2__msg__Event * item =
    ((const stonefish_ros2__msg__Event *)
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__get_const_function__EventArray__events(untyped_member, index));
  stonefish_ros2__msg__Event * value =
    (stonefish_ros2__msg__Event *)(untyped_value);
  *value = *item;
}

void stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__assign_function__EventArray__events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  stonefish_ros2__msg__Event * item =
    ((stonefish_ros2__msg__Event *)
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__get_function__EventArray__events(untyped_member, index));
  const stonefish_ros2__msg__Event * value =
    (const stonefish_ros2__msg__Event *)(untyped_value);
  *item = *value;
}

bool stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__resize_function__EventArray__events(
  void * untyped_member, size_t size)
{
  stonefish_ros2__msg__Event__Sequence * member =
    (stonefish_ros2__msg__Event__Sequence *)(untyped_member);
  stonefish_ros2__msg__Event__Sequence__fini(member);
  return stonefish_ros2__msg__Event__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__msg__EventArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__msg__EventArray, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__msg__EventArray, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__msg__EventArray, events),  // bytes offset in struct
    NULL,  // default value
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__size_function__EventArray__events,  // size() function pointer
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__get_const_function__EventArray__events,  // get_const(index) function pointer
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__get_function__EventArray__events,  // get(index) function pointer
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__fetch_function__EventArray__events,  // fetch(index, &value) function pointer
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__assign_function__EventArray__events,  // assign(index, value) function pointer
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__resize_function__EventArray__events  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_members = {
  "stonefish_ros2__msg",  // message namespace
  "EventArray",  // message name
  4,  // number of fields
  sizeof(stonefish_ros2__msg__EventArray),
  false,  // has_any_key_member_
  stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_member_array,  // message members
  stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_init_function,  // function to initialize message memory (memory has to be allocated)
  stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_type_support_handle = {
  0,
  &stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_members,
  get_message_typesupport_handle_function,
  &stonefish_ros2__msg__EventArray__get_type_hash,
  &stonefish_ros2__msg__EventArray__get_type_description,
  &stonefish_ros2__msg__EventArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stonefish_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, msg, EventArray)() {
  stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, msg, Event)();
  if (!stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_type_support_handle.typesupport_identifier) {
    stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stonefish_ros2__msg__EventArray__rosidl_typesupport_introspection_c__EventArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
