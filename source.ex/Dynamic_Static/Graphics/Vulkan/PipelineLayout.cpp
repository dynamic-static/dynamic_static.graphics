
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/PipelineLayout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DescriptorSetLayout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    PipelineLayout::PipelineLayout(
        const std::shared_ptr<Device>& device,
        dst::Span<const std::shared_ptr<DescriptorSetLayout>> descriptorSetLayouts,
        dst::Span<const VkPushConstantRange> pushConstantRanges,
        PipelineLayout::CreateInfo createInfo
    )
        : DeviceChild(device)
        , mDescriptorSetLayouts(descriptorSetLayouts.begin(), descriptorSetLayouts.end())
        , mPushConstantRanges(pushConstantRanges.begin(), pushConstantRanges.end())
    {
        set_name("PipelineLayout");
        // TODO : Scratch pad memory...
        std::vector<VkDescriptorSetLayout> vkDescriptorSetLayouts;
        vkDescriptorSetLayouts.reserve(mDescriptorSetLayouts.size());
        for (auto const& descriptorSetLayout : mDescriptorSetLayouts) {
            assert(descriptorSetLayout);
            vkDescriptorSetLayouts.push_back(descriptorSetLayout->get_handle());
        }
        createInfo.setLayoutCount = (uint32_t)vkDescriptorSetLayouts.size();
        createInfo.pSetLayouts = vkDescriptorSetLayouts.data();
        createInfo.pushConstantRangeCount = (uint32_t)pushConstantRanges.size();
        createInfo.pPushConstantRanges = pushConstantRanges.data();
        dst_vk(vkCreatePipelineLayout(get_device(), &createInfo, nullptr, &mHandle));
    }

    PipelineLayout::~PipelineLayout()
    {
        if (mHandle) {
            vkDestroyPipelineLayout(get_device(), mHandle, nullptr);
        }
    }

    dst::Span<const std::shared_ptr<DescriptorSetLayout>> PipelineLayout::get_descriptor_set_layouts() const
    {
        return mDescriptorSetLayouts;
    }

    dst::Span<const VkPushConstantRange> PipelineLayout::get_push_constant_ranges() const
    {
        return mPushConstantRanges;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
