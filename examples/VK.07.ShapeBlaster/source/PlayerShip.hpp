
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

#include "Entity.hpp"

#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"

namespace ShapeBlaster {

    class PlayerShip final
        : public Entity
    {
    private:
        float mSpeed { 8 };
        dst::Vector2 mAimDirection;

    public:
        PlayerShip()
        {

        }

    public:
        void update(const dst::Input& input)
        {
            using namespace dst;
            auto upKey = Keyboard::Key::W;
            auto downKey = Keyboard::Key::S;
            auto leftKey = Keyboard::Key::A;
            auto rightKey = Keyboard::Key::D;

            Vector2 direction;
            if (input.keyboard().down(upKey)) {
                ++direction.y;
            }

            if (input.keyboard().down(downKey)) {
                --direction.y;
            }

            if (input.keyboard().down(leftKey)) {
                --direction.x;
            }

            if (input.keyboard().down(rightKey)) {
                ++direction.x;
            }

            if (direction.x || direction.y) {
                direction.normalize();
            }

            mVelocity = direction * mSpeed;
            mPosition += mVelocity;
            // TODO : Clamp position to play area...
        }
    };

} // namespace ShapeBlaster
