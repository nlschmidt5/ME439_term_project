// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice
#include "parallelbot_interfaces/msg/detail/pb_joint_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `command`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
parallelbot_interfaces__msg__PBJointCommand__init(parallelbot_interfaces__msg__PBJointCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    parallelbot_interfaces__msg__PBJointCommand__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    parallelbot_interfaces__msg__PBJointCommand__fini(msg);
    return false;
  }
  // command
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->command, 0)) {
    parallelbot_interfaces__msg__PBJointCommand__fini(msg);
    return false;
  }
  // enable
  return true;
}

void
parallelbot_interfaces__msg__PBJointCommand__fini(parallelbot_interfaces__msg__PBJointCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // command
  rosidl_runtime_c__int16__Sequence__fini(&msg->command);
  // enable
}

bool
parallelbot_interfaces__msg__PBJointCommand__are_equal(const parallelbot_interfaces__msg__PBJointCommand * lhs, const parallelbot_interfaces__msg__PBJointCommand * rhs)
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
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
parallelbot_interfaces__msg__PBJointCommand__copy(
  const parallelbot_interfaces__msg__PBJointCommand * input,
  parallelbot_interfaces__msg__PBJointCommand * output)
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
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

parallelbot_interfaces__msg__PBJointCommand *
parallelbot_interfaces__msg__PBJointCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  parallelbot_interfaces__msg__PBJointCommand * msg = (parallelbot_interfaces__msg__PBJointCommand *)allocator.allocate(sizeof(parallelbot_interfaces__msg__PBJointCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(parallelbot_interfaces__msg__PBJointCommand));
  bool success = parallelbot_interfaces__msg__PBJointCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
parallelbot_interfaces__msg__PBJointCommand__destroy(parallelbot_interfaces__msg__PBJointCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    parallelbot_interfaces__msg__PBJointCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
parallelbot_interfaces__msg__PBJointCommand__Sequence__init(parallelbot_interfaces__msg__PBJointCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  parallelbot_interfaces__msg__PBJointCommand * data = NULL;

  if (size) {
    data = (parallelbot_interfaces__msg__PBJointCommand *)allocator.zero_allocate(size, sizeof(parallelbot_interfaces__msg__PBJointCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = parallelbot_interfaces__msg__PBJointCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        parallelbot_interfaces__msg__PBJointCommand__fini(&data[i - 1]);
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
parallelbot_interfaces__msg__PBJointCommand__Sequence__fini(parallelbot_interfaces__msg__PBJointCommand__Sequence * array)
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
      parallelbot_interfaces__msg__PBJointCommand__fini(&array->data[i]);
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

parallelbot_interfaces__msg__PBJointCommand__Sequence *
parallelbot_interfaces__msg__PBJointCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  parallelbot_interfaces__msg__PBJointCommand__Sequence * array = (parallelbot_interfaces__msg__PBJointCommand__Sequence *)allocator.allocate(sizeof(parallelbot_interfaces__msg__PBJointCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = parallelbot_interfaces__msg__PBJointCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
parallelbot_interfaces__msg__PBJointCommand__Sequence__destroy(parallelbot_interfaces__msg__PBJointCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    parallelbot_interfaces__msg__PBJointCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
parallelbot_interfaces__msg__PBJointCommand__Sequence__are_equal(const parallelbot_interfaces__msg__PBJointCommand__Sequence * lhs, const parallelbot_interfaces__msg__PBJointCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!parallelbot_interfaces__msg__PBJointCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
parallelbot_interfaces__msg__PBJointCommand__Sequence__copy(
  const parallelbot_interfaces__msg__PBJointCommand__Sequence * input,
  parallelbot_interfaces__msg__PBJointCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(parallelbot_interfaces__msg__PBJointCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    parallelbot_interfaces__msg__PBJointCommand * data =
      (parallelbot_interfaces__msg__PBJointCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!parallelbot_interfaces__msg__PBJointCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          parallelbot_interfaces__msg__PBJointCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!parallelbot_interfaces__msg__PBJointCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
