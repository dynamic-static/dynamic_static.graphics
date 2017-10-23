
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Application.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.hpp"

#include <memory>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    class Application
        : public gfx::Application
    {
    protected:
        VkDebugReportFlagsEXT mDebugFlags { 0 };
        std::shared_ptr<Instance> mInstance;
        PhysicalDevice* mPhysicalDevice { nullptr };
        std::shared_ptr<SurfaceKHR> mSurface;
        std::shared_ptr<Device> mDevice;
        Queue* mGraphicsQueue { nullptr };
        Queue* mPresentQueue { nullptr };
        std::shared_ptr<SwapchainKHR> mSwapchain;
        std::shared_ptr<RenderPass> mRenderPass;
        std::shared_ptr<Command::Pool> mCommandPool;
        std::shared_ptr<Semaphore> mImageSemaphore;
        std::shared_ptr<Semaphore> mRenderSemaphore;
        std::vector<std::shared_ptr<Framebuffer>> mFramebuffers;
        std::shared_ptr<Image> mDepthBuffer;
        VkFormat mDepthFormat { VK_FORMAT_UNDEFINED };
        bool mDepthEnabled { false };
        dst::Color mClearColor { 0.2f, 0.2f, 0.2f, 1 };

    /* private: */
        bool mCreateFramebuffers { true };
        bool mRecordCommandBuffers { true };
        uint32_t mImageIndex { 0 };

    public:
        /**
         * TODO : Documentation.
         */
        virtual void setup() override;

        /**
         * TODO : Documentation.
         */
        virtual void pre_update(const dst::Clock& clock, const dst::Input& input) override;

        /**
         * TODO : Documentation.
         */
        virtual void update(const dst::Clock& clock, const dst::Input& input) override;

        /**
         * TODO : Documentation.
         */
        virtual void post_update(const dst::Clock& clock, const dst::Input& input) override;

        /**
         * TODO : Documentation.
         */
        virtual void pre_render(const dst::Clock& clock) override;

        /**
         * TODO : Documentation.
         */
        virtual void render(const dst::Clock& clock) override;

        /**
         * TODO : Documentation.
         */
        virtual void post_render(const dst::Clock& clock) override;

        /**
         * TODO : Documentation.
         */
        virtual void shutdown() override;

        /**
         * TODO : Documentation.
         */
        void force_record_command_buffers();

    protected:
        /**
         * TODO : Documentation.
         */
        virtual void create_device();
        
        /**
         * TODO : Documentation.
         */
        virtual void create_barrier(Command::Buffer& commandBuffer);

        /**
         * TODO : Documentation.
         */
        virtual void record_command_buffer(Command::Buffer& commandBuffer, const dst::Clock& clock);

        /**
         * TODO : Documentation.
         */
        virtual void submit_command_buffer();

    private:
        void on_swapchain_resized(const SwapchainKHR& swapChain);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
