
# CMake configuration for imgui

ExternalProject_Add(
    imgui
    PREFIX external
    DOWNLOAD_DIR external/imgui

    URL https://github.com/ocornut/imgui/archive/master.zip
    # URL_HASH SHA1=ED05B1B4C82FC7EBF9C451352EB7B4CF887B80B2

    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(imgui SOURCE_DIR)
ExternalProject_Get_Property(imgui BINARY_DIR)
set(DST_GFX_EXTERNAL_INCLUDE_DIRECTORIES
    ${DST_GFX_EXTERNAL_INCLUDE_DIRECTORIES}
    ${SOURCE_DIR}
)

file(GLOB imgui_SOURCE_FILES ${SOURCE_DIR}/*.cpp)
set(DST_GFX_EXTERNAL_SOURCE_FILES
    ${DST_GFX_EXTERNAL_SOURCE_FILES}
    ${imgui_SOURCE_FILES}
)
