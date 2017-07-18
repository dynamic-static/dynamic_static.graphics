
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

#include "Dynamic_Static/Core/Collection.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Instance.
     */
    class Instance final
        : public Object<VkInstance>
        , public std::enable_shared_from_this<Instance>
    {
    private:
        std::vector<std::string> mLayers;
        std::vector<std::string> mExtensions;
        std::unique_ptr<DebugReport> mDebugReport;
        std::vector<std::unique_ptr<PhysicalDevice>> mPhysicalDevices;

    private:
        Instance(
            const dst::Collection<std::string>& layers,
            const dst::Collection<std::string>& extensions,
            VkDebugReportFlagsEXT debugFlags = 0
        );

    public:
        /**
         * Destroys this Vulkan Instance.
         */
        ~Instance();

    public:
        /**
         * Gets a std::shared_ptr<> to this Instance.
         * @return A std::shared_ptr<> to this Instance
         */
        std::shared_ptr<Instance> make_shared();

        /**
         * Gets this Vulkan Instance's PhysicalDevices.
         * @return This Vulkan::Instance's PhysicalDevices
         */
        const dst::Collection<std::unique_ptr<PhysicalDevice>> physical_devices() const;

        /**
         * Gets a value indicating whether or not this Instance has validation enabled.
         * @return Whether or not this Instance has validation enabled
         */
        bool validation_enabled() const;

        /**
         * Gets a function pointer from this Vulkan Instance.
         * @param [in] name             The name of the function
         * @param [out] functionPointer The pointer to the function
         */
        template <typename FunctionType>
        void get_function_pointer(const std::string& name, FunctionType& functionPointer) const
        {
            functionPointer = reinterpret_cast<FunctionType>(vkGetInstanceProcAddr(mHandle, name.c_str()));
            // TODO : Make this check configurable; ie. throw, assert, log, nothing, etc.
            if (!functionPointer) {
                throw std::runtime_error("Failed to acquire function pointer for \"" + name + "\"");
            }
        }

        /**
         * Creates a Vulkan Instance.
         * @return The newly created Vulkan Instance.
         */
        static std::shared_ptr<Instance> create(
            const dst::Collection<std::string>& layers,
            const dst::Collection<std::string>& extensions,
            VkDebugReportFlagsEXT debugFlags = 0
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
