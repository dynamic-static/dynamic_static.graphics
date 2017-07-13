
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_PATH ${DST_GFX_INCLUDE}/Dynamic_Static/)
set(INCLUDE_FILES
    # ${INCLUDE_PATH}/Core/Input.hpp
    # ${INCLUDE_PATH}/Core/Input.Manager.hpp
    # ${INCLUDE_PATH}/Core/Keyboard.hpp
    ${INCLUDE_PATH}/Core/Monitor.hpp
    # ${INCLUDE_PATH}/Core/Mouse.hpp
    # ${INCLUDE_PATH}/Core/Point.hpp
    ${INCLUDE_PATH}/Core/Resolution.hpp
    ${INCLUDE_PATH}/Core/Window.hpp

    ${INCLUDE_PATH}/Graphics/Camera.hpp
    ${INCLUDE_PATH}/Graphics/Defines.hpp
    ${INCLUDE_PATH}/Graphics/Object.hpp

    ${INCLUDE_PATH}/Graphics/OpenGL/GLEWInclude.hpp

    ${INCLUDE_PATH}/Graphics/Vulkan/Instance.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Object.hpp
)

set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/)
set(SOURCE_FILES
    ${SOURCE_PATH}/Core/GLFWInclude.hpp
    # ${SOURCE_PATH}/Core/Input.cpp
    # ${SOURCE_PATH}/Core/Input.Manager.cpp
    # ${SOURCE_PATH}/Core/Keyboard.cpp
    ${SOURCE_PATH}/Core/Monitor.cpp
    # ${SOURCE_PATH}/Core/Mouse.cpp
    # ${SOURCE_PATH}/Core/Point.cpp
    ${SOURCE_PATH}/Core/Resolution.cpp
    ${SOURCE_PATH}/Core/Window.cpp

    ${SOURCE_PATH}/Graphics/Camera.cpp
    ${SOURCE_PATH}/Graphics/Object.cpp

    ${SOURCE_PATH}/Graphics/Vulkan/Instance.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Object.cpp
)

include_directories(
    DYNAMIC_STATIC_CORE_INCLUDE_DIRECTORY
    ${GLFW_INCLUDE}
)

if (MSVC)
    set(DST_GFX_DEPENDENCIES
        ${DST_CORE_LIBRARY}
        ${GLFW_LIBRARY}
        ${GLEW_LIBRARY}
        opengl32.lib
        glu32.lib
        PARENT_SCOPE
    )
else()
    set(DST_GFX_DEPENDENCIES
        ${DST_CORE_LIBRARY}
        ${GLFW_LIBRARY}
        PARENT_SCOPE
    )
endif()

add_library(Dynamic_Static.Graphics ${INCLUDE_FILES} ${SOURCE_FILES})
set_target_properties(Dynamic_Static.Graphics PROPERTIES PREFIX "")
add_dependencies(Dynamic_Static.Graphics Dynamic_Static.Core)
add_dependencies(Dynamic_Static.Graphics GLFW)
create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
