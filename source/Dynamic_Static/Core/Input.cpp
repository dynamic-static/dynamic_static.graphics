
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

#include "Dynamic_Static/Core/Input.hpp"

namespace Dynamic_Static
{
    Mouse& Input::mouse()
    {
        return mMouse;
    }

    const Mouse& Input::mouse() const
    {
        return mMouse;
    }

    Keyboard& Input::keyboard()
    {
        return mKeyboard;
    }

    const Keyboard& Input::keyboard() const
    {
        return mKeyboard;
    }

    void Input::reset()
    {
        mMouse.reset();
        mKeyboard.reset();
    }

    void Input::update(
        const Mouse::State& mouseState,
        const Keyboard::State& keyboardState
    )
    {
        mMouse.update(mouseState);
        mKeyboard.update(keyboardState);
    }
} // namespace Dynamic_Static
