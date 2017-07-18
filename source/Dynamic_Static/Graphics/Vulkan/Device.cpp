
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

#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Core/VectorUtilities.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Device::Device(
        PhysicalDevice& physicalDevice,
        const dst::Collection<std::string>& layers,
        const dst::Collection<std::string>& extensions,
        const dst::Collection<Queue::Info>& queueInfos,
        const VkPhysicalDeviceFeatures& features
    )
        : mPhysicalDevice { &physicalDevice }
        , mInstance { physicalDevice.instance().make_shared() }
        , mLayers(layers.begin(), layers.end())
        , mExtensions(extensions.begin(), extensions.end())
    {
        // NOTE : This code is duplicated in Instance.cpp.
        auto validate_requests =
        [](std::vector<std::string>& requests)
        {
            dst::remove_duplicates(requests);
            return dst::convert<std::string, const char*>(
                requests,
                [](const std::string& str)
                {
                    return str.c_str();
                }
            );
        };

        auto requestedLayers = validate_requests(mLayers);
        auto requestedExtensions = validate_requests(mExtensions);

        Info info { };
        info.queueCreateInfoCount = static_cast<uint32_t>(queueInfos.size());
        // TODO : Kind of annoying to use begin() here instead of data()...there must be a better way!
        info.pQueueCreateInfos = queueInfos.begin();
        info.enabledLayerCount = static_cast<uint32_t>(requestedLayers.size());
        info.ppEnabledLayerNames = requestedLayers.data();
        info.enabledExtensionCount = static_cast<uint32_t>(requestedExtensions.size());
        info.ppEnabledExtensionNames = requestedExtensions.data();
        Validate(vkCreateDevice(*mPhysicalDevice, &info, nullptr, &mHandle));



        name("Dynamic_Static::Vulkan::Device");
    }

    const PhysicalDevice& Device::physical_device() const
    {
        assert(mPhysicalDevice);
        return *mPhysicalDevice;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static