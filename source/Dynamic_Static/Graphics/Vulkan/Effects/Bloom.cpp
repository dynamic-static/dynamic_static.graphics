
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Effects/Bloom.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Bloom::Bloom(Device& device, RenderPass& renderPass, uint32_t width, uint32_t height)
        : mExtract(device, renderPass, width, height)
        // , mBlur(device, width, height, format)
        // , mCombine(device, width, height, format)
    {
    }

    void Bloom::begin(Command::Buffer& commandBuffer, RenderPass& renderPass)
    {
        assert(mCommandBuffer == nullptr);
        mCommandBuffer = &commandBuffer;

        const auto& renderTarget = mExtract.mRenderTarget;
        auto renderPassBeginInfo = RenderPass::BeginInfo;
        renderPassBeginInfo.renderPass = *mExtract.mRenderPass;
        renderPassBeginInfo.framebuffer = *renderTarget->framebuffer;
        auto clearValues = clear_values();
        renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
        renderPassBeginInfo.pClearValues = clearValues.data();
        mCommandBuffer->begin_render_pass(renderPassBeginInfo);
        auto vp = viewport();
        mCommandBuffer->set_viewport(vp);
        auto sc = scissor();
        mCommandBuffer->set_scissor(sc);
    }

    void Bloom::end()
    {
        assert(mCommandBuffer);
        mCommandBuffer->end_render_pass();


        mCommandBuffer = nullptr;
    }

    std::array<VkClearValue, 2> Bloom::clear_values() const
    {
        std::array<VkClearValue, 2> clearValues { };
        clearValues[0].color = { 0, 0, 0, 0 };
        clearValues[1].depthStencil = { 1, 0 };
        return clearValues;
    }

    VkViewport Bloom::viewport() const
    {
        auto width = mExtract.mRenderTarget ? mExtract.mRenderTarget->extent().width : 0;
        auto height = mExtract.mRenderTarget ? mExtract.mRenderTarget->extent().height : 0;
        return { 0, 0, static_cast<float>(width), static_cast<float>(height), 0, 1 };
    }

    VkRect2D Bloom::scissor() const
    {
        auto width = mExtract.mRenderTarget ? mExtract.mRenderTarget->extent().width : 0;
        auto height = mExtract.mRenderTarget ? mExtract.mRenderTarget->extent().height : 0;
        return { { 0, 0 }, { width, height } };
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
