#include "SystemUI.hpp"

SystemUI::SystemUI()
{
    Logger.Log("Started system UI.");
}

SystemUI::~SystemUI()
{
    // Try to restart before forcing shutdown unless the system is already shutting down
    /*if (!System.SHUTTING_DOWN)
        if (!System.TryRestartSystemUI(-1))
            System.ForceShutdown(-1);*/
}

bool SystemUI::OnStart()
{
    // Load UI
    // Start Main State
    m_isRunning = true;
    return true;
}

bool SystemUI::OnPause()
{
    Logger.Log("Cannot pause/resume System UI!");
    return false;
}

bool SystemUI::OnResume()
{
    Logger.Log("Cannot pause/resume System UI!");
    return false;
}

bool SystemUI::OnStop(int code)
{
    Logger.Log("Stopping System UI with exit code " + code);
    ~SystemUI();
    return true;
}
