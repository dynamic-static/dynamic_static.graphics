
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
