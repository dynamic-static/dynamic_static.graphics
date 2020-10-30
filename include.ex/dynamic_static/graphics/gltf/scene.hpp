
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/gltf/node.hpp"

#include "rapidjson/document.h"

#include <string>
#include <vector>

namespace dst {
namespace gltf {

/**
TODO : Documentation
*/
class Scene final
{
public:
    /**
    TODO : Documentation
    */
    Scene() = default;

    /**
    TODO : Documentation
    */
    Scene(const rapidjson::Value& json);

private:
    std::string mName;
    std::vector<std::string> mExtensions;
    std::vector<Node> mNodes;
    std::vector<std::string> mExtras;
};

} // namespace gltf
} // namespace dst
