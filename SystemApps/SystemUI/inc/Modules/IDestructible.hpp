#include "Modules/IModule.hpp"

namespace TstBits
{
    class IDestructible
    {
    public:
        IDestructible();
        ~IDestructible();
        virtual void Destroy() = 0;
    };
}