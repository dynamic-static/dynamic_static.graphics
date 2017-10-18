
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "BloomSettings.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/ExtractLuminance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.hpp"

#include <memory>

namespace ShapeBlaster {

    class BloomComponent final
    {
    public:
        static constexpr uint32_t Width { 1280 };
        static constexpr uint32_t Height { 720 };

    public:
        BloomSettings settings;

    public:
        dst::vlkn::Mesh mQuad;
        dst::vlkn::Command::Buffer* mCommandBuffer { nullptr };
        std::shared_ptr<dst::vlkn::Semaphore> mSemaphore;

        dst::vlkn::ExtractLuminance bloomExtract;

    public:
        BloomComponent()
        {
            // Swap chain...
            // create_offscreen_render_pass()
            // create_render_target()
            // create_non_reflective_descriptor_set_layout()
            // create_offscreen_pipeline()
            // create_offscreen_uniform_buffer()
            // create_offscreen_descriptor_pool()
            // create_offscreen_descriptor_set()
            // create_offscreen_command_buffer()
            // create_offscreen_semaphores()
        }

    public:
        void initialize(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue
        )
        {
            using namespace dst::vlkn;
            mQuad.write<VertexPositionTexCoordColor, uint16_t>(
                commandPool,
                queue,
                std::vector<VertexPositionTexCoordColor> {
                    { { -1, -1, 0 }, { 0, 0 }, { dst::Color::White } },
                    { {  1, -1, 0 }, { 1, 0 }, { dst::Color::White } },
                    { {  1,  1, 0 }, { 1, 1 }, { dst::Color::White } },
                    { { -1,  1, 0 }, { 0, 1 }, { dst::Color::White } },
                },
                std::vector<uint16_t> { 0, 1, 2, 2, 3, 0 }
            );

            mCommandBuffer = commandPool.allocate<dst::vlkn::Command::Buffer>();

            mSemaphore = device.create<dst::vlkn::Semaphore>();

            VkFormat format = VK_FORMAT_B8G8R8A8_UNORM;
            std::array<VkFormat, 3> depthFormats {
                VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT
            };

            auto depthFormat = device.physical_device().find_supported_format(
                depthFormats,
                VK_IMAGE_TILING_OPTIMAL,
                VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
            );

            // bloomExtract = ExtractLuminance(device, Width, Height, format);
        }

        void begin()
        {
            // using namespace dst::vlkn;
            // 
            // auto renderPassBeginInfo = RenderPass::BeginInfo;
            // const auto& renderTarget = *bloomExtract.renderTarget;
            // renderPassBeginInfo.renderPass = *bloomExtract.renderPass;
            // renderPassBeginInfo.framebuffer = *renderTarget.framebuffer;
            // 
            // VkExtent2D extent;
            // extent.width = renderTarget.extent().width;
            // extent.height = renderTarget.extent().height;
            // renderPassBeginInfo.renderArea.extent = extent;
            // 
            // std::array<VkClearValue, 2> clearValues;
            // clearValues[0].color = { 0, 0, 0, 0 };
            // clearValues[1].depthStencil = { 1, 0 };
            // renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
            // renderPassBeginInfo.pClearValues = clearValues.data();
            // 
            // mCommandBuffer->begin();
            // mCommandBuffer->begin_render_pass(renderPassBeginInfo);
            // 
            // VkViewport viewport { };
            // viewport.width = static_cast<float>(extent.width);
            // viewport.height = static_cast<float>(extent.height);
            // viewport.minDepth = 0;
            // viewport.maxDepth = 1;
            // mCommandBuffer->set_viewport(viewport);
            // 
            // VkRect2D scissor { };
            // scissor.extent = extent;
            // mCommandBuffer->set_scissor(scissor);
        }

        void end()
        {
            mCommandBuffer->end_render_pass();
            mCommandBuffer->end();
        }
    };

} // namespace ShapeBlaster
