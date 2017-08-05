
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

#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Core/FileSystem.hpp"

#ifndef STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#endif
#include "stb/stb_image.h"

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
