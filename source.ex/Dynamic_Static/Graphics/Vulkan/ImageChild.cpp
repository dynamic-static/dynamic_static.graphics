
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/ImageChild.hpp"

namespace dst {
namespace gfx {
namespace vk {

    ImageChild::ImageChild(Image* image)
        : mImage { image }
    {
    }

    ImageChild::ImageChild(ImageChild&& other)
    {
        *this = std::move(other);
    }

    ImageChild& ImageChild::operator=(ImageChild&& other)
    {
        if (this != &other) {
            mImage = std::move(other.mImage);
        }
        return *this;
    }

    ImageChild::~ImageChild()
    {

    }

    Image& ImageChild::get_image()
    {
        assert(mImage);
        return *mImage;
    }

    const Image& ImageChild::get_image() const
    {
        assert(mImage);
        return *mImage;
    }

} // namespace vk
} // namespace gfx
} // namespace dst
