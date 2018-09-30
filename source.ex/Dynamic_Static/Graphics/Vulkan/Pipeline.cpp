
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
#include "Dynamic_Static/Graphics/Vulkan/PipelineLayout.hpp"

namespace dst {
namespace gfx {
namespace vk {

    Pipeline::ShaderStageCreateInfo::ShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo& other)
    {
        *this = other;
    }

    Pipeline::ShaderStageCreateInfo& Pipeline::ShaderStageCreateInfo::operator=(const VkPipelineShaderStageCreateInfo& other)
    {
        if (this != &other) {
            memcpy(this, &other, sizeof(*this));
        }
        return *this;
    }

    Pipeline::Pipeline(
        const std::shared_ptr<Device>& device,
        const std::shared_ptr<PipelineLayout>& layout,
        Pipeline::GraphicsCreateInfo createInfo
    )
        : DeviceChild(device)
        , mLayout { layout }
    {
        assert(mLayout);
        set_name("Pipeline");
        createInfo.layout = *mLayout;
        dst_vk(vkCreateGraphicsPipelines(get_device(), VK_NULL_HANDLE, 1, &createInfo, nullptr, &mHandle));
    }

    Pipeline::~Pipeline()
    {
        if (mHandle) {
            vkDestroyPipeline(get_device(), mHandle, nullptr);
        }
    }

    PipelineLayout& Pipeline::get_layout()
    {
        assert(mLayout);
        return *mLayout;
    }

    const PipelineLayout& Pipeline::get_layout() const
    {
        assert(mLayout);
        return *mLayout;
    }

} // namespace vk
} // namespace gfx
} // namespace dst
