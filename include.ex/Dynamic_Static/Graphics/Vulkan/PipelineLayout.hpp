
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

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

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
        /*!
        Constructs an instance of PipelineLayout.
        @param [in] device This PipelineLayout's Device
        @param [in] createInfo This PipelineLayout's PipelineLayout::CreateInfo
        */
        PipelineLayout(
            const std::shared_ptr<Device>& device,
            PipelineLayout::CreateInfo createInfo
        );

    public:
        /*!
        Destroys this instance of PipelineLayout.
        */
        ~PipelineLayout();

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
