// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stonefish_ros2:msg/EventArray.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/msg/detail/event_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `events`
#include "stonefish_ros2/msg/detail/event__functions.h"

bool
stonefish_ros2__msg__EventArray__init(stonefish_ros2__msg__EventArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stonefish_ros2__msg__EventArray__fini(msg);
    return false;
  }
  // height
  // width
  // events
  if (!stonefish_ros2__msg__Event__Sequence__init(&msg->events, 0)) {
    stonefish_ros2__msg__EventArray__fini(msg);
    return false;
  }
  return true;
}

void
stonefish_ros2__msg__EventArray__fini(stonefish_ros2__msg__EventArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // events
  stonefish_ros2__msg__Event__Sequence__fini(&msg->events);
}

bool
stonefish_ros2__msg__EventArray__are_equal(const stonefish_ros2__msg__EventArray * lhs, const stonefish_ros2__msg__EventArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // events
  if (!stonefish_ros2__msg__Event__Sequence__are_equal(
      &(lhs->events), &(rhs->events)))
  {
    return false;
  }
  return true;
}

bool
stonefish_ros2__msg__EventArray__copy(
  const stonefish_ros2__msg__EventArray * input,
  stonefish_ros2__msg__EventArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // events
  if (!stonefish_ros2__msg__Event__Sequence__copy(
      &(input->events), &(output->events)))
  {
    return false;
  }
  return true;
}

stonefish_ros2__msg__EventArray *
stonefish_ros2__msg__EventArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__EventArray * msg = (stonefish_ros2__msg__EventArray *)allocator.allocate(sizeof(stonefish_ros2__msg__EventArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stonefish_ros2__msg__EventArray));
  bool success = stonefish_ros2__msg__EventArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stonefish_ros2__msg__EventArray__destroy(stonefish_ros2__msg__EventArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stonefish_ros2__msg__EventArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stonefish_ros2__msg__EventArray__Sequence__init(stonefish_ros2__msg__EventArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__EventArray * data = NULL;

  if (size) {
    data = (stonefish_ros2__msg__EventArray *)allocator.zero_allocate(size, sizeof(stonefish_ros2__msg__EventArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stonefish_ros2__msg__EventArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stonefish_ros2__msg__EventArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
stonefish_ros2__msg__EventArray__Sequence__fini(stonefish_ros2__msg__EventArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      stonefish_ros2__msg__EventArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

stonefish_ros2__msg__EventArray__Sequence *
stonefish_ros2__msg__EventArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__EventArray__Sequence * array = (stonefish_ros2__msg__EventArray__Sequence *)allocator.allocate(sizeof(stonefish_ros2__msg__EventArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stonefish_ros2__msg__EventArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stonefish_ros2__msg__EventArray__Sequence__destroy(stonefish_ros2__msg__EventArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stonefish_ros2__msg__EventArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stonefish_ros2__msg__EventArray__Sequence__are_equal(const stonefish_ros2__msg__EventArray__Sequence * lhs, const stonefish_ros2__msg__EventArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stonefish_ros2__msg__EventArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stonefish_ros2__msg__EventArray__Sequence__copy(
  const stonefish_ros2__msg__EventArray__Sequence * input,
  stonefish_ros2__msg__EventArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stonefish_ros2__msg__EventArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stonefish_ros2__msg__EventArray * data =
      (stonefish_ros2__msg__EventArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stonefish_ros2__msg__EventArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stonefish_ros2__msg__EventArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stonefish_ros2__msg__EventArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
