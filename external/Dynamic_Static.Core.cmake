
# ==========================================
#   Copyright (c) 2016-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

if(DEFINED ENV{DYNAMIC_STATIC_SDK})
    set(Dynamic_Static.Core.projectDirectory
        "$ENV{DYNAMIC_STATIC_SDK}/Dynamic_Static.Core/"
    )
else()
    set(Dynamic_Static.Core.projectDirectory
        "${CMAKE_CURRENT_LIST_DIR}/Dynamic_Static.Core/"
    )
endif()
set(Dynamic_Static.Core.includeDirectories
    "${Dynamic_Static.Core.projectDirectory}/include/"
)
