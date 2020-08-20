
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/vk-xml-parser.hpp"
#include "create-structure-copy.generator.hpp"
#include "destroy-structure-copy.generator.hpp"
#include "equality-operators.generator.hpp"
#include "greater-than-operators.generator.hpp"
#include "less-than-operators.generator.hpp"
#include "managed-handles.generator.hpp"
#include "managed-structures.generator.hpp"
#include "structure-to-tuple.generator.hpp"

#include "tinyxml2.h"

#include <iostream>

int main(int argc, char* argv[])
{
    tinyxml2::XMLDocument vkXml;
    auto result = vkXml.LoadFile(DYNAMIC_STATIC_VK_XML_FILE_PATH);
    if (result == tinyxml2::XML_SUCCESS) {
        using namespace dst::vk::cppgen;
        dst::vk::xml::Manifest vkXmlManifest(vkXml);
        dst::Timer timer;
        // CreateStructureCopyGenerator createStructureCopyGenerator(vkXmlManifest);
        // DestroyStructureCopyGenerator destroyStructureCopyGenerator(vkXmlManifest);
        EquailtyOperatorsGenerator equalityOperatorsGenerator(vkXmlManifest);
        // GreaterThanOperatorsGenerator greaterThanOperatorsGenerator(vkXmlManifest);
        // LessThanOperatorsGenerator lessThanOperatorsGenerator(vkXmlManifest);
        // StructureToTupleGenerator structureToTupleGenerator(vkXmlManifest);
        // generate_managed_handles(vkXmlManifest);
        // generate_managed_structures(vkXmlManifest);
        std::cout << timer.total<dst::Milliseconds<>>() << " ms" << std::endl;
    }
    return 0;
}
