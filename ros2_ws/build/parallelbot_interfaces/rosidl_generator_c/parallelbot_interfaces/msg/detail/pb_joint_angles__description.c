// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice

#include "parallelbot_interfaces/msg/detail/pb_joint_angles__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_type_hash_t *
parallelbot_interfaces__msg__PBJointAngles__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0x87, 0x48, 0x29, 0x07, 0x6d, 0x95, 0x69,
      0xba, 0x5a, 0x7a, 0x70, 0xe0, 0xd0, 0x0c, 0x1d,
      0xb9, 0x3b, 0x48, 0x8c, 0xd8, 0x45, 0x7d, 0x5f,
      0x9b, 0x3b, 0x26, 0x74, 0xdc, 0xcd, 0xb4, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char parallelbot_interfaces__msg__PBJointAngles__TYPE_NAME[] = "parallelbot_interfaces/msg/PBJointAngles";

// Define type names, field names, and default values
static char parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th1[] = "th1";
static char parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th2[] = "th2";
static char parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th3[] = "th3";
static char parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th4[] = "th4";

static rosidl_runtime_c__type_description__Field parallelbot_interfaces__msg__PBJointAngles__FIELDS[] = {
  {
    {parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th1, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th2, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th3, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {parallelbot_interfaces__msg__PBJointAngles__FIELD_NAME__th4, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
parallelbot_interfaces__msg__PBJointAngles__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {parallelbot_interfaces__msg__PBJointAngles__TYPE_NAME, 40, 40},
      {parallelbot_interfaces__msg__PBJointAngles__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 th1\n"
  "float32 th2\n"
  "float32 th3\n"
  "float32 th4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
parallelbot_interfaces__msg__PBJointAngles__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {parallelbot_interfaces__msg__PBJointAngles__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
parallelbot_interfaces__msg__PBJointAngles__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *parallelbot_interfaces__msg__PBJointAngles__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
