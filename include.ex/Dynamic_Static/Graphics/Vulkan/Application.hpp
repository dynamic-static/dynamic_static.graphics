
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

    /*!
    Provides high level control over a Vulkan application.
    */
    class Application
        : NonCopyable
    {
    public:
        /*!
        Configuration parameters for an Application.
        */
        struct Info final
            : public VkApplicationInfo
        {
            /*!
            Constructs an instance of Application::Info.
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
                static_assert(
                    sizeof(Application::Info) == sizeof(VkApplicationInfo),
                    "sizeof(Application::Info) != sizeof(VkApplicationInfo)"
                );
            }
        };

    protected:
        Info mInfo { };
        Clock mClock;
        bool mRunning { false };
        glm::vec4 mClearColor { Color::QuarterGray };
        std::shared_ptr<sys::Window> mWindow;
        std::shared_ptr<Instance> mInstance;
        std::shared_ptr<SurfaceKHR> mSurface;
        std::shared_ptr<Device> mDevice;
        std::shared_ptr<SwapchainKHR> mSwapchain;
        std::shared_ptr<RenderPass> mSwapchainRenderPass;
        std::vector<std::shared_ptr<CommandBuffer>> mSwapchainCommandBuffers;
        std::vector<std::shared_ptr<Fence>> mSwapchainFences;
        std::shared_ptr<Semaphore> mSwapchainImageAcquiredSemaphore;
        std::shared_ptr<Semaphore> mSwapchainRenderCompleteSemphore;
        std::vector<std::shared_ptr<Framebuffer>> mSwapchainFramebuffers;
        std::shared_ptr<Image> mSwapchainDepthImage;
        VkFormat mSwapchainDepthFormat { VK_FORMAT_UNDEFINED };

    protected:
        /*!
        Creates an instance of Application.
        */
        Application();

    public:
        /*!
        Destroys this instance of Application.
        */
        virtual ~Application() = 0;

    public:
        /*!
        Starts this Application.
        */
        void start();

        /*!
        Stops this Application.
        */
        void stop();

    protected:
        /*!
        Creates this Application's Window.
        */
        virtual void create_window(sys::Window::Info& windowInfo);

        /*!
        Creates this Application's Instance.
        @param [in] layers This Application's requested layers
        @param [in] extensions This Application's requested Instance extensions
        @param [in] debugReportFlags This Application's requested VkDebugReportFlagsEXT (optional = 0)
        */
        virtual void create_instance(
            std::vector<const char*>& layers,
            std::vector<const char*>& extensions,
            VkDebugReportFlagsEXT debugReportFlags = 0
        );

        /*!
        Creates this Application's Surface.
        */
        virtual void create_surface();

        /*!
        Creates this Application's Device.
        @param [in] extensions This Application's requested Device extensions
        */
        virtual void create_device(std::vector<const char*> extensions);

        /*!
        Creates this Application's Swapchain.
        */
        virtual void create_swapchain();

        /*!
        Creates this Application's Swapchain RenderPass.
        */
        virtual void create_swapchain_render_pass();

        /*!
        Create this Application's Swapchain CommandBuffers.
        */
        virtual void create_swapchain_command_buffers();

        /*!
        Creates this Application's Swapchain Semaphores.
        */
        virtual void create_swapchain_semaphores();

        /*!
        Creates this Application's Swapchain Fences.
        */
        virtual void create_swapchain_fences();

        /*!
        Creates this Application's resources.
        */
        virtual void create_resources();

        /*!
        Updates this Application.
        @param [in] clock This Application's Clock
        @param [in] input This Application's Input
        */
        virtual void update(
            const Clock& clock,
            const sys::Input& input
        );

        /*!
        Validates this Application's Swapchain Framebuffers.
        @param [in] clock This Application's Clock
        */
        virtual void validate_swapchain(const Clock& clock);

        /*!
        Updates this Application's graphics.
        @param [in] clock This Application's Clock
        */
        virtual void update_graphics(const Clock& clock);

        /*!
        Updates this Application's Swapchain CommandBuffers.
        @param [in] clock This Application's Clock
        */
        virtual void update_swapchain_command_buffers(const Clock& clock);

        /*!
        Records this Application's Swapchain CommandBuffer.
        @param [in] clock This Application's Clock
        @param [in] commandBuffer The CommandBuffer to issue commands to
        */
        virtual void record_swapchain_command_buffer(
            const Clock& clock,
            const CommandBuffer& commandBuffer
        );

        /*!
        Records this Application's Swapchain RenderPass.
        @param [in] clock This Application's Clock
        @param [in] commandBuffer The CommandBuffer to issue commands to
        */
        virtual void record_swapchain_render_pass(
            const Clock& clock,
            const CommandBuffer& commandBuffer
        );

        /*!
        Submits this Application's Swapchain CommandBuffer.
        @param [in] clock This Application's Clock
        @param [in] commandBuffer The CommandBuffer to submit
        */
        virtual void submit_swapchain_command_buffer(
            const Clock& clock,
            const CommandBuffer& commandBuffer,
            const Fence& fence
        );

        /*!
        Presents this Application's Swapchain.
        @param [in] clock This Application's Clock
        */
        virtual void present_swapchain(const Clock& clock);

        /*!
        Destroys this Application's resources.
        */
        virtual void destroy_resources();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
