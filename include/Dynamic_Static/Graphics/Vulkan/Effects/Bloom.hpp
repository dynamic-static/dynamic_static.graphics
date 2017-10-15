
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

    public:
        Bloom(Device& device);

    private:
        ExtractLuminance mExtract;
        // GaussianBlur mBlur;
        // BloomCombine mCombine;

    public:
        void begin();
        void end();
        void submit();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
