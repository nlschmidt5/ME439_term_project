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
      0x22, 0x7d, 0x3a, 0x22, 0xc7, 0xe4, 0xe5, 0x14,
      0x25, 0x89, 0xc5, 0xdd, 0xd4, 0x43, 0xf3, 0x93,
      0x80, 0x16, 0x08, 0x13, 0xd6, 0x58, 0x1c, 0x9d,
      0x03, 0x0d, 0x0f, 0x36, 0x5c, 0x1f, 0xf9, 0x41,
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
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
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
  "float32[] xy";

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
    {toplevel_type_raw_source, 13, 13},
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
