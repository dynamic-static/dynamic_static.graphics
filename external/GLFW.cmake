
# CMake configuration for GLFW

ExternalProject_Add(
    GLFW
    PREFIX external
    DOWNLOAD_DIR external/GLFW

    # URL "${CMAKE_SOURCE_DIR}/external/glfw-3.2.1.zip"
    # URL_MD5 35A0672885AD4CA59C8EBE7550176276

    URL https://github.com/glfw/glfw/archive/3.2.1.zip
    URL_HASH SHA1=3578BEFA2B96A6A2286F33C3A92E08E9F2F834F8

    # GIT_REPOSITORY https://github.com/glfw/glfw.git
    # GIT_TAG 3.2.1

    CMAKE_ARGS
        -DGLFW_BUILD_EXAMPLES=OFF
        -DGLFW_BUILD_TESTS=OFF
        -DGLFW_BUILD_DOCS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(GLFW SOURCE_DIR)
ExternalProject_Get_Property(GLFW BINARY_DIR)
set(GLFW_INCLUDE "${SOURCE_DIR}/include/")
if (MSVC)
    set(GLFW_LIBRARY "${BINARY_DIR}/src/$(Configuration)/glfw3.lib")
else()
    set(GLFW_LIBRARY "${BINARY_DIR}/src/libglfw3.a")
endif()
