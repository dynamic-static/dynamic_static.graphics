
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

namespace dst {
namespace gfx {
namespace vk {

    /*
    * Common base for all Vulkan CommandPool child objects.
    */
    class ImageChild
    {
    private:
        Image * mImage { nullptr };

    protected:
        /*
        * Constructs an instance of ImageChild.
        * @param [in] image This ImageChild's Image
        */
        ImageChild(Image* image);

        /*
        * Moves an instance of ImageChild.
        * @param [in] other The ImageChild to move from
        */
        ImageChild(ImageChild&& other);

        /*
        * Moves an instance of ImageChild.
        * @param [in] other The ImageChild to move from
        * @return This ImageChild
        */
        ImageChild& operator=(ImageChild&& other);

    public:
        /*
        * Destroys this instance of ImageChild.
        */
        virtual ~ImageChild() = 0;

    public:
        /*
        * Gets this ImageChild's Image.
        * @return This ImageChild's Image
        */
        Image& get_image();

        /*
        * Gets this ImageChild's Image.
        * @return This ImageChild's Image
        */
        const Image& get_image() const;

    private:
        friend class Image;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
