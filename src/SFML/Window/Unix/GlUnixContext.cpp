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

#include <SFML/Window/Unix/GlUnixContext.hpp>
#include <SFML/Window/Unix/UnixBackendChooser.hpp>
#include <SFML/Window/Unix/X11/GlxContext.hpp>

namespace sf::priv
{

////////////////////////////////////////////////////////////
std::unique_ptr<GlUnixContext> GlUnixContext::create(GlUnixContext* shared)
{
    if (isUnixBackendX11())
        return std::make_unique<GlxContext>(static_cast<GlxContext*>(shared));
    return std::make_unique<GlxContext>(static_cast<GlxContext*>(shared));
}


////////////////////////////////////////////////////////////
std::unique_ptr<GlUnixContext> GlUnixContext::create(GlUnixContext*         shared,
                                                     const ContextSettings& settings,
                                                     const WindowImpl&      owner,
                                                     unsigned int           bitsPerPixel)
{
    if (isUnixBackendX11())
        return std::make_unique<GlxContext>(static_cast<GlxContext*>(shared), settings, owner, bitsPerPixel);
    return std::make_unique<GlxContext>(static_cast<GlxContext*>(shared), settings, owner, bitsPerPixel);
}


////////////////////////////////////////////////////////////
std::unique_ptr<GlUnixContext> GlUnixContext::create(GlUnixContext* shared, const ContextSettings& settings, Vector2u size)
{
    if (isUnixBackendX11())
        return std::make_unique<GlxContext>(static_cast<GlxContext*>(shared), settings, size);
    return std::make_unique<GlxContext>(static_cast<GlxContext*>(shared), settings, size);
}


////////////////////////////////////////////////////////////
GlFunctionPointer GlUnixContext::getFunction(const char* name)
{
    if (isUnixBackendX11())
        return GlxContext::getFunction(name);
    return GlxContext::getFunction(name);
}

} // namespace sf::priv
