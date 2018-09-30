
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DescriptorSet.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DescriptorPool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DescriptorSetLayout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace dst {
namespace gfx {
namespace vk {

    DescriptorSet::DescriptorSet(
        const std::shared_ptr<DescriptorPool>& descriptorPool,
        const std::shared_ptr<DescriptorSetLayout>& descriptorSetLayout,
        DescriptorSet::AllocateInfo allocateInfo
    )
        : DescriptorPoolChild(descriptorPool)
    {
        set_name("DescriptorSet");
        allocateInfo.descriptorPool = *descriptorPool;
        allocateInfo.descriptorSetCount = 1;
        allocateInfo.pSetLayouts = &descriptorSetLayout->get_handle();
        dst_vk(vkAllocateDescriptorSets(get_descriptor_pool().get_device(), &allocateInfo, &mHandle));
    }

    DescriptorSet::~DescriptorSet()
    {
        if (mHandle) {
            vkFreeDescriptorSets(get_descriptor_pool().get_device(), get_descriptor_pool(), 1, &mHandle);
        }
    }

} // namespace vk
} // namespace gfx
} // namespace dst
