
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include "gsl/gsl"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    class ShaderModule::Reflector final
    {
    public:
        static std::vector<VkDescriptorSetLayoutBinding> get_descriptor_set_layout_bindings(gsl::span<const uint32_t> spirv);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
