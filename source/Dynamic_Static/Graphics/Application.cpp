
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Application.hpp"

#include <iostream>

namespace Dynamic_Static {
namespace Graphics {

    Application::~Application()
    {
        mRunning = false;
    }

    bool Application::running() const
    {
        return mRunning;
    }

    void Application::setup()
    {
    }

    void Application::start()
    {
        setup();
        mRunning = true;
        mClock.update();
        while (mRunning) {
            dst::sys::Window::update();
            mClock.update();

            const auto& input = mWindow->get_input();
            pre_update(mClock, input);
            update(mClock, input);
            post_update(mClock, input);

            pre_render(mClock);
            render(mClock);
            post_render(mClock);

            mWindow->swap();
        }

        shutdown();
    }

    void Application::pre_update(const dst::Clock& clock, const dst::sys::Input& input)
    {
    }

    void Application::update(const dst::Clock& clock, const dst::sys::Input& input)
    {
    }

    void Application::post_update(const dst::Clock& clock, const dst::sys::Input& input)
    {
    }

    void Application::pre_render(const dst::Clock& clock)
    {
    }

    void Application::render(const dst::Clock& clock)
    {
    }

    void Application::post_render(const dst::Clock& clock)
    {
    }

    void Application::shutdown()
    {
    }

    void Application::stop()
    {
        mRunning = false;
    }

} // namespace Graphics
} // namespace Dynamic_Static
#endif
