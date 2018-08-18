
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/CommandBuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandPool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Semaphore.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"

#include <string>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan application.
    */
    class Application
    {
    public:
        /*
        * Configuration parameters for an Application.
        */
        struct Info final
            : public VkApplicationInfo
        {
            /*
            * Constructs an instance of Application::Info.
            */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
                pNext = nullptr;
                pApplicationName = "Dynamic_Static Application";
                applicationVersion = VK_MAKE_VERSION(1, 0, 0);
                pEngineName = "Dynamic_Static";
                engineVersion = VK_MAKE_VERSION(1, 0, 0);
                apiVersion = VK_MAKE_VERSION(1, 1, 0);
            }
        };

    protected:
        Info mInfo { };
        VkDebugReportFlagsEXT mDebugReportFlags { };
        glm::vec4 mClearColor { Color::QuarterGray };
        std::shared_ptr<Instance> mInstance;
        std::shared_ptr<sys::Window> mWindow;
        std::shared_ptr<SurfaceKHR> mSurface;
        std::shared_ptr<Device> mDevice;
        std::shared_ptr<SwapchainKHR> mSwapchain;
        std::shared_ptr<RenderPass> mSwapchainRenderPass;
        std::vector<std::shared_ptr<CommandBuffer>> mSwapchainCommandBuffers;
        std::shared_ptr<Semaphore> mDrawCompleteSemphore;
        std::shared_ptr<Semaphore> mPresentCompleteSemaphore;
        std::vector<std::shared_ptr<Framebuffer>> mSwapchainFramebuffers;
        std::shared_ptr<Image> mSwapchainDepthImage;

    private:
        Clock mClock;
        bool mRunning { false };

    protected:
        /*
        * Creates an instance of Application.
        */
        Application();

    public:
        /*
        * Destroys this instance of Application.
        */
        virtual ~Application() = 0;

    public:
        /*
        * Starts this Application.
        */
        void start();

        /*
        * Stops this Application.
        */
        void stop();

    protected:
        /*
        * Creates this Application's Instance.
        * @param [in] layers This Application's requested layers
        * @param [in] extensions This Application's requested Instance extensions
        */
        virtual void create_instance(
            std::vector<const char*> layers,
            std::vector<const char*> extensions
        );

        /*
        * Creates this Application's Window.
        */
        virtual void create_window();

        /*
        * Creates this Application's Surface.
        */
        virtual void create_surface();

        /*
        * Creates this Application's Device.
        * @param [in] extensions This Application's requested Device extensions
        */
        virtual void create_device(std::vector<const char*> extensions);

        /*
        * Creates this Application's Swapchain.
        */
        virtual void create_swapchain();

        /*
        * Creates this Application's Swapchain RenderPass.
        */
        virtual void create_swapchain_render_pass();

        /*
        * Create this Application's Swapchain CommandBuffers.
        */
        virtual void create_swapchain_command_buffers();

        /*
        * Creates this Application's Swapchain Semaphores.
        */
        virtual void create_swapchain_semaphores();

        /*
        * Creates this Application's resources.
        */
        virtual void create_resources();

        /*
        * Updates this Application.
        * @param [in] clock This Application's Clock
        * @param [in] input This Application's Input
        */
        virtual void update(
            const Clock& clock,
            const sys::Input& input
        );

        /*
        * Validates this Application's Swapchain Framebuffers.
        */
        virtual void validate_swapchain();

        /*
        * Updates this Application's graphics.
        * @param [in] clock This Application's Clock
        */
        virtual void update_graphics(const Clock& clock);

        /*
        * Submits this Application's Swapchain CommandBuffers.
        */
        virtual void submit_swapchain_command_buffers();

        /*
        * Destroys this Application's resources.
        */
        virtual void destroy_resources();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
