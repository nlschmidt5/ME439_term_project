// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_command.h"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__FUNCTIONS_H_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "parallelbot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "parallelbot_interfaces/msg/detail/pb_joint_command__struct.h"

/// Initialize msg/PBJointCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * parallelbot_interfaces__msg__PBJointCommand
 * )) before or use
 * parallelbot_interfaces__msg__PBJointCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBJointCommand__init(parallelbot_interfaces__msg__PBJointCommand * msg);

/// Finalize msg/PBJointCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBJointCommand__fini(parallelbot_interfaces__msg__PBJointCommand * msg);

/// Create msg/PBJointCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * parallelbot_interfaces__msg__PBJointCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
parallelbot_interfaces__msg__PBJointCommand *
parallelbot_interfaces__msg__PBJointCommand__create(void);

/// Destroy msg/PBJointCommand message.
/**
 * It calls
 * parallelbot_interfaces__msg__PBJointCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBJointCommand__destroy(parallelbot_interfaces__msg__PBJointCommand * msg);

/// Check for msg/PBJointCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBJointCommand__are_equal(const parallelbot_interfaces__msg__PBJointCommand * lhs, const parallelbot_interfaces__msg__PBJointCommand * rhs);

/// Copy a msg/PBJointCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBJointCommand__copy(
  const parallelbot_interfaces__msg__PBJointCommand * input,
  parallelbot_interfaces__msg__PBJointCommand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_type_hash_t *
parallelbot_interfaces__msg__PBJointCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
parallelbot_interfaces__msg__PBJointCommand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_runtime_c__type_description__TypeSource *
parallelbot_interfaces__msg__PBJointCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
parallelbot_interfaces__msg__PBJointCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/PBJointCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * parallelbot_interfaces__msg__PBJointCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBJointCommand__Sequence__init(parallelbot_interfaces__msg__PBJointCommand__Sequence * array, size_t size);

/// Finalize array of msg/PBJointCommand messages.
/**
 * It calls
 * parallelbot_interfaces__msg__PBJointCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBJointCommand__Sequence__fini(parallelbot_interfaces__msg__PBJointCommand__Sequence * array);

/// Create array of msg/PBJointCommand messages.
/**
 * It allocates the memory for the array and calls
 * parallelbot_interfaces__msg__PBJointCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
parallelbot_interfaces__msg__PBJointCommand__Sequence *
parallelbot_interfaces__msg__PBJointCommand__Sequence__create(size_t size);

/// Destroy array of msg/PBJointCommand messages.
/**
 * It calls
 * parallelbot_interfaces__msg__PBJointCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBJointCommand__Sequence__destroy(parallelbot_interfaces__msg__PBJointCommand__Sequence * array);

/// Check for msg/PBJointCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBJointCommand__Sequence__are_equal(const parallelbot_interfaces__msg__PBJointCommand__Sequence * lhs, const parallelbot_interfaces__msg__PBJointCommand__Sequence * rhs);

/// Copy an array of msg/PBJointCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBJointCommand__Sequence__copy(
  const parallelbot_interfaces__msg__PBJointCommand__Sequence * input,
  parallelbot_interfaces__msg__PBJointCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__FUNCTIONS_H_
