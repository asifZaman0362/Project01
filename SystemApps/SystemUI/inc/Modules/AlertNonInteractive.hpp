#include "Modules/IDestructible.hpp"

namespace TstBits
{
    class AlertNonInteractive : IModule, IDestructible
    {
    public:
        AlertNonInteractive(int);
        ~AlertNonInteractive();
        virtual void OnCreate() = 0;
        virtual void Show(unsigned short int);
        void Hide();
        void Destroy();
    private:
        int id;
    };
}