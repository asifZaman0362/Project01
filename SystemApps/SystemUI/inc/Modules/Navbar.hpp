#include "Modules/IModule.hpp"

namespace TstBits
{
    class Navbar : IModule // Make this non-extendable as well
    {
    public:
        Navbar();
        ~Navbar();
        void OnCreate();
        void Show();
        void Hide();
        
        void GoBack();
        void GoHome();
        //void ...
    };
}