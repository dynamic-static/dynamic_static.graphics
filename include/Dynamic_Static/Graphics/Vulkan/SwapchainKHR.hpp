
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#pragma once

#include "Dynamic_Static/Core/Callback.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
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
    {
        friend class Device;

    private:
        std::shared_ptr<Device> mDevice { nullptr };
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
        Device& device();

        /**
         * TODO : Documentation.
         */
        const Device& device() const;

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
