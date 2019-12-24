#include "Modules/AlertInteractive.hpp"
#include "System/inc/Logger.hpp"

using namespace TstBits;

AlertInteractive::AlertInteractive(int id) {
    this->id = id;
    Logger::Log("Created an interactive alert with id " + id);
}

AlertInteractive::~AlertInteractive() {
    Logger::Log("Destroyed interactive alert with id " + this->id);
}

void AlertInteractive::Show()
{
    // Push alert display to top
    // Start grabbing input from the current displayed widgets
}

void AlertInteractive::Hide()
{
    // Move alert display to bottom
}

void AlertInteractive::Destroy()
{
    // Pop alert display
    // Stop input grabbing
    // Destroy background process and updates
    AlertInteractive::~AlertInteractive();
}

