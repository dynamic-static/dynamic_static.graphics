
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

#include "Dynamic_Static/Core/Mouse.hpp"

namespace Dynamic_Static
{
    bool Mouse::State::up(Mouse::Button button) const
    {
        return !down(button);
    }

    bool Mouse::State::down(Mouse::Button button) const
    {
        return operator[](static_cast<size_t>(button));
    }
} // namespace Dynamic_Static

namespace Dynamic_Static
{
    float Mouse::scroll() const
    {
        return mCurrent.scroll - mPrevious.scroll;
    }

    Point Mouse::delta() const
    {
        auto x = mCurrent.position.x - mPrevious.position.x;
        auto y = mCurrent.position.y - mPrevious.position.y;
        return { x, y };
    }

    Point Mouse::position() const
    {
        return mCurrent.position;
    }

    bool Mouse::up(Button button) const
    {
        return mCurrent.up(button);
    }

    bool Mouse::down(Button button) const
    {
        return mCurrent.down(button);
    }

    bool Mouse::held(Button button) const
    {
        return mCurrent.down(button) && mPrevious.down(button);
    }

    bool Mouse::pressed(Button button) const
    {
        return mCurrent.down(button) && mPrevious.up(button);
    }

    bool Mouse::released(Button button) const
    {
        return mCurrent.up(button) && mPrevious.down(button);
    }

    void Mouse::reset()
    {
        mCurrent.reset();
        mCurrent.scroll = 0;
        mCurrent.position = { };
        mPrevious = mCurrent;
    }

    void Mouse::update(const State& state)
    {
        mPrevious = mCurrent;
        mCurrent = state;
    }
} // namespace Dynamic_Static

namespace Dynamic_Static
{
    Mouse::Button glfw_to_dst_mouse_button(int glfwMouseButton)
    {
        auto button = Mouse::Button::Unknown;
            switch (glfwMouseButton) {
                case /* GLFW_MOUSE_BUTTON_LEFT   */ 0: button = Mouse::Button::Left; break;
                case /* GLFW_MOUSE_BUTTON_RIGHT  */ 1: button = Mouse::Button::Right; break;
                case /* GLFW_MOUSE_BUTTON_MIDDLE */ 2: button = Mouse::Button::Middle; break;
                // case /* GLFW_MOUSE_BUTTON_4      */ 3: button = Mouse::Button::Unknown; break;
                // case /* GLFW_MOUSE_BUTTON_5      */ 4: button = Mouse::Button::Unknown; break;
                // case /* GLFW_MOUSE_BUTTON_6      */ 5: button = Mouse::Button::Unknown; break;
                // case /* GLFW_MOUSE_BUTTON_7      */ 6: button = Mouse::Button::Unknown; break;
                // case /* GLFW_MOUSE_BUTTON_LAST   */ 7: button = Mouse::Button::Unknown; break;
                default: button = Mouse::Button::Unknown;
            }

        return button;
    }
} // namespace Dynamic_Static
