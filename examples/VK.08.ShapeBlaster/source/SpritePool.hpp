
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

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <string>

namespace ShapeBlaster {

    class Sprite_ex final
    {
    public:
        static constexpr size_t VertexCount { 4 };
        static constexpr size_t IndexCount { 6 };

    public:
        class Pool;
    };

    class Sprite_ex::Pool final
    {
    private:
        std::shared_ptr<dst::vlkn::RenderPass> mRenderPass;

        std::shared_ptr<dst::vlkn::Image> mImage;
        std::shared_ptr<dst::vlkn::Buffer> mVertexBuffer;
        std::shared_ptr<dst::vlkn::Buffer> mIndexBuffer;

    public:
        Pool(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue,
            VkFormat renderPassFormat,
            const std::string& filePath,
            size_t count
        )
        {

        }

    private:
        void create_render_pass(dst::vlkn::Device& device, VkFormat format)
        {
            using namespace dst::vlkn;

            VkAttachmentDescription colorAttachment { };
            colorAttachment.format = format;
            colorAttachment.samples = VK_SAMPLE_COUNT_1_BIT;
        }
    };

} // namespace ShapeBlaster
