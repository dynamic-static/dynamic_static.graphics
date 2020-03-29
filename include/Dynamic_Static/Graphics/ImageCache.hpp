
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
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
#endif
