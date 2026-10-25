#include <AurelEngine/Engine.hpp>
#include <devy/Window.hpp>

#include <SDL3/SDL.h>

#include <exception>
#include <iostream>

namespace AurelEngine
{
void Engine::Run() const
{
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        std::cerr << "SDL initialization failed: "
                  << SDL_GetError() << '\n';
        return;
    }

    try
    {
        {
            Window window("AurelEngine", 1280, 720);

            std::cout << "AurelEngine started successfully.\n";

            bool running = true;
            SDL_Event event{};

            while (running)
            {
                while (SDL_PollEvent(&event))
                {
                    if (event.type == SDL_EVENT_QUIT)
                    {
                        running = false;
                    }
                }
            }
        } // Fereastra este distrusă aici.
    }
    catch (const std::exception& error)
    {
        std::cerr << "Engine error: " << error.what() << '\n';
    }

    SDL_Quit();
}
} // namespace AurelEngine