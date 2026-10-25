#pragma once

#include <SDL3/SDL.h>

namespace AurelEngine {

class Window {
public:
    Window(const char* title, int width, int height);
    ~Window();

    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;

    SDL_Window* getNativeWindow() const noexcept;

private:
    SDL_Window* window_ = nullptr;
};

}