// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scion_types:msg/Idea.idl
// generated code does not contain a copyright notice
#include "scion_types/msg/detail/idea__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `parameters`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
scion_types__msg__Idea__init(scion_types__msg__Idea * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // parameters
  if (!rosidl_runtime_c__float__Sequence__init(&msg->parameters, 0)) {
    scion_types__msg__Idea__fini(msg);
    return false;
  }
  return true;
}

void
scion_types__msg__Idea__fini(scion_types__msg__Idea * msg)
{
  if (!msg) {
    return;
  }
  // code
  // parameters
  rosidl_runtime_c__float__Sequence__fini(&msg->parameters);
}

bool
scion_types__msg__Idea__are_equal(const scion_types__msg__Idea * lhs, const scion_types__msg__Idea * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
scion_types__msg__Idea__copy(
  const scion_types__msg__Idea * input,
  scion_types__msg__Idea * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // parameters
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

scion_types__msg__Idea *
scion_types__msg__Idea__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__Idea * msg = (scion_types__msg__Idea *)allocator.allocate(sizeof(scion_types__msg__Idea), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scion_types__msg__Idea));
  bool success = scion_types__msg__Idea__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scion_types__msg__Idea__destroy(scion_types__msg__Idea * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scion_types__msg__Idea__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scion_types__msg__Idea__Sequence__init(scion_types__msg__Idea__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__Idea * data = NULL;

  if (size) {
    data = (scion_types__msg__Idea *)allocator.zero_allocate(size, sizeof(scion_types__msg__Idea), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scion_types__msg__Idea__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scion_types__msg__Idea__fini(&data[i - 1]);
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
scion_types__msg__Idea__Sequence__fini(scion_types__msg__Idea__Sequence * array)
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
      scion_types__msg__Idea__fini(&array->data[i]);
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

scion_types__msg__Idea__Sequence *
scion_types__msg__Idea__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__Idea__Sequence * array = (scion_types__msg__Idea__Sequence *)allocator.allocate(sizeof(scion_types__msg__Idea__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scion_types__msg__Idea__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scion_types__msg__Idea__Sequence__destroy(scion_types__msg__Idea__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scion_types__msg__Idea__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scion_types__msg__Idea__Sequence__are_equal(const scion_types__msg__Idea__Sequence * lhs, const scion_types__msg__Idea__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scion_types__msg__Idea__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scion_types__msg__Idea__Sequence__copy(
  const scion_types__msg__Idea__Sequence * input,
  scion_types__msg__Idea__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scion_types__msg__Idea);
    scion_types__msg__Idea * data =
      (scion_types__msg__Idea *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scion_types__msg__Idea__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scion_types__msg__Idea__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!scion_types__msg__Idea__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
