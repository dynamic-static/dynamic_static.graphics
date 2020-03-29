
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Pipeline Layout.
     */
    class Pipeline::Layout final
        : public Object<VkPipelineLayout>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Default Pipeline::Layout creation parameters.
         */
        static constexpr VkPipelineLayoutCreateInfo CreateInfo {
            /* sType                  */ VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,
            /* pNext                  */ nullptr,
            /* flags                  */ 0,
            /* setLayoutCount         */ 0,
            /* pSetLayouts            */ nullptr,
            /* pushConstantRangeCount */ 0,
            /* pPushConstantRanges    */ nullptr,
        };

    private:
        Layout(
            const std::shared_ptr<Device>& device,
            const VkPipelineLayoutCreateInfo& info = CreateInfo
        );

    public:
        /**
         * Destroys this instance of Pipeline::Layout.
         */
        ~Layout();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
