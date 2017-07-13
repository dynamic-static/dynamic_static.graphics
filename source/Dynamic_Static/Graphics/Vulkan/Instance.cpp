
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

#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"

namespace Dynamic_Static
{
    namespace Graphics
    {
        namespace Vulkan
        {
            Instance::Instance()
            {
                VkApplicationInfo applicationInfo { };
                applicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
                applicationInfo.pApplicationName = "Dynamic_Static";
                applicationInfo.applicationVersion = VK_MAKE_VERSION(0, 0, 1);
                applicationInfo.pEngineName = "Dynamic_Static";
                applicationInfo.engineVersion = VK_MAKE_VERSION(0, 0, 1);
                applicationInfo.apiVersion = VK_API_VERSION_1_0;

                VkInstanceCreateInfo instanceInfo { };
                instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
                instanceInfo.pApplicationInfo = &applicationInfo;
                instanceInfo.enabledLayerCount = 0;
                instanceInfo.ppEnabledLayerNames = nullptr;
                instanceInfo.enabledExtensionCount = 0;
                instanceInfo.ppEnabledExtensionNames = nullptr;
                auto result = vkCreateInstance(&instanceInfo, nullptr, &mHandle);

                name("Dynamic_Static::Graphics::Vulkan::Instance");
            }

            Instance::~Instance()
            {
                if (mHandle) {
                    vkDestroyInstance(mHandle, nullptr);
                }
            }

            std::shared_ptr<Instance> Instance::create()
            {
                return std::shared_ptr<Instance>(new Instance());
            }
        } // namespace Vulkan
    } // namespace Graphics
} // namespace Dynamic_Static
