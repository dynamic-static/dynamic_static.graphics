
# ==========================================
#   Copyright (c) 2016-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

if(DEFINED ENV{DYNAMIC_STATIC_SDK})
    set(Dynamic_Static.System.projectDirectory
        "$ENV{DYNAMIC_STATIC_SDK}/Dynamic_Static.System/"
    )
else()
    set(Dynamic_Static.System.projectDirectory
        "${CMAKE_CURRENT_LIST_DIR}/Dynamic_Static.System/"
    )
endif()
set(buildExamplesToggle ${BUILD_EXAMPLES})
set(BUILD_EXAMPLES "Off")
add_subdirectory(
    "${Dynamic_Static.System.projectDirectory}"
    "${CMAKE_BINARY_DIR}/external/Dynamic_Static.System/"
)
set(BUILD_EXAMPLES ${buildExamplesToggle})
get_directory_property(
    glew.sharedLibraries
    DIRECTORY "${Dynamic_Static.System.projectDirectory}"
    DEFINITION glew.sharedLibraries
)
