
cmake_minimum_required(VERSION 3.3)
include(ExternalProject)
ExternalProject_Add(
    imgui
    PREFIX external
    DOWNLOAD_DIR external/imgui
    URL https://github.com/ocornut/imgui/archive/v1.52.zip
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
)
