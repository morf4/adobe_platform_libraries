/*
    Copyright 2013 Adobe
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*/
/****************************************************************************************************/

#ifndef ADOBE_DISPLAY_HPP
#define ADOBE_DISPLAY_HPP

/****************************************************************************************************/

#include <adobe/config.hpp>

#include <adobe/future/platform_primitives.hpp>

/****************************************************************************************************/

namespace adobe {

/****************************************************************************************************/

struct display_t
{
    display_t() :
        root_m(platform_display_type())
    { }

    void set_root(platform_display_type element)
        { root_m = element; }

    platform_display_type root()
        { return root_m; }

    template <typename DisplayElement>
    platform_display_type insert(platform_display_type& parent, const DisplayElement& element);

private:
    platform_display_type root_m;
};

/****************************************************************************************************/

display_t& get_main_display();

/****************************************************************************************************/

template <typename DisplayElement>
platform_display_type insert(display_t& display, platform_display_type& parent, DisplayElement& element);

/****************************************************************************************************/

} // namespace adobe

/****************************************************************************************************/

#endif // ADOBE_DISPLAY_HPP

/****************************************************************************************************/
