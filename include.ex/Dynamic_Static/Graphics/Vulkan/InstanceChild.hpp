
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

namespace dst {
namespace gfx {
namespace vk {

    /*
    * Common base for all Vulkan Instance child objects.
    */
    class InstanceChild
    {
    private:
        Instance* mInstance { nullptr };

    protected:
        /*
        * Constructs an instance of InstanceChild.
        * @param [in] instance This InstanceChild's Instance
        */
        InstanceChild(Instance* instance);

    public:
        /*
        * Destroys this instance of InstanceChild.
        */
        virtual ~InstanceChild() = 0;

    public:
        /*
        * Gets this InstanceChild's Instance.
        * @return This InstanceChild's Instance
        */
        Instance& get_instance();

        /*
        * Gets this InstanceChild's Instance.
        * @return This InstanceChild's Instance
        */
        const Instance& get_instance() const;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
