#include "Modules/AlertNonInteractive.hpp"
#include "System/inc/Logger.hpp"

using namespace TstBits;

AlertNonInteractive::AlertNonInteractive(int id)
{
    this->id = id;
    Logger::Log("Created a non-interactive alert with id " + this->id);
}

AlertNonInteractive::~AlertNonInteractive()
{
    Logger::Log("Destroyed the non-interactive alert with id " + this->id);
}

void AlertNonInteractive::Show(unsigned short int duration)
{
    // Move alert display to top
    // Register a new task with this->Hide() to be executed after 'duration' ms
}

void AlertNonInteractive::Hide()
{
    // Pop alert display
    this->Destroy();
}

void AlertNonInteractive::Destroy()
{
    // Release alloted memory if any
}