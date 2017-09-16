
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.View.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Mesh.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderTarget.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Sampler.hpp"

#include <array>
#include <memory>
#include <string>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class Effect
    {
        // TODO : This thing needs alot of work, but it's doing the job for now.

    public:
        std::shared_ptr<RenderPass> renderPass;
        std::unique_ptr<RenderTarget> renderTarget;
        std::shared_ptr<Descriptor::Set::Layout> descriptorSetLayout;
        std::shared_ptr<Pipeline> pipeline;
        std::shared_ptr<Pipeline::Layout> pipelineLayout;
        std::shared_ptr<Buffer> uniformBuffer;
        std::shared_ptr<Descriptor::Pool> descriptorPool;
        Descriptor::Set* descriptorSet { nullptr };
        std::shared_ptr<Sampler> sampler;

    public:
        Effect() = default;
        Effect(
            Device& device,
            uint32_t width,
            uint32_t height,
            VkFormat format,
            VkFormat depthFormat,
            const std::string& vertexShaderSource,
            const std::string& fragmentShaderSource
        );

    public:
        template <typename UniformBufferObjectType>
        void create_uniform_buffer()
        {
            VkDeviceSize uniformBufferSize = sizeof(UniformBufferObjectType);
            auto uniformBufferInfo = Buffer::CreateInfo;
            uniformBufferInfo.size = static_cast<VkDeviceSize>(uniformBufferSize);
            uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            auto uniformMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            uniformBuffer = renderPass->device().create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
        }

        void write_descriptor_set(Image& image);

    private:
        void create_render_pass(Device& device, VkFormat format, VkFormat depthFormat);
        void create_render_target(uint32_t width, uint32_t height, VkFormat format, VkFormat depthFormat);
        void create_descriptor_set_layout(Device& device);
        void create_pipeline_layout(Device& device);
        void create_pipeline(Device& device, const std::string& vertexShaderSource, const std::string& fragmentShaderSource);
        void create_descriptor_pool(Device& device);
        void create_descriptor_set();
        void create_sampler(Device& device);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
