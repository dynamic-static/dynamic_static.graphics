
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static.Graphics.hpp"

class ExampleTriangle final
    : public dst::vk::Application
{
};

int main()
{
    ExampleTriangle app;
    app.start();
    return 0;
}
