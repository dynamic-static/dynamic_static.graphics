
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    GaussianBlur::GaussianBlur(Device& device, uint32_t width, uint32_t height, VkFormat format)
        : Effect(
            device,
            width,
            height,
            format,
            VK_FORMAT_UNDEFINED,
            R"(

                #version

                void main()
                {
                }

            )",
            R"(

                #version

                void main()
                {
                }

            )"
        )
    {
        create_uniform_buffer<Settings>();
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
