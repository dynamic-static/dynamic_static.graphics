
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandBuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/QueueFamily.hpp"

#include <algorithm>
#include <array>
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

        /*!
        TODO : Documentation.
        */
        template <
            typename VertexType,
            typename IndexType
        >
        inline void write(
            const std::shared_ptr<Device>& device,
            dst::Span<const VertexType> vertices,
            dst::Span<const IndexType> indices
        )
        {
            // TODO : This method needs work, it's extremely inflexible.
            switch (sizeof(IndexType)) {
                case sizeof(uint16_t) : indexType = VK_INDEX_TYPE_UINT16; break;
                case sizeof(uint32_t) : indexType = VK_INDEX_TYPE_UINT32; break;
                default: assert(false && "Unsupported VkIndexType"); break;
            }
            indexCount = (uint32_t)indices.size();
            Buffer::CreateInfo bufferCreateInfo { };
            bufferCreateInfo.size = (VkDeviceSize)vertices.size_bytes();
            bufferCreateInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            vertexBuffer = device->create<Buffer>(bufferCreateInfo);
            bufferCreateInfo.size = (VkDeviceSize)indices.size_bytes();
            bufferCreateInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            indexBuffer = device->create<Buffer>(bufferCreateInfo);
            std::array<Buffer*, 2> buffers { vertexBuffer.get(), indexBuffer.get() };
            DeviceMemory::allocate_multi_resource_memory(buffers, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);

            bufferCreateInfo.size = std::max(vertexBuffer->get_memory_size(), indexBuffer->get_memory_size());
            bufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto stagingBuffer = device->create<Buffer>(bufferCreateInfo);
            auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            DeviceMemory::allocate_resource_memory(stagingBuffer, memoryProperties);
            auto copyBuffer =
            [&](std::shared_ptr<Buffer>& buffer)
            {
                device->get_queue_families()[0].get_queues()[0].process_immediately(
                    [&](const CommandBuffer& commandBuffer)
                    {
                        VkBufferCopy copy { };
                        copy.size = buffer->get_size();
                        vkCmdCopyBuffer(commandBuffer, *stagingBuffer, *buffer, 1, &copy);
                    }
                );
            };
            stagingBuffer->write<VertexType>(vertices);
            copyBuffer(vertexBuffer);
            stagingBuffer->write<IndexType>(indices);
            copyBuffer(indexBuffer);
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
