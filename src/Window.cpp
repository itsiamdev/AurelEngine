#include <devy/Window.hpp>

#include <stdexcept>

namespace AurelEngine {

Window::Window(const char* title, int width, int height) {
    if (!SDL_InitSubSystem(SDL_INIT_VIDEO)) {
        throw std::runtime_error(SDL_GetError());
    }

    window_ = SDL_CreateWindow(title, width, height, 0);

    if (window_ == nullptr) {
        const std::runtime_error error(SDL_GetError());
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
        throw error;
    }
}

Window::~Window() {
    if (window_ != nullptr) {
        SDL_DestroyWindow(window_);
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    }
}

SDL_Window* Window::getNativeWindow() const noexcept {
    return window_;
}

}