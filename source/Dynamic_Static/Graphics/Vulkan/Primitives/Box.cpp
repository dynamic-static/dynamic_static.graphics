
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Primitives/Box.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    std::pair<
        std::vector<VertexPositionTexCoordColor>,
        std::vector<uint16_t>
    >
    create_box_primitive(
        const dst::Vector3& dimensions,
        const dst::Color& topColor,
        const dst::Color& bottomColor
    )
    {
        float w = dimensions.x * 0.5f;
        float h = dimensions.y * 0.5f;
        float d = dimensions.z * 0.5f;
        std::vector<VertexPositionTexCoordColor> vertices {
            // Top
            VertexPositionTexCoordColor { { -w,  h, -d }, { 0, 1 }, { topColor } },
            VertexPositionTexCoordColor { {  w,  h, -d }, { 1, 1 }, { topColor } },
            VertexPositionTexCoordColor { {  w,  h,  d }, { 1, 0 }, { topColor } },
            VertexPositionTexCoordColor { { -w,  h,  d }, { 0, 0 }, { topColor } },

            // Left
            VertexPositionTexCoordColor { { -w,  h, -d }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { { -w,  h,  d }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { { -w, -h,  d }, { 0, 0 }, { bottomColor } },
            VertexPositionTexCoordColor { { -w, -h, -d }, { 0, 0 }, { bottomColor } },

            // Front
            VertexPositionTexCoordColor { { -w,  h,  w }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { {  w,  h,  w }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { {  w, -h,  w }, { 0, 0 }, { bottomColor } },
            VertexPositionTexCoordColor { { -w, -h,  w }, { 0, 0 }, { bottomColor } },

            // Right
            VertexPositionTexCoordColor { {  w,  h,  d }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { {  w,  h, -d }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { {  w, -h, -d }, { 0, 0 }, { bottomColor } },
            VertexPositionTexCoordColor { {  w, -h,  d }, { 0, 0 }, { bottomColor } },

            // Back
            VertexPositionTexCoordColor { {  w,  h, -d }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { { -w,  h, -d }, { 0, 0 }, { topColor } },
            VertexPositionTexCoordColor { { -w, -h, -d }, { 0, 0 }, { bottomColor } },
            VertexPositionTexCoordColor { {  w, -h, -d }, { 0, 0 }, { bottomColor } },

            // Bottom
            VertexPositionTexCoordColor { { -w, -h,  d }, { 0, 0 }, { bottomColor } },
            VertexPositionTexCoordColor { {  w, -h,  d }, { 0, 0 }, { bottomColor } },
            VertexPositionTexCoordColor { {  w, -h, -d }, { 0, 0 }, { bottomColor } },
            VertexPositionTexCoordColor { { -w, -h, -d }, { 0, 0 }, { bottomColor } },
        };

        size_t index_i = 0;
        size_t vertex_i = 0;
        static constexpr size_t FaceCount = 6;
        static constexpr size_t IndicesPerFace = 6;
        std::vector<uint16_t> indices(IndicesPerFace * FaceCount);
        for (size_t face_i = 0; face_i < FaceCount; ++face_i) {
            indices[index_i++] = static_cast<uint16_t>(vertex_i + 0);
            indices[index_i++] = static_cast<uint16_t>(vertex_i + 1);
            indices[index_i++] = static_cast<uint16_t>(vertex_i + 2);
            indices[index_i++] = static_cast<uint16_t>(vertex_i + 2);
            indices[index_i++] = static_cast<uint16_t>(vertex_i + 3);
            indices[index_i++] = static_cast<uint16_t>(vertex_i + 0);
            vertex_i += 4;
        }

        return std::make_pair(std::move(vertices), std::move(indices));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
