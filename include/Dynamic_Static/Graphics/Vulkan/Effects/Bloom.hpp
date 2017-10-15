
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
#include "Dynamic_Static/Graphics/Vulkan/Effects/BloomExtract.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class Bloom final
    {
    private:
        BloomExtract mBloomExtract;
        // GaussianBlur mGaussianBlur;
        // BloomCombine mBloomCombine;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
