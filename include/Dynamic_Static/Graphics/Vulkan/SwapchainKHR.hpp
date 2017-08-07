
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Callback.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan SwapchainKHR.
     */
    class SwapchainKHR final
        : public Object<VkSwapchainKHR>
        , public detail::DeviceChild
    {
        friend class Device;

    private:
        bool mUpdate { false };
        std::shared_ptr<SurfaceKHR> mSurface { nullptr };
        std::vector<std::unique_ptr<Image>> mImages;

    public:
        /**
         * Callback executed when this SwapchainKHR is resized.
         * @param [in] The SwapchainKHR being resized
         */
        Callback<SwapchainKHR, const SwapchainKHR&> on_resized;

    private:
        SwapchainKHR(
            const std::shared_ptr<Device>& device,
            const std::shared_ptr<SurfaceKHR>& surface
        );

    public:
        /**
         * Destroys this instance of SwapchainKHR.
         */
        ~SwapchainKHR();

    public:
        /**
         * TODO : Documentation.
         */
        SurfaceKHR& surface();

        /**
         * TODO : Documentation.
         */
        const SurfaceKHR& surface() const;

        /**
         * Gets a value indicating whether or not this SwapchainKHR is in a valid state.
         * @return Whether or not this SwapchainKHR is in a valid state
         */
        bool valid() const;

        /**
         * TODO : Documentation.
         */
        VkFormat format() const;

        /**
         * TODO : Documentation.
         */
        VkExtent2D extent() const;

        /**
         * Gets this SwapchainKHR's Images.
         * @return This SwapchainKHR's Images
         */
        const std::vector<std::unique_ptr<Image>>& images() const;

        /**
         * Updates this SwapchainKHR.
         */
        void update();

        /**
         * TODO : Documentation.
         */
        size_t next_image(const Semaphore& semaphore);

    private:
        void create_swap_chain();
        void destroy_swap_chain();
        void on_surface_resized(const SurfaceKHR& surface);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
