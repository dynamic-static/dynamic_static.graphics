
# CMake configuration for imgui

ExternalProject_Add(
    imgui
    PREFIX external
    DOWNLOAD_DIR external/imgui
    URL https://github.com/ocornut/imgui/archive/master.zip
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(imgui SOURCE_DIR)
ExternalProject_Get_Property(imgui BINARY_DIR)
set(imgui.INCLUDE ${SOURCE_DIR})
file(GLOB imgui.SOURCE ${SOURCE_DIR}/*.cpp)
