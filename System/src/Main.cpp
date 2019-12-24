#include <iostream>

int main()
{
    EngineSettings settings = {"Test", true, true, 360, 640, 0, 32, 7, 1, 1};
    Engine engine(settings);
    int return_code = engine.start();
    return return_code;
}
