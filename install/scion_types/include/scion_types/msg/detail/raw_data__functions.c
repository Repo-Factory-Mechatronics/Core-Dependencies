// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scion_types:msg/RawData.idl
// generated code does not contain a copyright notice
#include "scion_types/msg/detail/raw_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `device`
// Member `format`
#include "rosidl_runtime_c/string_functions.h"

bool
scion_types__msg__RawData__init(scion_types__msg__RawData * msg)
{
  if (!msg) {
    return false;
  }
  // device
  if (!rosidl_runtime_c__String__init(&msg->device)) {
    scion_types__msg__RawData__fini(msg);
    return false;
  }
  // value
  // datatype
  // format
  if (!rosidl_runtime_c__String__init(&msg->format)) {
    scion_types__msg__RawData__fini(msg);
    return false;
  }
  return true;
}

void
scion_types__msg__RawData__fini(scion_types__msg__RawData * msg)
{
  if (!msg) {
    return;
  }
  // device
  rosidl_runtime_c__String__fini(&msg->device);
  // value
  // datatype
  // format
  rosidl_runtime_c__String__fini(&msg->format);
}

bool
scion_types__msg__RawData__are_equal(const scion_types__msg__RawData * lhs, const scion_types__msg__RawData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device), &(rhs->device)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // datatype
  if (lhs->datatype != rhs->datatype) {
    return false;
  }
  // format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->format), &(rhs->format)))
  {
    return false;
  }
  return true;
}

bool
scion_types__msg__RawData__copy(
  const scion_types__msg__RawData * input,
  scion_types__msg__RawData * output)
{
  if (!input || !output) {
    return false;
  }
  // device
  if (!rosidl_runtime_c__String__copy(
      &(input->device), &(output->device)))
  {
    return false;
  }
  // value
  output->value = input->value;
  // datatype
  output->datatype = input->datatype;
  // format
  if (!rosidl_runtime_c__String__copy(
      &(input->format), &(output->format)))
  {
    return false;
  }
  return true;
}

scion_types__msg__RawData *
scion_types__msg__RawData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__RawData * msg = (scion_types__msg__RawData *)allocator.allocate(sizeof(scion_types__msg__RawData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scion_types__msg__RawData));
  bool success = scion_types__msg__RawData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scion_types__msg__RawData__destroy(scion_types__msg__RawData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scion_types__msg__RawData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scion_types__msg__RawData__Sequence__init(scion_types__msg__RawData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__RawData * data = NULL;

  if (size) {
    data = (scion_types__msg__RawData *)allocator.zero_allocate(size, sizeof(scion_types__msg__RawData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scion_types__msg__RawData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scion_types__msg__RawData__fini(&data[i - 1]);
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
scion_types__msg__RawData__Sequence__fini(scion_types__msg__RawData__Sequence * array)
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
      scion_types__msg__RawData__fini(&array->data[i]);
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

scion_types__msg__RawData__Sequence *
scion_types__msg__RawData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__RawData__Sequence * array = (scion_types__msg__RawData__Sequence *)allocator.allocate(sizeof(scion_types__msg__RawData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scion_types__msg__RawData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scion_types__msg__RawData__Sequence__destroy(scion_types__msg__RawData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scion_types__msg__RawData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scion_types__msg__RawData__Sequence__are_equal(const scion_types__msg__RawData__Sequence * lhs, const scion_types__msg__RawData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scion_types__msg__RawData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scion_types__msg__RawData__Sequence__copy(
  const scion_types__msg__RawData__Sequence * input,
  scion_types__msg__RawData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scion_types__msg__RawData);
    scion_types__msg__RawData * data =
      (scion_types__msg__RawData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scion_types__msg__RawData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scion_types__msg__RawData__fini(&data[i]);
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
    if (!scion_types__msg__RawData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
