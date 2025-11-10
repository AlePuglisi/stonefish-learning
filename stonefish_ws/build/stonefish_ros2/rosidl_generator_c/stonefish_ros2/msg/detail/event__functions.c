// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stonefish_ros2:msg/Event.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ts`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
stonefish_ros2__msg__Event__init(stonefish_ros2__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // ts
  if (!builtin_interfaces__msg__Time__init(&msg->ts)) {
    stonefish_ros2__msg__Event__fini(msg);
    return false;
  }
  // polarity
  return true;
}

void
stonefish_ros2__msg__Event__fini(stonefish_ros2__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // ts
  builtin_interfaces__msg__Time__fini(&msg->ts);
  // polarity
}

bool
stonefish_ros2__msg__Event__are_equal(const stonefish_ros2__msg__Event * lhs, const stonefish_ros2__msg__Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // ts
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->ts), &(rhs->ts)))
  {
    return false;
  }
  // polarity
  if (lhs->polarity != rhs->polarity) {
    return false;
  }
  return true;
}

bool
stonefish_ros2__msg__Event__copy(
  const stonefish_ros2__msg__Event * input,
  stonefish_ros2__msg__Event * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // ts
  if (!builtin_interfaces__msg__Time__copy(
      &(input->ts), &(output->ts)))
  {
    return false;
  }
  // polarity
  output->polarity = input->polarity;
  return true;
}

stonefish_ros2__msg__Event *
stonefish_ros2__msg__Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__Event * msg = (stonefish_ros2__msg__Event *)allocator.allocate(sizeof(stonefish_ros2__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stonefish_ros2__msg__Event));
  bool success = stonefish_ros2__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stonefish_ros2__msg__Event__destroy(stonefish_ros2__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stonefish_ros2__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stonefish_ros2__msg__Event__Sequence__init(stonefish_ros2__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__Event * data = NULL;

  if (size) {
    data = (stonefish_ros2__msg__Event *)allocator.zero_allocate(size, sizeof(stonefish_ros2__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stonefish_ros2__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stonefish_ros2__msg__Event__fini(&data[i - 1]);
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
stonefish_ros2__msg__Event__Sequence__fini(stonefish_ros2__msg__Event__Sequence * array)
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
      stonefish_ros2__msg__Event__fini(&array->data[i]);
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

stonefish_ros2__msg__Event__Sequence *
stonefish_ros2__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__Event__Sequence * array = (stonefish_ros2__msg__Event__Sequence *)allocator.allocate(sizeof(stonefish_ros2__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stonefish_ros2__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stonefish_ros2__msg__Event__Sequence__destroy(stonefish_ros2__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stonefish_ros2__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stonefish_ros2__msg__Event__Sequence__are_equal(const stonefish_ros2__msg__Event__Sequence * lhs, const stonefish_ros2__msg__Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stonefish_ros2__msg__Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stonefish_ros2__msg__Event__Sequence__copy(
  const stonefish_ros2__msg__Event__Sequence * input,
  stonefish_ros2__msg__Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stonefish_ros2__msg__Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stonefish_ros2__msg__Event * data =
      (stonefish_ros2__msg__Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stonefish_ros2__msg__Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stonefish_ros2__msg__Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stonefish_ros2__msg__Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
