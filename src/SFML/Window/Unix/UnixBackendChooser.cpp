////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2025 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Window/Unix/UnixBackendChooser.hpp>

#include <cstdlib>

namespace
{

enum UnixBackendType
{
    UNIX_BACKEND_NONE,
    UNIX_BACKEND_X11,
    UNIX_BACKEND_WAYLAND
};

UnixBackendType chosenBackend = UNIX_BACKEND_NONE;

// Important: have it so this is not run at the start of the program.
// So the programmer can prevent Wayland, if they so choose.
void chooseUnixBackend()
{
    const char* waylandLoaded = std::getenv("WAYLAND_DISPLAY");
    if (waylandLoaded && *waylandLoaded)
        chosenBackend = UNIX_BACKEND_WAYLAND;
    else
        chosenBackend = UNIX_BACKEND_X11;
}

} // namespace

namespace sf::priv
{

bool isUnixBackendX11()
{
    if (chosenBackend == UNIX_BACKEND_NONE)
        chooseUnixBackend();
    return chosenBackend == UNIX_BACKEND_X11;
}

} // namespace sf::priv
