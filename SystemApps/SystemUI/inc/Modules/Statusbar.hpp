#include "Modules/IModule.hpp"

namespace TstBits
{
    class StatusBar : IModule // Make this a non-extendable (concrete?) class
    {
    public:
        StatusBar();
        ~StatusBar();
        void OnCreate();
        void Show();
        void Hide();
    };
}