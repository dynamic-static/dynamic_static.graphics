
# dynamic_static.graphics

Provides graphics support.

// TODO : Instructions for dst::gfx (they're currently for dst::core)
// TODO : Instructions to move Git before Visual Studio in PATH on Windows. https://cmake.org/pipermail/cmake/2016-March/062896.html

___
___
On Windows 10 or Ubuntu 16.04, create a directory named **"Dynamic_Static"** wherever is convenient.<br/>
___
___
### Windows 10
- ***Get Tools***
    - Download and install [CMake](https://cmake.org/download/).
    - Download and install [Git and GitBash](https://git-scm.com/downloads)
    - Download and install [Visual Studio 2017 Community Edition](https://www.visualstudio.com/downloads/).
    
- ***Get Code***
    - From Windows Explorer, in **"Dynamic_Static/"**, right click and select **"Git Bash Here"**
    - Run `git clone https://github.com/DynamicStatic/Dynamic_Static.Core.git`

- ***Build***
    - From Windows Explorer, in **"Dynamic_Static/"**, right click and select **"Git Bash Here"**
    - Run the following commands...
        - `cd Dynamic_Static.Core`
        - `mkdir build`
        - `cd build`
        - `cmake -G "Visual Studio 15 2017 Win64" ..`
    - In Windows Explorer, explore to **"Dynamic_Static/Dynamic_Static.Core/build/"**
    - Open **Dynamic_Static.Core.sln** in Visual Studio 2017
    - In Visual Studio, while holding **[Alt]**, press **[B]** then **[T]** to **Batch Build**, click **"Select All"** then **"Build"**

- ***Running Tests***
    - Right click on the **"Dynamic_Static.Core.Tests"** project in the Solution Explorer and select **"Set as Startup Project"**
    - Click the **Run (green triangle)** button or press **F5** to begin debugging, or press **[Ctrl] + F5** to run without debugging

___
___
### Ubuntu 16.04
- ***Get Tools***
    - Run the following commands...
        - `sudo apt-get update`
        - `sudo apt-get git`
        - `sudo apt-get install cmake`

- ***Get Code***
    - `cd` into **"Dynamic_Static/"**
    - Run `git clone https://github.com/DynamicStatic/Dynamic_Static.Core.git`

- ***Build***
    - `cd` into **"Dynamic_Static/"**
    - Run the following commands...
        - `cd Dynamic_Static.Core`
        - `mkdir build`
        - `cd build`
        - `cmake ..`
        - `make`
        - `cd ..`

- ***Running Tests***
    - `cd` into **"Dynamic_Static/"**
    - Run `./build/Dynamic_Static.Core.Tests/Dynamic_Static.Core.Tests`
