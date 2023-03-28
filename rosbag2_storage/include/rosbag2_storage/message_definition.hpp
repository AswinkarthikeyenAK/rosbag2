// Copyright 2023, Foxglove Technologies.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSBAG2_STORAGE__MESSAGE_DEFINITION_HPP_
#define ROSBAG2_STORAGE__MESSAGE_DEFINITION_HPP_

#include <string>
#include <cassert>

#include "rosbag2_storage/visibility_control.hpp"

namespace rosbag2_storage
{

struct MessageDefinition
{
  /// @brief  The name of the type.
  ///
  /// Should match the `name` in TopicMetadata for all topics using this message definition.
  std::string type_name;
  /// @brief  The type description hash of the type described by this MessageDefinition.
  /// an empty string indicates that no type hash could be calculated for this definition.
  std::string type_description_hash;
  /// @brief The encoding technique used in `encoded_message_definition`.
  ///
  /// See docs/message_definition_encoding.md for details of each encoding.
  std::string encoding;
  /// @brief The full encoded message definition for this type.
  std::string encoded_message_definition;
};

}  // namespace rosbag2_storage

#endif  // ROSBAG2_STORAGE__MESSAGE_DEFINITION_HPP_
