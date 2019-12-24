#include "Process.hpp"

namespace TstBits
{
    class Application : public Process
    {
    public:
        Application();
        virtual ~Application() = 0;
        virtual bool OnStart() = 0;
        virtual bool OnStop(int) = 0;
        virtual bool OnPause();
        virtual bool OnResume();
    }
}
