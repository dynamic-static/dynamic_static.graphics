
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

#include "Dynamic_Static/Core/Keyboard.hpp"

namespace Dynamic_Static
{
    bool Keyboard::State::up(Keyboard::Key key) const
    {
        return !down(key);
    }

    bool Keyboard::State::down(Keyboard::Key key) const
    {
        return operator[](static_cast<size_t>(key));
    }
} // namespace Dynamic_Static

namespace Dynamic_Static
{
    bool Keyboard::up(Key key) const
    {
        return mCurrent.up(key);
    }

    bool Keyboard::down(Key key) const
    {
        return mCurrent.down(key);
    }

    bool Keyboard::held(Key key) const
    {
        return mCurrent.down(key) && mPrevious.down(key);
    }

    bool Keyboard::pressed(Key key) const
    {
        return mCurrent.down(key) && mPrevious.up(key);
    }

    bool Keyboard::released(Key key) const
    {
        return mCurrent.up(key) && mPrevious.down(key);
    }

    void Keyboard::reset()
    {
        mCurrent.reset();
        mPrevious.reset();
    }

    void Keyboard::update(const State& state)
    {
        mPrevious = mCurrent;
        mCurrent = state;
    }
} // namespace Dynamic_Static

namespace Dynamic_Static
{
    Keyboard::Key glfw_to_dst_key(int glfwKey)
    {
        auto key = Keyboard::Key::Unknown;
        switch (glfwKey) {
            case /* GLFW_KEY_SPACE         */ 32:  key = Keyboard::Key::SpaceBar;         break;
            case /* GLFW_KEY_APOSTROPHE    */ 39:  key = Keyboard::Key::OEM_Quote;        break;
            case /* GLFW_KEY_COMMA         */ 44:  key = Keyboard::Key::OEM_Comma;        break;
            case /* GLFW_KEY_MINUS         */ 45:  key = Keyboard::Key::OEM_Minus;        break;
            case /* GLFW_KEY_PERIOD        */ 46:  key = Keyboard::Key::OEM_Period;       break;
            case /* GLFW_KEY_SLASH         */ 47:  key = Keyboard::Key::OEM_ForwardSlash; break;
            case /* GLFW_KEY_0             */ 48:  key = Keyboard::Key::Zero;             break;
            case /* GLFW_KEY_1             */ 49:  key = Keyboard::Key::One;              break;
            case /* GLFW_KEY_2             */ 50:  key = Keyboard::Key::Two;              break;
            case /* GLFW_KEY_3             */ 51:  key = Keyboard::Key::Three;            break;
            case /* GLFW_KEY_4             */ 52:  key = Keyboard::Key::Four;             break;
            case /* GLFW_KEY_5             */ 53:  key = Keyboard::Key::Five;             break;
            case /* GLFW_KEY_6             */ 54:  key = Keyboard::Key::Six;              break;
            case /* GLFW_KEY_7             */ 55:  key = Keyboard::Key::Seven;            break;
            case /* GLFW_KEY_8             */ 56:  key = Keyboard::Key::Eight;            break;
            case /* GLFW_KEY_9             */ 57:  key = Keyboard::Key::Nine;             break;
            case /* GLFW_KEY_SEMICOLON     */ 59:  key = Keyboard::Key::OEM_SemiColon;    break;
            case /* GLFW_KEY_EQUAL         */ 61:  key = Keyboard::Key::OEM_Plus;         break;
            case /* GLFW_KEY_A             */ 65:  key = Keyboard::Key::A;                break;
            case /* GLFW_KEY_B             */ 66:  key = Keyboard::Key::B;                break;
            case /* GLFW_KEY_C             */ 67:  key = Keyboard::Key::C;                break;
            case /* GLFW_KEY_D             */ 68:  key = Keyboard::Key::D;                break;
            case /* GLFW_KEY_E             */ 69:  key = Keyboard::Key::E;                break;
            case /* GLFW_KEY_F             */ 70:  key = Keyboard::Key::F;                break;
            case /* GLFW_KEY_G             */ 71:  key = Keyboard::Key::G;                break;
            case /* GLFW_KEY_H             */ 72:  key = Keyboard::Key::H;                break;
            case /* GLFW_KEY_I             */ 73:  key = Keyboard::Key::I;                break;
            case /* GLFW_KEY_J             */ 74:  key = Keyboard::Key::J;                break;
            case /* GLFW_KEY_K             */ 75:  key = Keyboard::Key::K;                break;
            case /* GLFW_KEY_L             */ 76:  key = Keyboard::Key::L;                break;
            case /* GLFW_KEY_M             */ 77:  key = Keyboard::Key::M;                break;
            case /* GLFW_KEY_N             */ 78:  key = Keyboard::Key::N;                break;
            case /* GLFW_KEY_O             */ 79:  key = Keyboard::Key::O;                break;
            case /* GLFW_KEY_P             */ 80:  key = Keyboard::Key::P;                break;
            case /* GLFW_KEY_Q             */ 81:  key = Keyboard::Key::Q;                break;
            case /* GLFW_KEY_R             */ 82:  key = Keyboard::Key::R;                break;
            case /* GLFW_KEY_S             */ 83:  key = Keyboard::Key::S;                break;
            case /* GLFW_KEY_T             */ 84:  key = Keyboard::Key::T;                break;
            case /* GLFW_KEY_U             */ 85:  key = Keyboard::Key::U;                break;
            case /* GLFW_KEY_V             */ 86:  key = Keyboard::Key::V;                break;
            case /* GLFW_KEY_W             */ 87:  key = Keyboard::Key::W;                break;
            case /* GLFW_KEY_X             */ 88:  key = Keyboard::Key::X;                break;
            case /* GLFW_KEY_Y             */ 89:  key = Keyboard::Key::Y;                break;
            case /* GLFW_KEY_Z             */ 90:  key = Keyboard::Key::Z;                break;
            case /* GLFW_KEY_LEFT_BRACKET  */ 91:  key = Keyboard::Key::OEM_OpenBracket;  break;
            case /* GLFW_KEY_BACKSLASH     */ 92:  key = Keyboard::Key::OEM_BackSlash;    break;
            case /* GLFW_KEY_RIGHT_BRACKET */ 93:  key = Keyboard::Key::OEM_CloseBracket; break;
            case /* GLFW_KEY_GRAVE_ACCENT  */ 96:  key = Keyboard::Key::OEM_Tilde;        break;
            // case /* GLFW_KEY_WORLD_1       */ 161: key = Keyboard::Key::Unknown;          break;
            // case /* GLFW_KEY_WORLD_2       */ 162: key = Keyboard::Key::Unknown;          break;
            case /* GLFW_KEY_ESCAPE        */ 256: key = Keyboard::Key::Escape;           break;
            case /* GLFW_KEY_ENTER         */ 257: key = Keyboard::Key::Enter;            break;
            case /* GLFW_KEY_TAB           */ 258: key = Keyboard::Key::Tab;              break;
            case /* GLFW_KEY_BACKSPACE     */ 259: key = Keyboard::Key::Backspace;        break;
            case /* GLFW_KEY_INSERT        */ 260: key = Keyboard::Key::Insert;           break;
            case /* GLFW_KEY_DELETE        */ 261: key = Keyboard::Key::Delete;           break;
            case /* GLFW_KEY_RIGHT         */ 262: key = Keyboard::Key::RightArrow;       break;
            case /* GLFW_KEY_LEFT          */ 263: key = Keyboard::Key::LeftArrow;        break;
            case /* GLFW_KEY_DOWN          */ 264: key = Keyboard::Key::DownArrow;        break;
            case /* GLFW_KEY_UP            */ 265: key = Keyboard::Key::UpArrow;          break;
            case /* GLFW_KEY_PAGE_UP       */ 266: key = Keyboard::Key::PageUp;           break;
            case /* GLFW_KEY_PAGE_DOWN     */ 267: key = Keyboard::Key::PageDown;         break;
            case /* GLFW_KEY_HOME          */ 268: key = Keyboard::Key::Home;             break;
            case /* GLFW_KEY_END           */ 269: key = Keyboard::Key::End;              break;
            case /* GLFW_KEY_CAPS_LOCK     */ 280: key = Keyboard::Key::CapsLock;         break;
            case /* GLFW_KEY_SCROLL_LOCK   */ 281: key = Keyboard::Key::ScrollLock;       break;
            case /* GLFW_KEY_NUM_LOCK      */ 282: key = Keyboard::Key::NumLock;          break;
            case /* GLFW_KEY_PRINT_SCREEN  */ 283: key = Keyboard::Key::PrintScreen;      break;
            case /* GLFW_KEY_PAUSE         */ 284: key = Keyboard::Key::Pause;            break;
            case /* GLFW_KEY_F1            */ 290: key = Keyboard::Key::F1;               break;
            case /* GLFW_KEY_F2            */ 291: key = Keyboard::Key::F2;               break;
            case /* GLFW_KEY_F3            */ 292: key = Keyboard::Key::F3;               break;
            case /* GLFW_KEY_F4            */ 293: key = Keyboard::Key::F4;               break;
            case /* GLFW_KEY_F5            */ 294: key = Keyboard::Key::F5;               break;
            case /* GLFW_KEY_F6            */ 295: key = Keyboard::Key::F6;               break;
            case /* GLFW_KEY_F7            */ 296: key = Keyboard::Key::F7;               break;
            case /* GLFW_KEY_F8            */ 297: key = Keyboard::Key::F8;               break;
            case /* GLFW_KEY_F9            */ 298: key = Keyboard::Key::F9;               break;
            case /* GLFW_KEY_F10           */ 299: key = Keyboard::Key::F10;              break;
            case /* GLFW_KEY_F11           */ 300: key = Keyboard::Key::F11;              break;
            case /* GLFW_KEY_F12           */ 301: key = Keyboard::Key::F12;              break;
            case /* GLFW_KEY_F13           */ 302: key = Keyboard::Key::F13;              break;
            case /* GLFW_KEY_F14           */ 303: key = Keyboard::Key::F14;              break;
            case /* GLFW_KEY_F15           */ 304: key = Keyboard::Key::F15;              break;
            case /* GLFW_KEY_F16           */ 305: key = Keyboard::Key::F16;              break;
            case /* GLFW_KEY_F17           */ 306: key = Keyboard::Key::F17;              break;
            case /* GLFW_KEY_F18           */ 307: key = Keyboard::Key::F18;              break;
            case /* GLFW_KEY_F19           */ 308: key = Keyboard::Key::F19;              break;
            case /* GLFW_KEY_F20           */ 309: key = Keyboard::Key::F20;              break;
            case /* GLFW_KEY_F21           */ 310: key = Keyboard::Key::F21;              break;
            case /* GLFW_KEY_F22           */ 311: key = Keyboard::Key::F22;              break;
            case /* GLFW_KEY_F23           */ 312: key = Keyboard::Key::F23;              break;
            case /* GLFW_KEY_F24           */ 313: key = Keyboard::Key::F24;              break;
            // case /* GLFW_KEY_F25           */ 314: key = Keyboard::Key::Unknown;          break;
            case /* GLFW_KEY_KP_0          */ 320: key = Keyboard::Key::NumPad0;          break;
            case /* GLFW_KEY_KP_1          */ 321: key = Keyboard::Key::NumPad1;          break;
            case /* GLFW_KEY_KP_2          */ 322: key = Keyboard::Key::NumPad2;          break;
            case /* GLFW_KEY_KP_3          */ 323: key = Keyboard::Key::NumPad3;          break;
            case /* GLFW_KEY_KP_4          */ 324: key = Keyboard::Key::NumPad4;          break;
            case /* GLFW_KEY_KP_5          */ 325: key = Keyboard::Key::NumPad5;          break;
            case /* GLFW_KEY_KP_6          */ 326: key = Keyboard::Key::NumPad6;          break;
            case /* GLFW_KEY_KP_7          */ 327: key = Keyboard::Key::NumPad7;          break;
            case /* GLFW_KEY_KP_8          */ 328: key = Keyboard::Key::NumPad8;          break;
            case /* GLFW_KEY_KP_9          */ 329: key = Keyboard::Key::NumPad9;          break;
            case /* GLFW_KEY_KP_DECIMAL    */ 330: key = Keyboard::Key::Decimal;          break;
            case /* GLFW_KEY_KP_DIVIDE     */ 331: key = Keyboard::Key::Divide;           break;
            case /* GLFW_KEY_KP_MULTIPLY   */ 332: key = Keyboard::Key::Multiply;         break;
            case /* GLFW_KEY_KP_SUBTRACT   */ 333: key = Keyboard::Key::Subtract;         break;
            case /* GLFW_KEY_KP_ADD        */ 334: key = Keyboard::Key::Add;              break;
            case /* GLFW_KEY_KP_ENTER      */ 335: key = Keyboard::Key::Enter;            break;
            // case /* GLFW_KEY_KP_EQUAL      */ 336: key = Keyboard::Key::Unknown;          break;
            case /* GLFW_KEY_LEFT_SHIFT    */ 340: key = Keyboard::Key::LeftShift;        break;
            case /* GLFW_KEY_LEFT_CONTROL  */ 341: key = Keyboard::Key::LeftControl;      break;
            case /* GLFW_KEY_LEFT_ALT      */ 342: key = Keyboard::Key::Alt;              break;
            // case /* GLFW_KEY_LEFT_SUPER    */ 343: key = Keyboard::Key::Unknown;          break;
            case /* GLFW_KEY_RIGHT_SHIFT   */ 344: key = Keyboard::Key::RightShift;       break;
            case /* GLFW_KEY_RIGHT_CONTROL */ 345: key = Keyboard::Key::RightControl;     break;
            case /* GLFW_KEY_RIGHT_ALT     */ 346: key = Keyboard::Key::Alt;              break;
            // case /* GLFW_KEY_RIGHT_SUPER   */ 347: key = Keyboard::Key::Unknown;          break;
            // case /* GLFW_KEY_MENU          */ 348: key = Keyboard::Key::Unknown;          break;
            default:                               key = Keyboard::Key::Unknown;          break;
        }

        return key;
    }
} // namespace Dynamic_Static
