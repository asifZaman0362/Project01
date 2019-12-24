#include "Application.hpp"

namespace TstBits
{
    class SystemUI : public Application
    {
    public:
        SystemUI();
        ~SystemUI();
        
        bool OnStart();
        bool OnStop(int);
        bool OnPause();
        bool OnResume();
    };
}
