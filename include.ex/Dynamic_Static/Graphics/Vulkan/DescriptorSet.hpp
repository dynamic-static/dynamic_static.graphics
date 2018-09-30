
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DescriptorPoolChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan descriptor set.
    */
    class DescriptorSet final
        : public Object<VkDescriptorSet>
        , public SharedObject<DescriptorSet>
        , public DescriptorPoolChild
    {
    public:
        /*!
        Configuration parameters for DescriptorSet allocation.
        */
        struct AllocateInfo final
            : public VkDescriptorSetAllocateInfo
        {
            /*!
            Constructs an instance of DescriptorSet::AllocateInfo.
            */
            inline AllocateInfo()
            {
                sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
                pNext = nullptr;
                descriptorPool = VK_NULL_HANDLE;
                descriptorSetCount = 0;
                pSetLayouts = nullptr;
                static_assert(
                    sizeof(DescriptorSet::AllocateInfo) == sizeof(VkDescriptorSetAllocateInfo),
                    "sizeof(DescriptorSet::AllocateInfo) != sizeof(VkDescriptorSetAllocateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for DescriptorSet writing.
        */
        struct Write final
            : public VkWriteDescriptorSet
        {
            /*!
            Constructs an instance of DescriptorSet::Write.
            */
            inline Write()
            {
                sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
                pNext = nullptr;
                dstSet = VK_NULL_HANDLE;
                dstBinding = 0;
                dstArrayElement = 0;
                descriptorCount = 0;
                descriptorType = VK_DESCRIPTOR_TYPE_SAMPLER;
                pImageInfo = nullptr;
                pBufferInfo = nullptr;
                pTexelBufferView = nullptr;
            }
        };

    private:
        /*!
        Constructs an instance of DescriptorSet.
        @param [in] device This DescriptorSet's DescriptorPool
        @param [in] descriptorSetLayout This DescriptorSet's DescriptorSetLayout
        @param [in] allocateInfo This DescriptorSet's DescriptorSet::AllocateInfo (optional = { })
        */
        DescriptorSet(
            const std::shared_ptr<DescriptorPool>& descriptorPool,
            const std::shared_ptr<DescriptorSetLayout>& descriptorSetLayout,
            DescriptorSet::AllocateInfo allocateInfo = { }
        );

    public:
        /*!
        Destroys this instance of DescriptorSet.
        */
        ~DescriptorSet();

    private:
        friend class DescriptorPool;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
