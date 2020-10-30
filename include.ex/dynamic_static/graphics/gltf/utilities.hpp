
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "rapidjson/document.h"

#include <string>

namespace dst {
namespace gltf {

/**
TODO : Documentation
*/
template <typename FunctionType>
inline void process_member(const rapidjson::Value& json, const std::string& memberName, FunctionType function)
{
    auto memberJson = json.FindMember(memberName.c_str());
    if (memberJson != json.MemberEnd()) {
        function(memberJson);
    }
}

} // namespace gltf
} // namespace dst
