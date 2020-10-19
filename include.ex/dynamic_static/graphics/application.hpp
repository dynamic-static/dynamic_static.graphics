
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/time.hpp"
#include "dynamic_static/core/version.hpp"
#include "dynamic_static/graphics/defines.hpp"
#include "dynamic_static/system/input.hpp"
#include "dynamic_static/system/window.hpp"

namespace dst {
namespace gfx {

/**
TODO : Documentation
*/
class Application
{
public:
    /**
    TODO : Documentation
    */
    Application(const sys::Window::Info& windowInfo);

    /**
    Destroys this instance of Application
    */
    virtual ~Application() = 0;

    /**
    TODO : Documentation
    */
    const sys::Window& get_window() const;

    /**
    TODO : Documentation
    */
    sys::Window& get_window();

    /**
    Starts this Application
    */
    void start();

    /**
    Stops this Application
    */
    void stop();

protected:
    /**
    TODO : Documentation
    */
    virtual bool setup();

    /**
    TODO : Documentation
    */
    virtual void teardown();

    /**
    TODO : Documentation
    */
    virtual void pre_update(const dst::Clock& clock, const dst::sys::Input& input);

    /**
    TODO : Documentation
    */
    virtual void update(const dst::Clock& clock, const dst::sys::Input& input);

    /**
    TODO : Documentation
    */
    virtual void post_update(const dst::Clock& clock, const dst::sys::Input& input);

    /**
    TODO : Documentation
    */
    virtual void pre_render(const dst::Clock& clock);

    /**
    TODO : Documentation
    */
    virtual void render(const dst::Clock& clock);

    /**
    TODO : Documentation
    */
    virtual void post_render(const dst::Clock& clock);


private:
    dst::Clock mClock;
    dst::sys::Window mWindow;
    bool mRunning { false };
    Application(const Application&) = delete;
    Application& operator=(const Application&) = delete;
};

} // namespace gfx
} // namespace dst
