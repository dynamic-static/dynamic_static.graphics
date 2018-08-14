
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
            * Consructs an instance of Application::Info.
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
        Clock mClock;
        bool mRunning { false };
        VkDebugReportFlagsEXT mDebugReportFlags { };
        glm::vec4 mClearColor { Color::QuarterGray };
        std::shared_ptr<Instance> mInstance;
        std::shared_ptr<sys::Window> mWindow;
        std::shared_ptr<SurfaceKHR> mSurface;
        std::shared_ptr<Device> mDevice;
        std::shared_ptr<SwapchainKHR> mSwapchain;

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
        * Creates this Application's RenderPass.
        */
        virtual void create_render_pass();

        /*
        * Create this Application's main CommandPool.
        */
        virtual void create_command_pool();

        /*
        * Creates this Application's Swapchain Semaphores.
        */
        virtual void create_semaphores();

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
        * Draws this Application.
        * @param [in] clock This Application's Clock
        */
        virtual void draw(const Clock& clock);

        /*
        * Shutsdown this Application.
        */
        virtual void shutdown();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
