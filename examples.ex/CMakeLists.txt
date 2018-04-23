
#==========================================
#    Copyright 2011-2018 Dynamic_Static
#        Patrick Purcell
#    Licensed under the MIT license
#    http://opensource.org/licenses/MIT
#==========================================

macro(CreateExample target)
    DstCreateExecutable(
        target ${target}
        staticLinkLibraries Dynamic_Static.Graphics
        sourceFiles "${CMAKE_CURRENT_LIST_DIR}/${target}.cpp"
    )
endmacro()

CreateExample(Sandbox)
