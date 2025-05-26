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
#include <SFML/Window/InputImpl.hpp>
#include <SFML/Window/Unix/UnixBackendChooser.hpp>
#include <SFML/Window/Unix/X11/InputImplX11.hpp>

#include <SFML/System/String.hpp>

namespace sf::priv::InputImpl
{
////////////////////////////////////////////////////////////
bool isKeyPressed(Keyboard::Key key)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::isKeyPressed(key);
    return sf::priv::InputImplX11::isKeyPressed(key);
}


////////////////////////////////////////////////////////////
bool isKeyPressed(Keyboard::Scancode code)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::isKeyPressed(code);
    return sf::priv::InputImplX11::isKeyPressed(code);
}


////////////////////////////////////////////////////////////
Keyboard::Key localize(Keyboard::Scancode code)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::localize(code);
    return sf::priv::InputImplX11::localize(code);
}


////////////////////////////////////////////////////////////
Keyboard::Scancode delocalize(Keyboard::Key key)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::delocalize(key);
    return sf::priv::InputImplX11::delocalize(key);
}


////////////////////////////////////////////////////////////
String getDescription(Keyboard::Scancode code)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::getDescription(code);
    return sf::priv::InputImplX11::getDescription(code);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wduplicated-branches"
////////////////////////////////////////////////////////////
void setVirtualKeyboardVisible(bool visible)
{
    if (isUnixBackendX11())
        sf::priv::InputImplX11::setVirtualKeyboardVisible(visible);
    else
        sf::priv::InputImplX11::setVirtualKeyboardVisible(visible);
}
#pragma GCC diagnostic pop


////////////////////////////////////////////////////////////
bool isMouseButtonPressed(Mouse::Button button)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::isMouseButtonPressed(button);
    return sf::priv::InputImplX11::isMouseButtonPressed(button);
}


////////////////////////////////////////////////////////////
Vector2i getMousePosition()
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::getMousePosition();
    return sf::priv::InputImplX11::getMousePosition();
}


////////////////////////////////////////////////////////////
Vector2i getMousePosition(const WindowBase& relativeTo)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::getMousePosition(relativeTo);
    return sf::priv::InputImplX11::getMousePosition(relativeTo);
}


////////////////////////////////////////////////////////////
void setMousePosition(Vector2i position)
{
    if (isUnixBackendX11())
        sf::priv::InputImplX11::setMousePosition(position);
    else
        sf::priv::InputImplX11::setMousePosition(position);
}


////////////////////////////////////////////////////////////
void setMousePosition(Vector2i position, const WindowBase& relativeTo)
{
    if (isUnixBackendX11())
        sf::priv::InputImplX11::setMousePosition(position, relativeTo);
    else
        sf::priv::InputImplX11::setMousePosition(position, relativeTo);
}


////////////////////////////////////////////////////////////
bool isTouchDown(unsigned int finger)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::isTouchDown(finger);
    return sf::priv::InputImplX11::isTouchDown(finger);
}


////////////////////////////////////////////////////////////
Vector2i getTouchPosition(unsigned int finger)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::getTouchPosition(finger);
    return sf::priv::InputImplX11::getTouchPosition(finger);
}


////////////////////////////////////////////////////////////
Vector2i getTouchPosition(unsigned int finger, const WindowBase& relativeTo)
{
    if (isUnixBackendX11())
        return sf::priv::InputImplX11::getTouchPosition(finger, relativeTo);
    return sf::priv::InputImplX11::getTouchPosition(finger, relativeTo);
}

} // namespace sf::priv::InputImpl
