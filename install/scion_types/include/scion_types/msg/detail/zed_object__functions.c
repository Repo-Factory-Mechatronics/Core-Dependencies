// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scion_types:msg/ZedObject.idl
// generated code does not contain a copyright notice
#include "scion_types/msg/detail/zed_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
// Member `sublabel`
#include "rosidl_runtime_c/string_functions.h"
// Member `corners`
#include "scion_types/msg/detail/keypoint2_di__functions.h"

bool
scion_types__msg__ZedObject__init(scion_types__msg__ZedObject * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    scion_types__msg__ZedObject__fini(msg);
    return false;
  }
  // label_id
  // sublabel
  if (!rosidl_runtime_c__String__init(&msg->sublabel)) {
    scion_types__msg__ZedObject__fini(msg);
    return false;
  }
  // confidence
  // position
  // position_covariance
  // velocity
  // tracking_available
  // tracking_state
  // action_state
  // dimensions_3d
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!scion_types__msg__Keypoint2Di__init(&msg->corners[i])) {
      scion_types__msg__ZedObject__fini(msg);
      return false;
    }
  }
  return true;
}

void
scion_types__msg__ZedObject__fini(scion_types__msg__ZedObject * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // label_id
  // sublabel
  rosidl_runtime_c__String__fini(&msg->sublabel);
  // confidence
  // position
  // position_covariance
  // velocity
  // tracking_available
  // tracking_state
  // action_state
  // dimensions_3d
  // corners
  for (size_t i = 0; i < 4; ++i) {
    scion_types__msg__Keypoint2Di__fini(&msg->corners[i]);
  }
}

bool
scion_types__msg__ZedObject__are_equal(const scion_types__msg__ZedObject * lhs, const scion_types__msg__ZedObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // label_id
  if (lhs->label_id != rhs->label_id) {
    return false;
  }
  // sublabel
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sublabel), &(rhs->sublabel)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // position_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  // tracking_available
  if (lhs->tracking_available != rhs->tracking_available) {
    return false;
  }
  // tracking_state
  if (lhs->tracking_state != rhs->tracking_state) {
    return false;
  }
  // action_state
  if (lhs->action_state != rhs->action_state) {
    return false;
  }
  // dimensions_3d
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->dimensions_3d[i] != rhs->dimensions_3d[i]) {
      return false;
    }
  }
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!scion_types__msg__Keypoint2Di__are_equal(
        &(lhs->corners[i]), &(rhs->corners[i])))
    {
      return false;
    }
  }
  return true;
}

bool
scion_types__msg__ZedObject__copy(
  const scion_types__msg__ZedObject * input,
  scion_types__msg__ZedObject * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // label_id
  output->label_id = input->label_id;
  // sublabel
  if (!rosidl_runtime_c__String__copy(
      &(input->sublabel), &(output->sublabel)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // position_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  // tracking_available
  output->tracking_available = input->tracking_available;
  // tracking_state
  output->tracking_state = input->tracking_state;
  // action_state
  output->action_state = input->action_state;
  // dimensions_3d
  for (size_t i = 0; i < 3; ++i) {
    output->dimensions_3d[i] = input->dimensions_3d[i];
  }
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!scion_types__msg__Keypoint2Di__copy(
        &(input->corners[i]), &(output->corners[i])))
    {
      return false;
    }
  }
  return true;
}

scion_types__msg__ZedObject *
scion_types__msg__ZedObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__ZedObject * msg = (scion_types__msg__ZedObject *)allocator.allocate(sizeof(scion_types__msg__ZedObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scion_types__msg__ZedObject));
  bool success = scion_types__msg__ZedObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scion_types__msg__ZedObject__destroy(scion_types__msg__ZedObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scion_types__msg__ZedObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scion_types__msg__ZedObject__Sequence__init(scion_types__msg__ZedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__ZedObject * data = NULL;

  if (size) {
    data = (scion_types__msg__ZedObject *)allocator.zero_allocate(size, sizeof(scion_types__msg__ZedObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scion_types__msg__ZedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scion_types__msg__ZedObject__fini(&data[i - 1]);
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
scion_types__msg__ZedObject__Sequence__fini(scion_types__msg__ZedObject__Sequence * array)
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
      scion_types__msg__ZedObject__fini(&array->data[i]);
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

scion_types__msg__ZedObject__Sequence *
scion_types__msg__ZedObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scion_types__msg__ZedObject__Sequence * array = (scion_types__msg__ZedObject__Sequence *)allocator.allocate(sizeof(scion_types__msg__ZedObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scion_types__msg__ZedObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scion_types__msg__ZedObject__Sequence__destroy(scion_types__msg__ZedObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scion_types__msg__ZedObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scion_types__msg__ZedObject__Sequence__are_equal(const scion_types__msg__ZedObject__Sequence * lhs, const scion_types__msg__ZedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scion_types__msg__ZedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scion_types__msg__ZedObject__Sequence__copy(
  const scion_types__msg__ZedObject__Sequence * input,
  scion_types__msg__ZedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scion_types__msg__ZedObject);
    scion_types__msg__ZedObject * data =
      (scion_types__msg__ZedObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scion_types__msg__ZedObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scion_types__msg__ZedObject__fini(&data[i]);
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
    if (!scion_types__msg__ZedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
