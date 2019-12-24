#include "Engine.hpp"

Engine::Engine(EngineSettings settings)
{
    m_settings = settings;
    sf::VideoMode videoMode(settings.screen_width, settings.screen_height);
    sf::ContextSettings ctxSettings;
    ctxSettings.majorVersion = settings.version_major;
    ctxSettings.minorVersion = settings.version_minor;
    ctxSettings.sRgb = settings.srgb;
    ctxSettings.depthBits = settings.depth_bits;
    ctxSettings.attributeFlags = settings.attrib_flags;
    m_window.create(videoMode, settings.window_title, settings.window_style, ctxSettings);
    if (settings.vsync) m_window.setVerticalSyncEnabled(true);
    else if (settings.fps_limit) m_window.setFramerateLimit(fps_limit);
    window.setVisible(false);
}

Engine::~Engine()
{
    // TODO : Destroy Engine and release memory
}


