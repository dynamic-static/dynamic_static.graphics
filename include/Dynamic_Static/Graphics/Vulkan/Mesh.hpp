
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"

#include "gsl/gsl"

#include <algorithm>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    struct VertexPositionTexCoordColor final
    {
        // TODO : Find a home for this...

        dst::Vector3 position;
        dst::Vector2 texCoord;
        dst::Color color;

        static VkVertexInputBindingDescription binding_description()
        {
            VkVertexInputBindingDescription binding;
            binding.binding = 0;
            binding.stride = sizeof(VertexPositionTexCoordColor);
            binding.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
            return binding;
        }

        static std::array<VkVertexInputAttributeDescription, 3> attribute_descriptions()
        {
            VkVertexInputAttributeDescription positionAttribute;
            positionAttribute.binding = 0;
            positionAttribute.location = 0;
            positionAttribute.format = VK_FORMAT_R32G32B32_SFLOAT;
            positionAttribute.offset = offsetof(VertexPositionTexCoordColor, position);

            VkVertexInputAttributeDescription texCoordAttribute;
            texCoordAttribute.binding = 0;
            texCoordAttribute.location = 1;
            texCoordAttribute.format = VK_FORMAT_R32G32_SFLOAT;
            texCoordAttribute.offset = offsetof(VertexPositionTexCoordColor, texCoord);

            VkVertexInputAttributeDescription colorAttribute;
            colorAttribute.binding = 0;
            colorAttribute.location = 2;
            colorAttribute.format = VK_FORMAT_R32G32B32A32_SFLOAT;
            colorAttribute.offset = offsetof(VertexPositionTexCoordColor, color);

            return {
                positionAttribute,
                texCoordAttribute,
                colorAttribute
            };
        }

        static VkPipelineVertexInputStateCreateInfo pipeline_input_state_create_info()
        {
            static auto bindindDescription = binding_description();
            static auto attributeDescriptions = attribute_descriptions();
            VkPipelineVertexInputStateCreateInfo inputState = Pipeline::VertexInputStateCreateInfo;
            inputState.vertexBindingDescriptionCount = 1;
            inputState.pVertexBindingDescriptions = &bindindDescription;
            inputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(attributeDescriptions.size());
            inputState.pVertexAttributeDescriptions = attributeDescriptions.data();
            return inputState;
        }
    };

    /**
     * TODO : Documentation.
     */
    class Mesh final
    {
        // TODO : This thing needs alot of work, but it's doing the job for now.

    public:
        std::shared_ptr<Buffer> vertexBuffer;
        std::shared_ptr<Buffer> indexBuffer;
        size_t indexCount { 0 };

    public:
        template <typename VertexType, typename IndexType = uint32_t>
        void write(
            Command::Pool& commandPool,
            Queue& queue,
            gsl::span<VertexType> vertices,
            gsl::span<IndexType> indices
        )
        {
            auto& device = commandPool.device();

            auto vertexBufferInfo = Buffer::CreateInfo;
            vertexBufferInfo.size = vertices.size_bytes();
            vertexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
            auto vertexMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
            vertexBuffer = device.create<Buffer>(vertexBufferInfo, vertexMemoryProperties);

            auto indexBufferInfo = Buffer::CreateInfo;
            indexBufferInfo.size = indices.size_bytes();
            indexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
            auto indexMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
            indexBuffer = device.create<Buffer>(indexBufferInfo, indexMemoryProperties);

            auto stagingBufferInfo = Buffer::CreateInfo;
            stagingBufferInfo.size = std::max(vertexBufferInfo.size, indexBufferInfo.size);
            stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto stagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, stagingMemoryProperties);

            auto commandBuffer = commandPool.allocate_transient<Command::Buffer>();
            auto copy_buffer =
            [&](Buffer& source, Buffer& destination, size_t size)
            {
                auto beginInfo = Command::Buffer::BeginInfo;
                beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
                commandBuffer->begin(beginInfo);
                commandBuffer->copy_buffer(source, destination, size);
                commandBuffer->end();
                auto submitInfo = Queue::SubmitInfo;
                submitInfo.commandBufferCount = 1;
                submitInfo.pCommandBuffers = &commandBuffer->handle();
                queue.submit(submitInfo);
                queue.wait_idle();
            };

            stagingBuffer->write<VertexType>(vertices);
            copy_buffer(*stagingBuffer, *vertexBuffer, vertexBufferInfo.size);
            stagingBuffer->write<IndexType>(indices);
            copy_buffer(*stagingBuffer, *indexBuffer, indexBufferInfo.size);
            indexCount = indices.size();
        }

        void draw(Command::Buffer& commandBuffer);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
