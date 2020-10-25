
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/default.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

#include <filesystem>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
class Model final
{
public:
    /**
    TODO : Documentation
    */
    Model() = default;

    /**
    TODO : Documentation
    */
    void reset();

    /**
    TODO : Documentation
    */
    static void load(const std::filesystem::path& filePath, Model* pModel);
};

} // namespace vk
} // namespace dst
