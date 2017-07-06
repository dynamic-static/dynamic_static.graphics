
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_PATH ${DST_GFX_INCLUDE}/Dynamic_Static/Graphics/)
set(INCLUDE_FILES
    ${INCLUDE_PATH}/Defines.hpp
    ${INCLUDE_PATH}/Object.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Input.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Input.Manager.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Keyboard.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Monitor.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Mouse.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Point.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Resolution.hpp
    ${DST_GFX_INCLUDE}/Dynamic_Static/Core/Window.hpp
)

set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Graphics/)
set(SOURCE_FILES
    ${SOURCE_PATH}/Object.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/GLFWInclude.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Input.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Input.Manager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Keyboard.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Monitor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Mouse.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Point.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Resolution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Core/Window.cpp
)

include_directories(
    DYNAMIC_STATIC_CORE_INCLUDE_DIRECTORY
    ${INCLUDE_DIRECTORY}
    ${GLFW_INCLUDE}
)

if (MSVC)
    set(DST_GFX_DEPENDENCIES
        ${DST_CORE_LIBRARY}
        ${GLFW_LIBRARY}
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
