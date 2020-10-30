
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/gltf/gltf.hpp"

#include "rapidjson/document.h"
#include "rapidjson/istreamwrapper.h"

#if 0
#define TINYGLTF_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "tinygltf/tiny_gltf.h"
#endif

#include <iostream>

#include <fstream>
#include <string>

namespace dst {
namespace gltf {

void GlTf::reset()
{
    *this = { };
}

void GlTf::load(const std::filesystem::path& filePath)
{
    assert(filePath.extension() == ".gltf" && "TODO : Error handling");
    assert(std::filesystem::exists(filePath) && "TODO : Error handling");
    std::ifstream file(filePath);
    assert(file.is_open() && "TODO : Error handling");
    rapidjson::Document jsonDocument;
    auto error = jsonDocument.ParseStream(rapidjson::IStreamWrapper(file)).HasParseError();
    if (!error) {
        if (jsonDocument.IsObject()) {
            auto gltfJsonAsset = jsonDocument.FindMember("asset");
            if (gltfJsonAsset != jsonDocument.MemberEnd()) {

            }
            assert(jsonDocument.FindMember("asset") != jsonDocument.MemberEnd());
            for (auto gltfJsonItr = jsonDocument.MemberBegin(); gltfJsonItr != jsonDocument.MemberEnd(); ++gltfJsonItr) {
                auto pName = gltfJsonItr->name.IsString() ? gltfJsonItr->name.GetString() : nullptr;
                if (pName) {


                    if (!strcmp(pName, "scene")) {

                    } else
                    if (!strcmp(pName, "scenes")) {
                        if (gltfJsonItr->value.IsArray()) {
                            mScenes.reserve(gltfJsonItr->value.Size());
                            for (const auto& gltfSceneJson : gltfJsonItr->value.GetArray()) {
                                mScenes.emplace_back(gltfSceneJson);
                            }
                        }
                    } else
                    if (!strcmp(pName, "nodes")) {

                    } else
                    if (!strcmp(pName, "meshes")) {

                    } else
                    if (!strcmp(pName, "buffers")) {

                    } else
                    if (!strcmp(pName, "bufferViews")) {

                    } else
                    if (!strcmp(pName, "accessors")) {

                    } else
                    if (!strcmp(pName, "asset")) {

                    }
                }
                #if 0
                scene
                scenes
                nodes
                meshes
                buffers
                bufferViews
                accessors
                asset
                #endif
            }
        } else {
            assert(false && "TODO : Error handling");
        }
    } else {
        assert(false && "TODO : Error handling");
    }
    int b = 0;
}

} // namespace gltf
} // namespace dst
