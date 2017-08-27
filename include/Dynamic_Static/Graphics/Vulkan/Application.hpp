
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Application.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <memory>

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
        std::shared_ptr<Instance> mInstance;
        PhysicalDevice* mPhysicalDevice { nullptr };
        std::shared_ptr<SurfaceKHR> mSurface;
        std::shared_ptr<Device> mDevice;
        Queue* mGraphicsQueue { nullptr };
        Queue* mPresentQueue { nullptr };
        std::shared_ptr<SwapchainKHR> mSwapchain;

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
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
