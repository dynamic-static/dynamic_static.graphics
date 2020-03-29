
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/BloomCombine.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/ExtractLuminance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class Bloom final
    {
    public:
        float threshold { 0.25f };
        float amount { 4 };
        float bloomIntensity { 1.25f };
        float baseIntensity { 1 };
        float bloomSaturation { 1 };
        float baseSaturation { 1 };

    /* private: */
        ExtractLuminance mExtract;
        // GaussianBlur mBlur;
        // BloomCombine mCombine;
        Command::Buffer* mCommandBuffer { nullptr };

    public:
        Bloom(Device& device, RenderPass& renderPass, uint32_t width, uint32_t height);

    public:
        void begin(Command::Buffer& commandBuffer, RenderPass& renderPass);
        void end();

    private:
        std::array<VkClearValue, 2> clear_values() const;
        VkViewport viewport() const;
        VkRect2D scissor() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
