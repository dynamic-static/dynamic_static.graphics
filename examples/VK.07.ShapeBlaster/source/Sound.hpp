
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Dynamic_Static/Core/Defines.hpp"

#if defined(DYNAMIC_STATIC_WINDOWS)
#include "TinySoundInclude.hpp"
#endif

namespace ShapeBlaster {

    class Sound final
    {
    private:
        #if defined(DYNAMIC_STATIC_WINDOWS)
        tsContext* mContext { nullptr };
        #endif

    public:
        Sound(void* hWnd)
        {
            #if defined(DYNAMIC_STATIC_WINDOWS)
            #endif
        }

        ~Sound()
        {
            #if defined(DYNAMIC_STATIC_WINDOWS)
            if (mContext) {
                tsShutdownContext(mContext);
            }
            #endif
        }

    };

} // namespace ShapeBlaster
