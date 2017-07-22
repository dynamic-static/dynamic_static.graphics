
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

#include "Dynamic_Static/Graphics/Vulkan/Image.View.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Image::View::View(Image& image)
        : mImage { &image }
    {
        Info info { };
        info.image = image;
        info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        info.format = mImage->format();
        info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        Validate(vkCreateImageView(image.device(), &info, nullptr, &mHandle));
        name(image.name() +  "::View");
    }

    Image::View::~View()
    {
        if (mHandle) {
            vkDestroyImageView(image().device(), mHandle, nullptr);
        }
    }

    Image& Image::View::image()
    {
        assert(mImage);
        return *mImage;
    }

    const Image& Image::View::image() const
    {
        assert(mImage);
        return *mImage;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
