#include "System/State.hpp"

namespace TstBits
{
    class MainState : State
    {
    public:
        MainState();
        ~MainState();
        
        bool OnInit();
        bool OnStart();
        bool OnPause();
        bool OnResume();
        bool CleanUp();
    }
}
