
#==========================================
#    Copyright 2011-2018 Dynamic_Static
#        Patrick Purcell
#    Licensed under the MIT license
#    http://opensource.org/licenses/MIT
#==========================================

if(NOT TARGET Dynamic_Static.Core)
    if(SDK_BUILD)
        set(Dynamic_Static.Core.projectDirectory
            "$ENV{DYNAMIC_STATIC_SDK}/Dynamic_Static.Core/"
        )
    else()
        set(Dynamic_Static.Core.projectDirectory
            "${CMAKE_CURRENT_LIST_DIR}/Dynamic_Static.Core/"
        )
    endif()
    add_subdirectory(
        "${Dynamic_Static.Core.projectDirectory}"
        "${CMAKE_BINARY_DIR}/external/Dynamic_Static.Core/"
    )
endif()
