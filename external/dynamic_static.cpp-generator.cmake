
# ==========================================
#   Copyright (c) 2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

include(FetchContent)
FetchContent_Declare(
    dynamic_static.cpp-generator
    GIT_REPOSITORY "https://github.com/dynamic-static/dynamic_static.cpp-generator.git"
    GIT_TAG trunk
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(dynamic_static.cpp-generator)
