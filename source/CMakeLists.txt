
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_PATH ${DST_GFX_INCLUDE}/Dynamic_Static/Graphics/)
set(INCLUDE_FILES
    ${INCLUDE_PATH}/Defines.hpp
    ${INCLUDE_PATH}/Object.hpp
)

set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Graphics/)
set(SOURCE_FILES
    ${SOURCE_PATH}/Object.cpp
)

include_directories(
    DYNAMIC_STATIC_CORE_INCLUDE_DIRECTORY
    ${INCLUDE_DIRECTORY}
    # "${glfw_SOURCE_DIR}/include/"
    # "${Dynamic_Static.Core_SOURCE_DIR}/Dynamic_Static.Core/include/"
)


if (MSVC)
    set(DYNAMIC_STATIC_GRAPHICS_DEPENDENCIES
        # ${GLFW_LIBRARIES}
        PARENT_SCOPE
    )
else()
    set(DYNAMIC_STATIC_GRAPHICS_DEPENDENCIES
        # ${GLFW_LIBRARIES}
        PARENT_SCOPE
    )
endif()

add_library(Dynamic_Static.Graphics ${INCLUDE_FILES} ${SOURCE_FILES})
set_target_properties(Dynamic_Static.Graphics PROPERTIES PREFIX "")
create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
