
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
    class Mesh final
    {
    public:
        std::shared_ptr<dst::vk::Buffer> vertexBuffer;
        std::shared_ptr<dst::vk::Buffer> indexBuffer;
        VkIndexType indexType { VK_INDEX_TYPE_UINT16 };
        int indexCount { 0 };

    public:
        /*
        Constructs an instance of Mesh.
        */
        Mesh() = default;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
