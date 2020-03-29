
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {

    ImageCache::ImageCache(uint32_t width, uint32_t height, uint32_t channels)
        : mWidth { width }
        , mHeight { height }
        , mChannels { channels }
        , mData(width * height * channels)
    {
    }

    uint32_t ImageCache::width() const
    {
        return mWidth;
    }

    uint32_t ImageCache::height() const
    {
        return mHeight;
    }

    uint32_t ImageCache::channels() const
    {
        return mChannels;
    }

    gsl::span<uint8_t> ImageCache::data()
    {
        return mData;
    }

    gsl::span<const uint8_t> ImageCache::data() const
    {
        return mData;
    }

} // namespace Graphics
} // namespace Dynamic_Static
#endif
