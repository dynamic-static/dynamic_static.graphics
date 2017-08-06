
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

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

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <memory>

namespace ShapeBlaster {

    class Entity
    {
    public:
        class Manager;

    protected:
        std::shared_ptr<dst::vlkn::Image> mImage;
        dst::Color mColor { dst::Color::White };
        dst::Vector2 mPosition;
        dst::Vector2 mVelocity;
        float mOrientation { 0 };
        float mRadius { 20 };
        bool mExpired { false };

    public:
        dst::Vector2 size() const
        {
            return
                mImage ?
                dst::Vector2 {
                    mImage->extent().width,
                    mImage->extent().height
                } :
                dst::Vector2::Zero;
        }

        virtual void update() = 0;

        virtual void render()
        {

        }
    };

} // ShapeBlaster
