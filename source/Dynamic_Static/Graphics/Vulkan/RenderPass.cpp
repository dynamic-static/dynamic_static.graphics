
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    RenderPass::RenderPass(const std::shared_ptr<Device>& device, const Info& info)
        : DeviceChild(device)
    {
        validate(vkCreateRenderPass(DeviceChild::device(), &info, nullptr, &mHandle));
        name("RenderPass");
    }

    RenderPass::~RenderPass()
    {
        if (mHandle) {
            vkDestroyRenderPass(device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
