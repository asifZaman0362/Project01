#include "MainState.hpp"
#include "System/ResourceManager.hpp"

MainState::MainState()
{
    Logger.Log("Started booting...");
}

MainState::~MainState()
{
    Logger.Log("Finished booting.");
}

bool MainState::OnInit()
{
    /*
    Load animation resources.
    Start a thread for loading required resources.
    For now, I will do it without threads because threads are a pain*/
    std::string config = ResourceManager::LoadConfigFile("bootAnimation.cfg");
    std::vector<std::string> lines = split(config, '/n');
    for (int i = 0; i < std::stoi(lines[0]); i++) {
        sf::Texture bootAnimSheet = ResourceManager::LoadTexture("bootAnimation" + std::itos(i) + ".png");
    }
    // This is scary. I haven't even run it (or compiled) once.
    // I should stop now.
    // I'll go write the base classes like utilities and stuff. No more of this crap.
    // I can't wait to see a million errors as I compile this shit.
    // Also, this editor fuckin sucks. Imma just use VS Code.
}

bool MainState::OnStart()
{
    //Start animation thread.
}

bool MainState::OnPause()
{
    Logger.LogWarning("Cannot pause/resume boot!");
    return false;
}

bool MainState::OnResume()
{
    Logger.LogWarning("Cannot pause/resume boot!");
    return false;
}

bool MainState::CleanUp()
{
    // Discard boot animation resources and free alloted memory.
    return true;
}
