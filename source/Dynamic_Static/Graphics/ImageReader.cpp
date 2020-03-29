
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Core/FileSystem.hpp"
#include "StbImageInclude.hpp"

#include <stdexcept>
#include <string>

namespace Dynamic_Static {
namespace Graphics {

    ImageCache ImageReader::read_file(const std::string& filePath)
    {
        ImageCache imageCache;
        int width, height, channels;
        auto image = stbi_load(filePath.c_str(), &width, &height, &channels, STBI_rgb_alpha);
        if (image) {
            imageCache = ImageCache(
                static_cast<uint32_t>(width),
                static_cast<uint32_t>(height),
                4 // static_cast<uint32_t>(channels)
            );

            memcpy(imageCache.data().data(), image, imageCache.data().size());
            stbi_image_free(image);
        } else {
            std::string failureReason(stbi_failure_reason());
            throw std::runtime_error("TODO : what - " + failureReason);
        }

        return imageCache;
    }

} // namespace Graphics
} // namespace Dynamic_Static
#endif
