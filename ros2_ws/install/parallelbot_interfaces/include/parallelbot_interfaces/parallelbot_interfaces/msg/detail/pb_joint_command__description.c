// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice

#include "parallelbot_interfaces/msg/detail/pb_joint_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_parallelbot_interfaces
const rosidl_type_hash_t *
parallelbot_interfaces__msg__PBJointCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x58, 0x24, 0xf8, 0x86, 0x86, 0xdd, 0x89,
      0xdf, 0x28, 0x81, 0x61, 0x17, 0x75, 0x33, 0x62,
      0xca, 0xd4, 0x38, 0x03, 0x38, 0x4a, 0x09, 0xd1,
      0x71, 0xf7, 0xbc, 0x8f, 0xea, 0x09, 0x42, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char parallelbot_interfaces__msg__PBJointCommand__TYPE_NAME[] = "parallelbot_interfaces/msg/PBJointCommand";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__header[] = "header";
static char parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__name[] = "name";
static char parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__command[] = "command";
static char parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__enable[] = "enable";

static rosidl_runtime_c__type_description__Field parallelbot_interfaces__msg__PBJointCommand__FIELDS[] = {
  {
    {parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {parallelbot_interfaces__msg__PBJointCommand__FIELD_NAME__enable, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription parallelbot_interfaces__msg__PBJointCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
parallelbot_interfaces__msg__PBJointCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {parallelbot_interfaces__msg__PBJointCommand__TYPE_NAME, 41, 41},
      {parallelbot_interfaces__msg__PBJointCommand__FIELDS, 4, 4},
    },
    {parallelbot_interfaces__msg__PBJointCommand__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This is a message that holds data to describe the commands to a set of bus servo joints.\n"
  "#\n"
  "# Each joint is uniquely identified by its name.\n"
  "# The header specifies the time at which the commands were recorded. All the commands\n"
  "# in one message have to be recorded at the same time.\n"
  "#\n"
  "# The command of each joint (revolute or prismatic) is defined by:\n"
  "# the command of the joint (int, 0 to 1000),\n"
  "#\n"
  "# The message has a boolean to determine whether it is enabled or not. \n"
  "#\n"
  "# Match the order of the names and the commands to uniquely associate the joint\n"
  "# names with the correct commands.\n"
  "\n"
  "std_msgs/Header header\n"
  "string[] name\n"
  "int16[] command\n"
  "bool enable";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
parallelbot_interfaces__msg__PBJointCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {parallelbot_interfaces__msg__PBJointCommand__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 654, 654},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
parallelbot_interfaces__msg__PBJointCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *parallelbot_interfaces__msg__PBJointCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
