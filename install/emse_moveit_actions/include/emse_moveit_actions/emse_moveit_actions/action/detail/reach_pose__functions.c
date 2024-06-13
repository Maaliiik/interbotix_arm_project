// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from emse_moveit_actions:action/ReachPose.idl
// generated code does not contain a copyright notice
#include "emse_moveit_actions/action/detail/reach_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
emse_moveit_actions__action__ReachPose_Goal__init(emse_moveit_actions__action__ReachPose_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__init(&msg->target_pose)) {
    emse_moveit_actions__action__ReachPose_Goal__fini(msg);
    return false;
  }
  return true;
}

void
emse_moveit_actions__action__ReachPose_Goal__fini(emse_moveit_actions__action__ReachPose_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__Pose__fini(&msg->target_pose);
}

bool
emse_moveit_actions__action__ReachPose_Goal__are_equal(const emse_moveit_actions__action__ReachPose_Goal * lhs, const emse_moveit_actions__action__ReachPose_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_Goal__copy(
  const emse_moveit_actions__action__ReachPose_Goal * input,
  emse_moveit_actions__action__ReachPose_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  return true;
}

emse_moveit_actions__action__ReachPose_Goal *
emse_moveit_actions__action__ReachPose_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Goal * msg = (emse_moveit_actions__action__ReachPose_Goal *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_Goal));
  bool success = emse_moveit_actions__action__ReachPose_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_Goal__destroy(emse_moveit_actions__action__ReachPose_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_Goal__Sequence__init(emse_moveit_actions__action__ReachPose_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Goal * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_Goal *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_Goal__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_Goal__Sequence__fini(emse_moveit_actions__action__ReachPose_Goal__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_Goal__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_Goal__Sequence *
emse_moveit_actions__action__ReachPose_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Goal__Sequence * array = (emse_moveit_actions__action__ReachPose_Goal__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_Goal__Sequence__destroy(emse_moveit_actions__action__ReachPose_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_Goal__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_Goal__Sequence * lhs, const emse_moveit_actions__action__ReachPose_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_Goal__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_Goal__Sequence * input,
  emse_moveit_actions__action__ReachPose_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_Goal * data =
      (emse_moveit_actions__action__ReachPose_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `planned_trajectory`
// Member `executed_trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

bool
emse_moveit_actions__action__ReachPose_Result__init(emse_moveit_actions__action__ReachPose_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    emse_moveit_actions__action__ReachPose_Result__fini(msg);
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__init(&msg->trajectory_start)) {
    emse_moveit_actions__action__ReachPose_Result__fini(msg);
    return false;
  }
  // planned_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->planned_trajectory)) {
    emse_moveit_actions__action__ReachPose_Result__fini(msg);
    return false;
  }
  // executed_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->executed_trajectory)) {
    emse_moveit_actions__action__ReachPose_Result__fini(msg);
    return false;
  }
  // planning_time
  return true;
}

void
emse_moveit_actions__action__ReachPose_Result__fini(emse_moveit_actions__action__ReachPose_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
  // trajectory_start
  moveit_msgs__msg__RobotState__fini(&msg->trajectory_start);
  // planned_trajectory
  moveit_msgs__msg__RobotTrajectory__fini(&msg->planned_trajectory);
  // executed_trajectory
  moveit_msgs__msg__RobotTrajectory__fini(&msg->executed_trajectory);
  // planning_time
}

bool
emse_moveit_actions__action__ReachPose_Result__are_equal(const emse_moveit_actions__action__ReachPose_Result * lhs, const emse_moveit_actions__action__ReachPose_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->trajectory_start), &(rhs->trajectory_start)))
  {
    return false;
  }
  // planned_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__are_equal(
      &(lhs->planned_trajectory), &(rhs->planned_trajectory)))
  {
    return false;
  }
  // executed_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__are_equal(
      &(lhs->executed_trajectory), &(rhs->executed_trajectory)))
  {
    return false;
  }
  // planning_time
  if (lhs->planning_time != rhs->planning_time) {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_Result__copy(
  const emse_moveit_actions__action__ReachPose_Result * input,
  emse_moveit_actions__action__ReachPose_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->trajectory_start), &(output->trajectory_start)))
  {
    return false;
  }
  // planned_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__copy(
      &(input->planned_trajectory), &(output->planned_trajectory)))
  {
    return false;
  }
  // executed_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__copy(
      &(input->executed_trajectory), &(output->executed_trajectory)))
  {
    return false;
  }
  // planning_time
  output->planning_time = input->planning_time;
  return true;
}

