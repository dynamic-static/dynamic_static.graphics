
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
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan pipeline layout.
    */
    class PipelineLayout final
        : public Object<VkPipelineLayout>
        , public SharedObject<PipelineLayout>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for PipelineLayout construction.
        */
        struct CreateInfo final
            : public VkPipelineLayoutCreateInfo
        {
            /*!
            Constructs an instance of PipelineLayout::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                setLayoutCount = 0;
                pSetLayouts = nullptr;
                pushConstantRangeCount = 0;
                pPushConstantRanges = nullptr;
                static_assert(
                    sizeof(PipelineLayout::CreateInfo) == sizeof(VkPipelineLayoutCreateInfo),
                    "sizeof(PipelineLayout::CreateInfo) != sizeof(VkPipelineLayoutCreateInfo)"
                );
            }
        };

    private:
        std::vector<std::shared_ptr<DescriptorSetLayout>> mDescriptorSetLayouts;
        std::vector<VkPushConstantRange> mPushConstantRanges;

    private:
        /*!
        Constructs an instance of PipelineLayout.
        @param [in] device This PipelineLayout's Device
        */
        PipelineLayout(const std::shared_ptr<Device>& device);

        /*!
        Constructs an instance of PipelineLayout.
        @param [in] device This PipelineLayout's Device
        @param [in] descriptorSetLayouts This PipelineLayout's DescriptorSetLayouts
        @param [in] createInfo This PipelineLayout's PipelineLayout::CreateInfo (optional = { })
        */
        PipelineLayout(
            const std::shared_ptr<Device>& device,
            dst::Span<const std::shared_ptr<DescriptorSetLayout>> descriptorSetLayouts,
            PipelineLayout::CreateInfo createInfo = { }
        );

        /*!
        Constructs an instance of PipelineLayout.
        @param [in] device This PipelineLayout's Device
        @param [in] pushConstantRanges This PipelineLayout's VkPushConstantRanges
        @param [in] createInfo This PipelineLayout's PipelineLayout::CreateInfo (optional = { })
        */
        PipelineLayout(
            const std::shared_ptr<Device>& device,
            dst::Span<const VkPushConstantRange> pushConstantRanges,
            PipelineLayout::CreateInfo createInfo = { }
        );

        /*!
        Constructs an instance of PipelineLayout.
        @param [in] device This PipelineLayout's Device
        @param [in] descriptorSetLayouts This PipelineLayout's DescriptorSetLayouts
        @param [in] pushConstantRanges This PipelineLayout's VkPushConstantRanges
        @param [in] createInfo This PipelineLayout's PipelineLayout::CreateInfo (optional = { })
        */
        PipelineLayout(
            const std::shared_ptr<Device>& device,
            dst::Span<const std::shared_ptr<DescriptorSetLayout>> descriptorSetLayouts,
            dst::Span<const VkPushConstantRange> pushConstantRanges,
            PipelineLayout::CreateInfo createInfo = { }
        );

        /*!
        Constructs an instance of PipelineLayout.
        @param [in] device This PipelineLayout's Device
        @param [in] shaderModules This PipelineLayout's ShaderModules
        @param [in] createInfo This PipelineLayout's PipelineLayout::CreateInfo (optional = { })
        */
        PipelineLayout(
            const std::shared_ptr<Device>& device,
            dst::Span<const std::shared_ptr<ShaderModule>> shaderModules,
            PipelineLayout::CreateInfo createInfo = { }
        );

    public:
        /*!
        Destroys this instance of PipelineLayout.
        */
        ~PipelineLayout();

    public:
        /*!
        Gets this PipelineLayout's DescriptorSetLayouts.
        @return This PipelineLayout's DescriptorSetLayouts
        */
        dst::Span<const std::shared_ptr<DescriptorSetLayout>> get_descriptor_set_layouts() const;

        /*!
        Gets this PipelineLayout's DescriptorSetLayouts.
        @return This PipelineLayout's DescriptorSetLayouts
        */
        dst::Span<const VkPushConstantRange> get_push_constant_ranges() const;

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
