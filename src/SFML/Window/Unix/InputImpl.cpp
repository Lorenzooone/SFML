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
#include <SFML/Window/Unix/X11/InputImplX11.hpp>

#include <SFML/System/String.hpp>

namespace sf::priv::InputImpl
{
////////////////////////////////////////////////////////////
bool isKeyPressed(Keyboard::Key key)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::isKeyPressed(key);
}


////////////////////////////////////////////////////////////
bool isKeyPressed(Keyboard::Scancode code)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::isKeyPressed(code);
}


////////////////////////////////////////////////////////////
Keyboard::Key localize(Keyboard::Scancode code)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::localize(code);
}


////////////////////////////////////////////////////////////
Keyboard::Scancode delocalize(Keyboard::Key key)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::delocalize(key);
}


////////////////////////////////////////////////////////////
String getDescription(Keyboard::Scancode code)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::getDescription(code);
}

////////////////////////////////////////////////////////////
void setVirtualKeyboardVisible(bool visible)
{
    // Add support for another backend here
    sf::priv::InputImplX11::setVirtualKeyboardVisible(visible);
}


////////////////////////////////////////////////////////////
bool isMouseButtonPressed(Mouse::Button button)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::isMouseButtonPressed(button);
}


////////////////////////////////////////////////////////////
Vector2i getMousePosition()
{
    // Add support for another backend here
    return sf::priv::InputImplX11::getMousePosition();
}


////////////////////////////////////////////////////////////
Vector2i getMousePosition(const WindowBase& relativeTo)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::getMousePosition(relativeTo);
}


////////////////////////////////////////////////////////////
void setMousePosition(Vector2i position)
{
    // Add support for another backend here
    sf::priv::InputImplX11::setMousePosition(position);
}


////////////////////////////////////////////////////////////
void setMousePosition(Vector2i position, const WindowBase& relativeTo)
{
    // Add support for another backend here
    sf::priv::InputImplX11::setMousePosition(position, relativeTo);
}


////////////////////////////////////////////////////////////
bool isTouchDown(unsigned int finger)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::isTouchDown(finger);
}


////////////////////////////////////////////////////////////
Vector2i getTouchPosition(unsigned int finger)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::getTouchPosition(finger);
}


////////////////////////////////////////////////////////////
Vector2i getTouchPosition(unsigned int finger, const WindowBase& relativeTo)
{
    // Add support for another backend here
    return sf::priv::InputImplX11::getTouchPosition(finger, relativeTo);
}

} // namespace sf::priv::InputImpl
