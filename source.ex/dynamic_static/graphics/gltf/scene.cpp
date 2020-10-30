
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/gltf/scene.hpp"
#include "dynamic_static/graphics/gltf/utilities.hpp"

namespace dst {
namespace gltf {

Scene::Scene(const rapidjson::Value& json)
{
    process_member(
        json, "name",
        [&](const rapidjson::Value& nameJson)
        {
        }
    );
    process_member(
        json, "extensions",
        [&](const rapidjson::Value& extensionsJson)
        {
        }
    );
    process_member(
        json, "nodes",
        [&](const rapidjson::Value& nodesJson)
        {
        }
    );
    process_member(
        json, "extras",
        [&](const rapidjson::Value& extrasJson)
        {
        }
    );
}

} // namespace gltf
} // namespace dst
