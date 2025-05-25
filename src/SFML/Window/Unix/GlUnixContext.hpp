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

#pragma once

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Window/GlContext.hpp>
#include <SFML/Window/WindowEnums.hpp>

namespace sf::priv
{
////////////////////////////////////////////////////////////
/// \brief Shared Linux implementation of OpenGL contexts
///
////////////////////////////////////////////////////////////
class GlUnixContext : public GlContext
{
public:
    ////////////////////////////////////////////////////////////
    /// \brief Create a new default context
    ///
    /// \param shared Context to share the new one with (can be a null pointer)
    ///
    ////////////////////////////////////////////////////////////
    static std::unique_ptr<GlUnixContext> create(GlUnixContext* shared);

    ////////////////////////////////////////////////////////////
    /// \brief Create a new context attached to a window
    ///
    /// \param shared       Context to share the new one with
    /// \param settings     Creation parameters
    /// \param owner        Pointer to the owner window
    /// \param bitsPerPixel Pixel depth, in bits per pixel
    ///
    ////////////////////////////////////////////////////////////
    static std::unique_ptr<GlUnixContext> create(GlUnixContext*         shared,
                                                 const ContextSettings& settings,
                                                 const WindowImpl&      owner,
                                                 unsigned int           bitsPerPixel);

    ////////////////////////////////////////////////////////////
    /// \brief Create a new context that embeds its own rendering target
    ///
    /// \param shared   Context to share the new one with
    /// \param settings Creation parameters
    /// \param size     Back buffer width and height, in pixels
    ///
    ////////////////////////////////////////////////////////////
    static std::unique_ptr<GlUnixContext> create(GlUnixContext* shared, const ContextSettings& settings, Vector2u size);

    ////////////////////////////////////////////////////////////
    /// \brief Get the address of an OpenGL function
    ///
    /// \param name Name of the function to get the address of
    ///
    /// \return Address of the OpenGL function, `nullptr` on failure
    ///
    ////////////////////////////////////////////////////////////
    static GlFunctionPointer getFunction(const char* name);
};

} // namespace sf::priv
