#include "Modules/IDestructible.hpp"

namespace TstBits
{
    class AlertInteractive : IModule, IDestructible
    {
    public:
        AlertInteractive(int);
        ~AlertInteractive();
        virtual void OnCreate() = 0;
        virtual bool GetInput() = 0;
        virtual void Destroy();
        virtual void Show();
        virtual void Hide();
    private:
        int id;
    };
}