#include <SFML/Graphics/RenderTarget.hpp>
#include <vector>
#include "Logger.hpp"

namespace TstBits
{
    class State
    {
    public:
        State();
        virtual ~State() = 0;
        
        virtual bool OnInit() = 0;
        virtual bool OnStart() = 0;
        virtual bool OnPause() = 0;
        virtual bool OnResume() = 0;
        virtual bool CleanUp() = 0;
        
    private:
        bool m_isPaused;
        Gui m_gui;
    };
}
