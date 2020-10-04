
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/time.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
// #include "create-structure-copy.generator.hpp"
// #include "destroy-structure-copy.generator.hpp"
// #include "equality-operators.generator.hpp"
// #include "managed-handles.generator.hpp"
// #include "managed-structures.generator.hpp"
#include "structure-to-tuple.generator.hpp"

#include "tinyxml2.h"

#include <iostream>

int main(int argc, char* argv[])
{
    tinyxml2::XMLDocument vkXml;
    auto result = vkXml.LoadFile(DYNAMIC_STATIC_VK_XML_FILE_PATH);
    if (result == tinyxml2::XML_SUCCESS) {
        dst::vk::xml::Manifest xmlManifest(vkXml);
        dst::Timer timer;
        using namespace dst::vk::cppgen;
        generate_structure_to_tuple(xmlManifest);
        // CreateStructureCopyGenerator createStructureCopyGenerator(vkXmlManifest);
        // DestroyStructureCopyGenerator destroyStructureCopyGenerator(vkXmlManifest);
        // ComparisonOperatorsGenerator equalityOperatorsGenerator(vkXmlManifest);
        // StructureToTupleGenerator structureToTupleGenerator(vkXmlManifest);
        // generate_managed_handles(vkXmlManifest);
        // generate_managed_structures(vkXmlManifest);
        std::cout << timer.total<dst::Seconds<>>() << " s" << std::endl;
        std::cout << timer.total<dst::Milliseconds<>>() << " ms" << std::endl;
    }
    return 0;
}
