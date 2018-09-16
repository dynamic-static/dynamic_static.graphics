
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
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"

#include <algorithm>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    PipelineLayout::PipelineLayout(const std::shared_ptr<Device>& device)
        : PipelineLayout(device, nullptr, nullptr, { })
    {
    }

    PipelineLayout::PipelineLayout(
        const std::shared_ptr<Device>& device,
        dst::Span<const std::shared_ptr<DescriptorSetLayout>> descriptorSetLayouts,
        PipelineLayout::CreateInfo createInfo
    )
        : PipelineLayout(device, descriptorSetLayouts, nullptr, createInfo)
    {
    }

    PipelineLayout::PipelineLayout(
        const std::shared_ptr<Device>& device,
        dst::Span<const VkPushConstantRange> pushConstantRanges,
        PipelineLayout::CreateInfo createInfo
    )
        : PipelineLayout(device, nullptr, pushConstantRanges, createInfo)
    {
    }

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
        // TODO : DRY...
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

    PipelineLayout::PipelineLayout(
        const std::shared_ptr<Device>& device,
        dst::Span<const std::shared_ptr<ShaderModule>> shaderModules,
        PipelineLayout::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("PipelineLayout");
        // TODO : Scratch pad memory...
        uint32_t descriptorSetCount = 0;
        for (auto const& shaderModule : shaderModules) {
            descriptorSetCount = std::max(descriptorSetCount, (uint32_t)shaderModule->get_descriptor_set_layout_bindings().size());
            dst::append(mPushConstantRanges, shaderModule->get_push_constant_ranges());
        }
        std::vector<VkDescriptorSetLayout> vkDescriptorSetLayouts;
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            bindings.clear();
            for (auto const& shaderModule : shaderModules) {
                const auto& descriptorSets = shaderModule->get_descriptor_set_layout_bindings();
                if (i < descriptorSets.size()) {
                    dst::append(bindings, descriptorSets[i]);
                }
            }
            if (!bindings.empty()) {
                DescriptorSetLayout::CreateInfo descriptorSetLayoutCreateInfo { };
                descriptorSetLayoutCreateInfo.bindingCount = (uint32_t)bindings.size();
                descriptorSetLayoutCreateInfo.pBindings = bindings.data();
                mDescriptorSetLayouts.push_back(get_device().create<DescriptorSetLayout>(descriptorSetLayoutCreateInfo));
                vkDescriptorSetLayouts.push_back(mDescriptorSetLayouts.back()->get_handle());
            }
        }
        // TODO : DRY...
        if (!vkDescriptorSetLayouts.empty()) {
            createInfo.setLayoutCount = (uint32_t)vkDescriptorSetLayouts.size();
            createInfo.pSetLayouts = vkDescriptorSetLayouts.data();
            createInfo.pushConstantRangeCount = (uint32_t)mPushConstantRanges.size();
            createInfo.pPushConstantRanges = mPushConstantRanges.data();
            dst_vk(vkCreatePipelineLayout(get_device(), &createInfo, nullptr, &mHandle));
        }
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
