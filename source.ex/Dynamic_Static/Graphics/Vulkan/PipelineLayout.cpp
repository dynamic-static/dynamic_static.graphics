
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/PipelineLayout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    PipelineLayout::PipelineLayout(
        const std::shared_ptr<Device>& device,
        PipelineLayout::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("PipelineLayout");
        dst_vk(vkCreatePipelineLayout(get_device(), &createInfo, nullptr, &mHandle));
    }

    PipelineLayout::~PipelineLayout()
    {
        if (mHandle) {
            vkDestroyPipelineLayout(get_device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
