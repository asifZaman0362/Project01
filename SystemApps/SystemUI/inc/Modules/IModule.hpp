#include "utils/inc/string.hpp"

namespace TstBits
{
    class IModule
    {
    public:
        IModule();
        ~IModule() = default;
        virtual void OnCreate() = 0;
        virtual void Show() = 0;
        virtual void Hide() = 0;
    };
}