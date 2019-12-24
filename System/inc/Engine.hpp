#include <string>
#include <SFML/Graphics.hpp>

namespace TstBits
{
    struct EngineSettings
    {
        std::string window_title;
        bool vsync;
        bool srgb;
        int screen_width;
        int screen_height;
        int fps_limit;
        int depth_bits;
        int window_style;
        int version_major;
        int version_minor;
        int attrib_flag;
    };
    
    class Engine
    {
    public:
        Engine(EngineSettings);
        ~Engine();

        int Start();
        void Pause();
        void Resume();
        void Stop();
    private:
        void Update(float);
        void Input();
        void ProcessEvents();
        void Render();

        EngineSettings m_settings;
        sf::Clock m_clock;
        sf::RenderWindow m_window;
    };
}
