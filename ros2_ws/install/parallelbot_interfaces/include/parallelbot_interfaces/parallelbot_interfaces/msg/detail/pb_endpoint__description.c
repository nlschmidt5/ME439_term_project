// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

#include "parallelbot_interfaces/msg/detail/pb_endpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_type_hash_t *
parallelbot_interfaces__msg__PBEndpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xb5, 0x10, 0xe0, 0x9e, 0x23, 0x98, 0x4b,
      0xd8, 0x26, 0x29, 0xa7, 0xf5, 0x72, 0xe5, 0xff,
      0xcc, 0x47, 0x58, 0x91, 0x2b, 0x51, 0xed, 0x5b,
      0xe9, 0x98, 0x0f, 0xae, 0xd5, 0x33, 0xf0, 0x66,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char parallelbot_interfaces__msg__PBEndpoint__TYPE_NAME[] = "parallelbot_interfaces/msg/PBEndpoint";

// Define type names, field names, and default values
static char parallelbot_interfaces__msg__PBEndpoint__FIELD_NAME__xy[] = "xy";

static rosidl_runtime_c__type_description__Field parallelbot_interfaces__msg__PBEndpoint__FIELDS[] = {
  {
    {parallelbot_interfaces__msg__PBEndpoint__FIELD_NAME__xy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
parallelbot_interfaces__msg__PBEndpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {parallelbot_interfaces__msg__PBEndpoint__TYPE_NAME, 37, 37},
      {parallelbot_interfaces__msg__PBEndpoint__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[2] xy";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
parallelbot_interfaces__msg__PBEndpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {parallelbot_interfaces__msg__PBEndpoint__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
parallelbot_interfaces__msg__PBEndpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *parallelbot_interfaces__msg__PBEndpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
