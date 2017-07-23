
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

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

#include "Dynamic_Static/Core/ToString.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VulkanInclude.hpp"

#include <stdexcept>

namespace Dynamic_Static {

    inline std::string to_string(VkResult result)
    {
        std::string str;
        switch (result) {
            case VK_SUCCESS:                        str = "Success"; break;
            case VK_NOT_READY:                      str = "Not ready"; break;
            case VK_TIMEOUT:                        str = "Timeout"; break;
            case VK_EVENT_SET:                      str = "Event set"; break;
            case VK_EVENT_RESET:                    str = "Event reset"; break;
            case VK_INCOMPLETE:                     str = "Incomplete"; break;
            case VK_ERROR_OUT_OF_HOST_MEMORY:       str = "Out of host memory"; break;
            case VK_ERROR_OUT_OF_DEVICE_MEMORY:     str = "Out of device memory"; break;
            case VK_ERROR_INITIALIZATION_FAILED:    str = "Initialization failed"; break;
            case VK_ERROR_DEVICE_LOST:              str = "Device lost"; break;
            case VK_ERROR_MEMORY_MAP_FAILED:        str = "Memory map failed"; break;
            case VK_ERROR_LAYER_NOT_PRESENT:        str = "Layer not present"; break;
            case VK_ERROR_EXTENSION_NOT_PRESENT:    str = "Extension not present"; break;
            case VK_ERROR_FEATURE_NOT_PRESENT:      str = "Feature not present"; break;
            case VK_ERROR_INCOMPATIBLE_DRIVER:      str = "Incompatible driver"; break;
            case VK_ERROR_TOO_MANY_OBJECTS:         str = "Too many objects"; break;
            case VK_ERROR_FORMAT_NOT_SUPPORTED:     str = "Format not supported"; break;
            case VK_ERROR_SURFACE_LOST_KHR:         str = "Surface lost"; break;
            case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: str = "Native window in use"; break;
            case VK_SUBOPTIMAL_KHR:                 str = "Suboptimal"; break;
            case VK_ERROR_OUT_OF_DATE_KHR:          str = "Out of date"; break;
            case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR: str = "Incompatible display"; break;
            case VK_ERROR_VALIDATION_FAILED_EXT:    str = "Validation failed"; break;
            case VK_ERROR_INVALID_SHADER_NV:        str = "Invalid shader"; break;
            default: dst::to_string(static_cast<int>(result)) + " Unknown";
        }

        return str;
    }

} // namespace Dynamic_Static

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class Command;
    class DebugReport;
    class Device;
    class Framebuffer;
    class Image;
    class Instance;
    class PhysicalDevice;
    class Pipeline;
    class Queue;
    class RenderPass;
    class Semaphore;
    class ShaderModule;
    class SurfaceKHR;
    class SwapchainKHR;

    class Exception final
        : public std::runtime_error
    {
    private:
        VkResult mResult { VK_SUCCESS };

    public:
        /**
         * Constructs an instance of Exception with a specified VkResult and message.
         * @param [in] result  This Exception's VkResult
         * @param [in] message This Exception's message
         */
        inline explicit Exception(VkResult result, const std::string& message)
            : std::runtime_error(message)
            , mResult { result }
        {
        }

    public:
        /**
         * Gets this VkException's VkResult.
         * @return This VkException's VkResult
         */
        inline VkResult result() const
        {
            return mResult;
        }
    };

    inline VkResult validate(VkResult result)
    {
        // TODO : Wrap this up so that validation, exceptions,
        //        asserts, logs, etc. can be enabled/disabled.
        if (result != VK_SUCCESS) {
            throw Exception(result, "Vulkan Error : " + dst::to_string(result));
        }

        return result;
    }

} // namespace Vulkan
namespace vlkn = Vulkan;
} // namespace Graphics
namespace vlkn = gfx::vlkn;
} // namespace Dynamic_Static
