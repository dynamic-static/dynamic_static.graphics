
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    RenderPass::RenderPass(
        const std::shared_ptr<Device>& device,
        RenderPass::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("RenderPass");
    }

    RenderPass::~RenderPass()
    {
        if (mHandle) {
            vkDestroyRenderPass(get_device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
