
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/mesh.hpp"

#include "rapidjson/document.h"

namespace dst {
namespace gltf {

/**
TODO : Documentation
*/
class Node final
{
public:
    /**
    TODO : Documentation
    */
    Node() = default;

    /**
    TODO : Documentation
    */
    Node(const rapidjson::Value& json);
};

} // namespace gltf
} // namespace dst
