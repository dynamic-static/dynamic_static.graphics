
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/gltf/scene.hpp"
#include "dynamic_static/graphics/gltf/node.hpp"
#include "dynamic_static/graphics/vulkan/default.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"
#include "dynamic_static/graphics/vulkan/mesh.hpp"

#include <filesystem>
#include <string>
#include <vector>

namespace dst {
namespace gltf {

/**
TODO : Documentation
*/
class Asset final
{
public:
    std::string copyright; //!< TODO : Documentation
    std::string generator; //!< TODO : Documentation
    std::string version;   //!< TODO : Documentation
    uint32_t minVersion;   //!< TODO : Documentation
};

/**
TODO : Documentation
*/
class GlTf final
{
public:
    /**
    TODO : Documentation
    */
    GlTf() = default;

    /**
    TODO : Documentation
    */
    void reset();

    /**
    TODO : Documentation
    */
    void load(const std::filesystem::path& filePath);

private:
    void parse_scenes();
    void parse_scene();
    void parse_nodes();
    void create_buffers();
    size_t mScene { 0 };
    std::vector<Scene> mScenes;
    std::vector<Node> mNodes;
    std::vector<vk::Managed<VkBuffer>> mBuffers;
    std::vector<vk::Managed<VkBufferView>> mBufferViews;
};

} // namespace gltf
} // namespace dst
