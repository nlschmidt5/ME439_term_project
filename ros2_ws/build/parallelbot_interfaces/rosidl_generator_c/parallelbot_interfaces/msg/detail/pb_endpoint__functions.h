// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_endpoint.h"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__FUNCTIONS_H_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__FUNCTIONS_H_

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

#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.h"

/// Initialize msg/PBEndpoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * parallelbot_interfaces__msg__PBEndpoint
 * )) before or use
 * parallelbot_interfaces__msg__PBEndpoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBEndpoint__init(parallelbot_interfaces__msg__PBEndpoint * msg);

/// Finalize msg/PBEndpoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBEndpoint__fini(parallelbot_interfaces__msg__PBEndpoint * msg);

/// Create msg/PBEndpoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * parallelbot_interfaces__msg__PBEndpoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
parallelbot_interfaces__msg__PBEndpoint *
parallelbot_interfaces__msg__PBEndpoint__create(void);

/// Destroy msg/PBEndpoint message.
/**
 * It calls
 * parallelbot_interfaces__msg__PBEndpoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBEndpoint__destroy(parallelbot_interfaces__msg__PBEndpoint * msg);

/// Check for msg/PBEndpoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBEndpoint__are_equal(const parallelbot_interfaces__msg__PBEndpoint * lhs, const parallelbot_interfaces__msg__PBEndpoint * rhs);

/// Copy a msg/PBEndpoint message.
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
parallelbot_interfaces__msg__PBEndpoint__copy(
  const parallelbot_interfaces__msg__PBEndpoint * input,
  parallelbot_interfaces__msg__PBEndpoint * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_type_hash_t *
parallelbot_interfaces__msg__PBEndpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
parallelbot_interfaces__msg__PBEndpoint__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_runtime_c__type_description__TypeSource *
parallelbot_interfaces__msg__PBEndpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
parallelbot_interfaces__msg__PBEndpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/PBEndpoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * parallelbot_interfaces__msg__PBEndpoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBEndpoint__Sequence__init(parallelbot_interfaces__msg__PBEndpoint__Sequence * array, size_t size);

/// Finalize array of msg/PBEndpoint messages.
/**
 * It calls
 * parallelbot_interfaces__msg__PBEndpoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBEndpoint__Sequence__fini(parallelbot_interfaces__msg__PBEndpoint__Sequence * array);

/// Create array of msg/PBEndpoint messages.
/**
 * It allocates the memory for the array and calls
 * parallelbot_interfaces__msg__PBEndpoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
parallelbot_interfaces__msg__PBEndpoint__Sequence *
parallelbot_interfaces__msg__PBEndpoint__Sequence__create(size_t size);

/// Destroy array of msg/PBEndpoint messages.
/**
 * It calls
 * parallelbot_interfaces__msg__PBEndpoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
void
parallelbot_interfaces__msg__PBEndpoint__Sequence__destroy(parallelbot_interfaces__msg__PBEndpoint__Sequence * array);

/// Check for msg/PBEndpoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
bool
parallelbot_interfaces__msg__PBEndpoint__Sequence__are_equal(const parallelbot_interfaces__msg__PBEndpoint__Sequence * lhs, const parallelbot_interfaces__msg__PBEndpoint__Sequence * rhs);

/// Copy an array of msg/PBEndpoint messages.
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
parallelbot_interfaces__msg__PBEndpoint__Sequence__copy(
  const parallelbot_interfaces__msg__PBEndpoint__Sequence * input,
  parallelbot_interfaces__msg__PBEndpoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__FUNCTIONS_H_
