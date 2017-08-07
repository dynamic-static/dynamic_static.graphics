
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Resolution.hpp"

namespace Dynamic_Static {

    float Resolution::aspect_ratio() const
    {
        auto w = static_cast<float>(width);
        auto h = static_cast<float>(height);
        return height ? w / h : 0;
    }

    std::string Resolution::to_string() const
    {
        return std::to_string(width) + " x " + std::to_string(height);
    }

} // namespace Dynamic_Static
