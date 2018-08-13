
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

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Common base for all Vulkan SurfaceKHR child objects.
    */
    class SurfaceKHRChild
    {
    private:
        std::shared_ptr<SurfaceKHR> mSurface;

    protected:
        /*
        * Constructs an instance of SurfaceKHRChild.
        * @param [in] device This SurfaceKHRChild's SurfaceKHR
        */
        SurfaceKHRChild(const std::shared_ptr<SurfaceKHR>& surface);

    public:
        /*
        * Destroys this instance of SurfaceKHRChild.
        */
        virtual ~SurfaceKHRChild() = 0;

    public:
        /*
        * Gets this SurfaceKHRChild's SurfaceKHR.
        * @return This SurfaceKHRChild's SurfaceKHR
        */
        SurfaceKHR& get_surface();

        /*
        * Gets this SurfaceKHRChild's SurfaceKHR.
        * @return This SurfaceKHRChild's SurfaceKHR
        */
        const SurfaceKHR& get_surface() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
