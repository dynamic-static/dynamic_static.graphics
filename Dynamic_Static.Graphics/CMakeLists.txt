
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/)
set(INCLUDE_PATH ${INCLUDE_DIRECTORY}/Dynamic_Static/Graphics/)
set(INCLUDE_FILES
    ${INCLUDE_PATH}/Defines.hpp
    ${INCLUDE_PATH}/Object.hpp
)

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_PATH ${SOURCE_DIRECTORY}/Dynamic_Static/Graphics/)
set(SOURCE_FILES
    ${SOURCE_PATH}/Object.cpp
)

include_directories(
    DYNAMIC_STATIC_CORE_INCLUDE_DIRECTORY
    ${INCLUDE_DIRECTORY}
    "${glfw_SOURCE_DIR}/include/"
    "${Dynamic_Static.Core_SOURCE_DIR}/Dynamic_Static.Core/include/"
)

add_library(
    Dynamic_Static.Graphics
    ${INCLUDE_FILES}
    ${SOURCE_FILES}
)

if (MSVC)
    set(DYNAMIC_STATIC_GRAPHICS_DEPENDENCIES
        ${GLFW_LIBRARIES}
        PARENT_SCOPE
    )
else()
    set(DYNAMIC_STATIC_GRAPHICS_DEPENDENCIES
        ${GLFW_LIBRARIES}
        PARENT_SCOPE
    )
endif()

# message("== GLFW SOURCE ${glfw_SOURCE_}")

set(DYNAMIC_STATIC_GRAPHICS_DIRECTORY ${INCLUDE_DIRECTORY} PARENT_SCOPE)
set_target_properties(Dynamic_Static.Graphics PROPERTIES PREFIX "")
create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
