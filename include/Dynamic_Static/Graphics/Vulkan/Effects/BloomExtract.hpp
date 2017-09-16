
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effect.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class BloomExtract final
        : public Effect
    {
    public:
        struct Settings final
        {
            float threshold { 0.25f };
            float amount { 4 };
            float bloomIntensity { 1.25f };
            float baseIntensity { 1 };
            float bloomSaturation { 1 };
            float baseSaturation { 1 };
        } settings;

    public:
        BloomExtract() = default;
        BloomExtract(Device& device, uint32_t width, uint32_t height, VkFormat format);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
