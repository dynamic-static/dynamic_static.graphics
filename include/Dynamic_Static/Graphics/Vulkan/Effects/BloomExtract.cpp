
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Effects/BloomExtract.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    BloomExtract::BloomExtract(Device& device, uint32_t width, uint32_t height, VkFormat format)
        : Effect(
            device,
            width,
            height,
            format,
            VK_FORMAT_UNDEFINED,
            R"(

                #version 450

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec2 vsTexCoord;
                layout(location = 2) in vec4 vsColor;

                layout(location = 0) out vec2 fsTexCoord;
                layout(location = 1) out vec4 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = vec4(vsPosition, 1);
                    fsTexCoord = vsTexCoord;
                    fsColor = vsColor;
                }

            )",
            R"(

                #version 450

                layout(binding = 1) uniform sampler2D image;

                layout(location = 0) in vec2 fsTexCoord;
                layout(location = 1) in vec4 fsColor;

                layout(location = 0) out vec4 fragmentColor;

                void main()
                {
                    float threshold = 0.25;
                    fragmentColor = texture(image, fsTexCoord);
                    fragmentColor.rgb = (fragmentColor.rgb - vec3(threshold)) / (vec3(1) - vec3(threshold));
                }

            )"
        )
    {
        create_uniform_buffer<Settings>();
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