emse_moveit_actions__action__ReachPose_Result *
emse_moveit_actions__action__ReachPose_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Result * msg = (emse_moveit_actions__action__ReachPose_Result *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_Result));
  bool success = emse_moveit_actions__action__ReachPose_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_Result__destroy(emse_moveit_actions__action__ReachPose_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_Result__Sequence__init(emse_moveit_actions__action__ReachPose_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Result * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_Result *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_Result__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_Result__Sequence__fini(emse_moveit_actions__action__ReachPose_Result__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_Result__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_Result__Sequence *
emse_moveit_actions__action__ReachPose_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Result__Sequence * array = (emse_moveit_actions__action__ReachPose_Result__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_Result__Sequence__destroy(emse_moveit_actions__action__ReachPose_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_Result__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_Result__Sequence * lhs, const emse_moveit_actions__action__ReachPose_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_Result__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_Result__Sequence * input,
  emse_moveit_actions__action__ReachPose_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_Result * data =
      (emse_moveit_actions__action__ReachPose_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
emse_moveit_actions__action__ReachPose_Feedback__init(emse_moveit_actions__action__ReachPose_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    emse_moveit_actions__action__ReachPose_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
emse_moveit_actions__action__ReachPose_Feedback__fini(emse_moveit_actions__action__ReachPose_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
emse_moveit_actions__action__ReachPose_Feedback__are_equal(const emse_moveit_actions__action__ReachPose_Feedback * lhs, const emse_moveit_actions__action__ReachPose_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_Feedback__copy(
  const emse_moveit_actions__action__ReachPose_Feedback * input,
  emse_moveit_actions__action__ReachPose_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

emse_moveit_actions__action__ReachPose_Feedback *
emse_moveit_actions__action__ReachPose_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Feedback * msg = (emse_moveit_actions__action__ReachPose_Feedback *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_Feedback));
  bool success = emse_moveit_actions__action__ReachPose_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_Feedback__destroy(emse_moveit_actions__action__ReachPose_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_Feedback__Sequence__init(emse_moveit_actions__action__ReachPose_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Feedback * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_Feedback *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_Feedback__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_Feedback__Sequence__fini(emse_moveit_actions__action__ReachPose_Feedback__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_Feedback__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_Feedback__Sequence *
emse_moveit_actions__action__ReachPose_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_Feedback__Sequence * array = (emse_moveit_actions__action__ReachPose_Feedback__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_Feedback__Sequence__destroy(emse_moveit_actions__action__ReachPose_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_Feedback__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_Feedback__Sequence * lhs, const emse_moveit_actions__action__ReachPose_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_Feedback__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_Feedback__Sequence * input,
  emse_moveit_actions__action__ReachPose_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_Feedback * data =
      (emse_moveit_actions__action__ReachPose_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"

bool
emse_moveit_actions__action__ReachPose_SendGoal_Request__init(emse_moveit_actions__action__ReachPose_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!emse_moveit_actions__action__ReachPose_Goal__init(&msg->goal)) {
    emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(emse_moveit_actions__action__ReachPose_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  emse_moveit_actions__action__ReachPose_Goal__fini(&msg->goal);
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Request__are_equal(const emse_moveit_actions__action__ReachPose_SendGoal_Request * lhs, const emse_moveit_actions__action__ReachPose_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!emse_moveit_actions__action__ReachPose_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Request__copy(
  const emse_moveit_actions__action__ReachPose_SendGoal_Request * input,
  emse_moveit_actions__action__ReachPose_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!emse_moveit_actions__action__ReachPose_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

emse_moveit_actions__action__ReachPose_SendGoal_Request *
emse_moveit_actions__action__ReachPose_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_SendGoal_Request * msg = (emse_moveit_actions__action__ReachPose_SendGoal_Request *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Request));
  bool success = emse_moveit_actions__action__ReachPose_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_SendGoal_Request__destroy(emse_moveit_actions__action__ReachPose_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__init(emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_SendGoal_Request * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_SendGoal_Request *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__fini(emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence *
emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * array = (emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__destroy(emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * lhs, const emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * input,
  emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_SendGoal_Request * data =
      (emse_moveit_actions__action__ReachPose_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
emse_moveit_actions__action__ReachPose_SendGoal_Response__init(emse_moveit_actions__action__ReachPose_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    emse_moveit_actions__action__ReachPose_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
emse_moveit_actions__action__ReachPose_SendGoal_Response__fini(emse_moveit_actions__action__ReachPose_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Response__are_equal(const emse_moveit_actions__action__ReachPose_SendGoal_Response * lhs, const emse_moveit_actions__action__ReachPose_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Response__copy(
  const emse_moveit_actions__action__ReachPose_SendGoal_Response * input,
  emse_moveit_actions__action__ReachPose_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

emse_moveit_actions__action__ReachPose_SendGoal_Response *
emse_moveit_actions__action__ReachPose_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_SendGoal_Response * msg = (emse_moveit_actions__action__ReachPose_SendGoal_Response *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Response));
  bool success = emse_moveit_actions__action__ReachPose_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_SendGoal_Response__destroy(emse_moveit_actions__action__ReachPose_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__init(emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_SendGoal_Response * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_SendGoal_Response *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_SendGoal_Response__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__fini(emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_SendGoal_Response__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence *
emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * array = (emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__destroy(emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * lhs, const emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * input,
  emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_SendGoal_Response * data =
      (emse_moveit_actions__action__ReachPose_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
emse_moveit_actions__action__ReachPose_GetResult_Request__init(emse_moveit_actions__action__ReachPose_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    emse_moveit_actions__action__ReachPose_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
emse_moveit_actions__action__ReachPose_GetResult_Request__fini(emse_moveit_actions__action__ReachPose_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Request__are_equal(const emse_moveit_actions__action__ReachPose_GetResult_Request * lhs, const emse_moveit_actions__action__ReachPose_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Request__copy(
  const emse_moveit_actions__action__ReachPose_GetResult_Request * input,
  emse_moveit_actions__action__ReachPose_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

emse_moveit_actions__action__ReachPose_GetResult_Request *
emse_moveit_actions__action__ReachPose_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_GetResult_Request * msg = (emse_moveit_actions__action__ReachPose_GetResult_Request *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_GetResult_Request));
  bool success = emse_moveit_actions__action__ReachPose_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_GetResult_Request__destroy(emse_moveit_actions__action__ReachPose_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__init(emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_GetResult_Request * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_GetResult_Request *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_GetResult_Request__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__fini(emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_GetResult_Request__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence *
emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * array = (emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__destroy(emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * lhs, const emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * input,
  emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_GetResult_Request * data =
      (emse_moveit_actions__action__ReachPose_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"

bool
emse_moveit_actions__action__ReachPose_GetResult_Response__init(emse_moveit_actions__action__ReachPose_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!emse_moveit_actions__action__ReachPose_Result__init(&msg->result)) {
    emse_moveit_actions__action__ReachPose_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
emse_moveit_actions__action__ReachPose_GetResult_Response__fini(emse_moveit_actions__action__ReachPose_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  emse_moveit_actions__action__ReachPose_Result__fini(&msg->result);
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Response__are_equal(const emse_moveit_actions__action__ReachPose_GetResult_Response * lhs, const emse_moveit_actions__action__ReachPose_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!emse_moveit_actions__action__ReachPose_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Response__copy(
  const emse_moveit_actions__action__ReachPose_GetResult_Response * input,
  emse_moveit_actions__action__ReachPose_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!emse_moveit_actions__action__ReachPose_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

emse_moveit_actions__action__ReachPose_GetResult_Response *
emse_moveit_actions__action__ReachPose_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_GetResult_Response * msg = (emse_moveit_actions__action__ReachPose_GetResult_Response *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_GetResult_Response));
  bool success = emse_moveit_actions__action__ReachPose_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_GetResult_Response__destroy(emse_moveit_actions__action__ReachPose_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__init(emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_GetResult_Response * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_GetResult_Response *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_GetResult_Response__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__fini(emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_GetResult_Response__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence *
emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * array = (emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__destroy(emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * lhs, const emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * input,
  emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_GetResult_Response * data =
      (emse_moveit_actions__action__ReachPose_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"

bool
emse_moveit_actions__action__ReachPose_FeedbackMessage__init(emse_moveit_actions__action__ReachPose_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!emse_moveit_actions__action__ReachPose_Feedback__init(&msg->feedback)) {
    emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(emse_moveit_actions__action__ReachPose_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  emse_moveit_actions__action__ReachPose_Feedback__fini(&msg->feedback);
}

bool
emse_moveit_actions__action__ReachPose_FeedbackMessage__are_equal(const emse_moveit_actions__action__ReachPose_FeedbackMessage * lhs, const emse_moveit_actions__action__ReachPose_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!emse_moveit_actions__action__ReachPose_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_FeedbackMessage__copy(
  const emse_moveit_actions__action__ReachPose_FeedbackMessage * input,
  emse_moveit_actions__action__ReachPose_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!emse_moveit_actions__action__ReachPose_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

emse_moveit_actions__action__ReachPose_FeedbackMessage *
emse_moveit_actions__action__ReachPose_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_FeedbackMessage * msg = (emse_moveit_actions__action__ReachPose_FeedbackMessage *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(emse_moveit_actions__action__ReachPose_FeedbackMessage));
  bool success = emse_moveit_actions__action__ReachPose_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
emse_moveit_actions__action__ReachPose_FeedbackMessage__destroy(emse_moveit_actions__action__ReachPose_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__init(emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_FeedbackMessage * data = NULL;

  if (size) {
    data = (emse_moveit_actions__action__ReachPose_FeedbackMessage *)allocator.zero_allocate(size, sizeof(emse_moveit_actions__action__ReachPose_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = emse_moveit_actions__action__ReachPose_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(&data[i - 1]);
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
emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__fini(emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * array)
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
      emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(&array->data[i]);
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

emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence *
emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * array = (emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence *)allocator.allocate(sizeof(emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__destroy(emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__are_equal(const emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * lhs, const emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence__copy(
  const emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * input,
  emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(emse_moveit_actions__action__ReachPose_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    emse_moveit_actions__action__ReachPose_FeedbackMessage * data =
      (emse_moveit_actions__action__ReachPose_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!emse_moveit_actions__action__ReachPose_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!emse_moveit_actions__action__ReachPose_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
