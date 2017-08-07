
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Pipeline::Layout::Layout(const std::shared_ptr<Device>& device, const Info& info)
        : DeviceChild(device)
    {
        validate(vkCreatePipelineLayout(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Layout");
    }

    Pipeline::Layout::~Layout()
    {
        if (mHandle) {
            vkDestroyPipelineLayout(device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
