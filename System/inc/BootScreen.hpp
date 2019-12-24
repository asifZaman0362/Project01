#include "State.hpp"

namespace TstBits
{
    class BootScreen : public State
    {
    public:
        BootScreen();
        ~BootScreen();
        
        void OnInit();
        void OnStart();
        void OnUpdate(float);
        void OnDraw(sf::RenderTarget&);
        void OnPause();
        void CleanUP();
    }
}
