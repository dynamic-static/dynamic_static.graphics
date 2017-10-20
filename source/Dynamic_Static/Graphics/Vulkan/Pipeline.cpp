
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Pipeline::Pipeline(
        const std::shared_ptr<Device>& device,
        const VkGraphicsPipelineCreateInfo& info
    )
        : DeviceChild(device)
    {
        validate(vkCreateGraphicsPipelines(DeviceChild::device(), VK_NULL_HANDLE, 1, &info, nullptr, &mHandle));
        name("Graphics Pipeline");
    }

    Pipeline::Pipeline(
        const std::shared_ptr<Device>& device,
        const VkComputePipelineCreateInfo& info
    )
        : DeviceChild(device)
    {
        validate(vkCreateComputePipelines(DeviceChild::device(), VK_NULL_HANDLE, 1, &info, nullptr, &mHandle));
        name("Compute Pipeline");
    }

    Pipeline::~Pipeline()
    {
        if (mHandle) {
            vkDestroyPipeline(device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
