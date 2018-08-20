
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
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
        Pipeline::GraphicsCreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("Pipeline");
        dst_vk(vkCreateGraphicsPipelines(get_device(), VK_NULL_HANDLE, 1, &createInfo, nullptr, &mHandle));
    }

    Pipeline::~Pipeline()
    {
        if (mHandle) {
            vkDestroyPipeline(get_device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
