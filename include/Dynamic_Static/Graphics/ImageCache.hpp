
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

#pragma once

#include "Dynamic_Static/Graphics/Defines.hpp"

#include "gsl/span"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {

    /**
     * TODO : Documentation.
     */
    class ImageCache final
    {
    private:
        uint32_t mWidth { 0 };
        uint32_t mHeight { 0 };
        uint32_t mChannels { 0 };
        std::vector<uint8_t> mData;

    public:
        /**
         * Constructs an instance of ImageCache.
         */
        ImageCache() = default;

        /**
         * Constructs an instance of ImageCache.
         * @param [in] width This ImageCache's width
         * @param [in] height This ImageCache's height
         * @param [in] channels This ImageCache's number of channels
         */
        ImageCache(uint32_t width, uint32_t height, uint32_t channels);

    public:
        /**
         * Gets this ImageCache's width.
         * @return This ImageCache's width
         */
        uint32_t width() const;

        /**
         * Gets this ImageCache's height.
         * @return This ImageCache's height
         */
        uint32_t height() const;

        /**
         * Gets this ImageCache's number of channels
         * @return This ImageCache's number of channels
         */
        uint32_t channels() const;

        /**
         * Gets this ImageCache's data.
         * @return This ImageCache's data
         */
        gsl::span<uint8_t> data();

        /**
         * Gets this ImageCache's data.
         * @return This ImageCache's data
         */
        gsl::span<const uint8_t> data() const;
    };

} // namespace Graphics
} // namespace Dynamic_Static
