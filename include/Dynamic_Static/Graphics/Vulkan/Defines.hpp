
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/ToString.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VulkanInclude.hpp"

#include <memory>
#include <stdexcept>

#ifndef VK_FLAGS_NONE
#define VK_FLAGS_NONE (0)
#endif

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

    inline std::string to_string(VkShaderStageFlagBits shaderStageFlagBits)
    {
        std::string str;
        switch (shaderStageFlagBits) {
            case VK_SHADER_STAGE_VERTEX_BIT:                  str = "Vertex"; break;
            case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:    str = "Tesselation Control"; break;
            case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT: str = "Tesselation Evaluation"; break;
            case VK_SHADER_STAGE_GEOMETRY_BIT:                str = "Geometry"; break;
            case VK_SHADER_STAGE_FRAGMENT_BIT:                str = "Fragment"; break;
            case VK_SHADER_STAGE_COMPUTE_BIT:                 str = "Compute"; break;
            case VK_SHADER_STAGE_ALL_GRAPHICS:                str = "All Graphics"; break;
            case VK_SHADER_STAGE_ALL:                         str = "All"; break;
            default: str = "Unknown"; break;
        }

        return str;
    }

} // namespace Dynamic_Static

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class Application;
    class Buffer;
    class Command;
    class DebugReport;
    class Descriptor;
    class Device;
    class Effect;
    class Framebuffer;
    class Image;
    class Instance;
    class Memory;
    class Mesh;
    class PhysicalDevice;
    class Pipeline;
    class Queue;
    class RenderPass;
    class RenderTarget;
    class Sampler;
    class Semaphore;
    class ShaderModule;
    class SurfaceKHR;
    class SwapchainKHR;

    class GaussianBlur;

    /**
     * TODO : Documentation.
     */
    class Command final
    {
    public:
        class Buffer;
        class Pool;
    };

    /**
     * TODO : Documentation.
     */
    class Descriptor final
    {
    public:
        class Pool;
        class Set;
    };

    /**
     * TODO : Documentation.
     */
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

    /**
     * TODO : Documentation.
     */
    inline VkResult validate(VkResult result)
    {
        // TODO : Wrap this up so that validation, exceptions,
        //        asserts, logs, etc. can be enabled/disabled.
        if (result != VK_SUCCESS) {
            throw Exception(result, "Vulkan Error : " + dst::to_string(result));
        }

        return result;
    }

    /**
     * TODO : Documentation.
     */
    inline bool has_stencil_component(VkFormat format)
    {
        return
            format == VK_FORMAT_D32_SFLOAT_S8_UINT ||
            format == VK_FORMAT_D24_UNORM_S8_UINT;
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator==(const VkOffset2D& lhs, const VkOffset2D& rhs)
    {
        return
            lhs.x == rhs.x &&
            lhs.y == rhs.y;
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator!=(const VkOffset2D& lhs, const VkOffset2D& rhs)
    {
        return !(lhs == rhs);
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator==(const VkExtent2D& lhs, const VkExtent2D& rhs)
    {
        return
            lhs.width == rhs.width &&
            lhs.height == rhs.height;
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator!=(const VkExtent2D& lhs, const VkExtent2D& rhs)
    {
        return !(lhs == rhs);
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator==(const VkExtent3D& lhs, const VkExtent3D& rhs)
    {
        return
            lhs.width == rhs.width &&
            lhs.height == rhs.height &&
            lhs.depth == rhs.depth;
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator!=(const VkExtent3D& lhs, const VkExtent3D& rhs)
    {
        return !(lhs == rhs);
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator==(const VkRect2D& lhs, const VkRect2D& rhs)
    {
        return
            lhs.offset == rhs.offset &&
            lhs.extent == rhs.extent;
    }

    /**
     * TODO : Documentation.
     */
    inline bool operator!=(const VkRect2D& lhs, const VkRect2D& rhs)
    {
        return !(lhs == rhs);
    }

} // namespace Vulkan
namespace vlkn = Vulkan;
} // namespace Graphics
namespace vlkn = gfx::vlkn;
} // namespace Dynamic_Static
