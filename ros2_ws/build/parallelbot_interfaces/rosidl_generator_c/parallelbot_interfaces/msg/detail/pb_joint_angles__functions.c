// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice
#include "parallelbot_interfaces/msg/detail/pb_joint_angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `th1`
// Member `th2`
// Member `th3`
// Member `th4`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
parallelbot_interfaces__msg__PBJointAngles__init(parallelbot_interfaces__msg__PBJointAngles * msg)
{
  if (!msg) {
    return false;
  }
  // th1
  if (!rosidl_runtime_c__float__Sequence__init(&msg->th1, 0)) {
    parallelbot_interfaces__msg__PBJointAngles__fini(msg);
    return false;
  }
  // th2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->th2, 0)) {
    parallelbot_interfaces__msg__PBJointAngles__fini(msg);
    return false;
  }
  // th3
  if (!rosidl_runtime_c__float__Sequence__init(&msg->th3, 0)) {
    parallelbot_interfaces__msg__PBJointAngles__fini(msg);
    return false;
  }
  // th4
  if (!rosidl_runtime_c__float__Sequence__init(&msg->th4, 0)) {
    parallelbot_interfaces__msg__PBJointAngles__fini(msg);
    return false;
  }
  return true;
}

void
parallelbot_interfaces__msg__PBJointAngles__fini(parallelbot_interfaces__msg__PBJointAngles * msg)
{
  if (!msg) {
    return;
  }
  // th1
  rosidl_runtime_c__float__Sequence__fini(&msg->th1);
  // th2
  rosidl_runtime_c__float__Sequence__fini(&msg->th2);
  // th3
  rosidl_runtime_c__float__Sequence__fini(&msg->th3);
  // th4
  rosidl_runtime_c__float__Sequence__fini(&msg->th4);
}

bool
parallelbot_interfaces__msg__PBJointAngles__are_equal(const parallelbot_interfaces__msg__PBJointAngles * lhs, const parallelbot_interfaces__msg__PBJointAngles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // th1
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->th1), &(rhs->th1)))
  {
    return false;
  }
  // th2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->th2), &(rhs->th2)))
  {
    return false;
  }
  // th3
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->th3), &(rhs->th3)))
  {
    return false;
  }
  // th4
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->th4), &(rhs->th4)))
  {
    return false;
  }
  return true;
}

bool
parallelbot_interfaces__msg__PBJointAngles__copy(
  const parallelbot_interfaces__msg__PBJointAngles * input,
  parallelbot_interfaces__msg__PBJointAngles * output)
{
  if (!input || !output) {
    return false;
  }
  // th1
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->th1), &(output->th1)))
  {
    return false;
  }
  // th2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->th2), &(output->th2)))
  {
    return false;
  }
  // th3
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->th3), &(output->th3)))
  {
    return false;
  }
  // th4
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->th4), &(output->th4)))
  {
    return false;
  }
  return true;
}

parallelbot_interfaces__msg__PBJointAngles *
parallelbot_interfaces__msg__PBJointAngles__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  parallelbot_interfaces__msg__PBJointAngles * msg = (parallelbot_interfaces__msg__PBJointAngles *)allocator.allocate(sizeof(parallelbot_interfaces__msg__PBJointAngles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(parallelbot_interfaces__msg__PBJointAngles));
  bool success = parallelbot_interfaces__msg__PBJointAngles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
parallelbot_interfaces__msg__PBJointAngles__destroy(parallelbot_interfaces__msg__PBJointAngles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    parallelbot_interfaces__msg__PBJointAngles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
parallelbot_interfaces__msg__PBJointAngles__Sequence__init(parallelbot_interfaces__msg__PBJointAngles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  parallelbot_interfaces__msg__PBJointAngles * data = NULL;

  if (size) {
    data = (parallelbot_interfaces__msg__PBJointAngles *)allocator.zero_allocate(size, sizeof(parallelbot_interfaces__msg__PBJointAngles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = parallelbot_interfaces__msg__PBJointAngles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        parallelbot_interfaces__msg__PBJointAngles__fini(&data[i - 1]);
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
parallelbot_interfaces__msg__PBJointAngles__Sequence__fini(parallelbot_interfaces__msg__PBJointAngles__Sequence * array)
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
      parallelbot_interfaces__msg__PBJointAngles__fini(&array->data[i]);
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

parallelbot_interfaces__msg__PBJointAngles__Sequence *
parallelbot_interfaces__msg__PBJointAngles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  parallelbot_interfaces__msg__PBJointAngles__Sequence * array = (parallelbot_interfaces__msg__PBJointAngles__Sequence *)allocator.allocate(sizeof(parallelbot_interfaces__msg__PBJointAngles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = parallelbot_interfaces__msg__PBJointAngles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
parallelbot_interfaces__msg__PBJointAngles__Sequence__destroy(parallelbot_interfaces__msg__PBJointAngles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    parallelbot_interfaces__msg__PBJointAngles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
parallelbot_interfaces__msg__PBJointAngles__Sequence__are_equal(const parallelbot_interfaces__msg__PBJointAngles__Sequence * lhs, const parallelbot_interfaces__msg__PBJointAngles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!parallelbot_interfaces__msg__PBJointAngles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
parallelbot_interfaces__msg__PBJointAngles__Sequence__copy(
  const parallelbot_interfaces__msg__PBJointAngles__Sequence * input,
  parallelbot_interfaces__msg__PBJointAngles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(parallelbot_interfaces__msg__PBJointAngles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    parallelbot_interfaces__msg__PBJointAngles * data =
      (parallelbot_interfaces__msg__PBJointAngles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!parallelbot_interfaces__msg__PBJointAngles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          parallelbot_interfaces__msg__PBJointAngles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!parallelbot_interfaces__msg__PBJointAngles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
