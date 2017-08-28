
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Image.View.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Image::View::View(Image& image)
        : mImage { &image }
    {
        // TODO : This is extremely inflexible...
        auto info = CreateInfo;
        info.image = image;
        info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        info.format = mImage->format();

        if (image.usage() == VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) {
            info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
        } else {
            info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        }

        validate(vkCreateImageView(image.device(), &info, nullptr, &mHandle));
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
