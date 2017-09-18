
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"

#include <string>

namespace Dynamic_Static {
namespace Graphics {

    /**
     * TODO : Documentation.
     */
    class ImageReader final
    {
    public:
        static ImageCache read_file(const std::string& filePath);
    };

} // namespace Graphics
} // namespace Dynamic_Static
