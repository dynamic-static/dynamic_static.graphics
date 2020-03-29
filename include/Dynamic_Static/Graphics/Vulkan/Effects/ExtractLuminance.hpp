
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp"

#include <utility>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class ExtractLuminance final
    {
    public:
        static constexpr float ThresholdDefault { 0.25f };
        static constexpr std::pair<float, float> ThresholdLimits { 0.0f, 1.0f };
        float threshold { ThresholdDefault };

    /* private: */
        std::shared_ptr<RenderPass> mRenderPass;
        std::shared_ptr<Descriptor::Set::Layout> mDescriptorSetLayout;
        std::shared_ptr<Pipeline::Layout> mPipelineLayout;
        std::shared_ptr<Pipeline> mPipeline;
        std::unique_ptr<RenderTarget> mRenderTarget;
        std::shared_ptr<Sampler> mSampler;
        std::shared_ptr<Descriptor::Pool> mDescriptorPool;
        Descriptor::Set* mDescriptorSet { nullptr };

    public:
        ExtractLuminance() = default;
        ExtractLuminance(Device& device, RenderPass& renderPass, uint32_t width, uint32_t height);

    private:
        void create_render_pass(Device& device, RenderPass& renderPass);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
