#ifndef VELO_H
#define VELO_H
#include <SDL3/SDL_video.h>
#endif
#include <vector>
#include <SDL3/SDL.h>
#include <iostream>

class Velo{
    private:
    SDL_Window* mainWindow;
    public:
    void setTitle(std::string title);
    void setWindowSize(std::vector2 sz);
    void paintWindow();
    
}