
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan mesh.
    */
    class Mesh
    {
    public:
        std::shared_ptr<dst::vk::Buffer> vertexBuffer;
        std::shared_ptr<dst::vk::Buffer> indexBuffer;
        VkIndexType indexType { VK_INDEX_TYPE_UINT16 };
        uint32_t indexCount { 0 };

    public:
        /*
        Constructs an instance of Mesh.
        */
        Mesh() = default;

    public:
        /*
        Records this Mesh's draw Cmds.
        @param [in] commandBuffer The CommandBuffer to record this Mesh's draw Cmds to
        */
        void record_draw_cmds(const CommandBuffer& commandBuffer);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
