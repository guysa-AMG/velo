#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_video.h>
#include <iostream>
#include "logger.h"

int main(int argc,char** argv){
    Log* log = new Log();

    if (!SDL_Init(SDL_INIT_VIDEO)){
        return -1;
    }

    SDL_Window* window =  SDL_CreateWindow("const char *title", 500, 250, SDL_WINDOW_ALWAYS_ON_TOP);



    bool running = true;
    SDL_Event event = SDL_Event();
    while (running){
        SDL_PollEvent(&event);
        if (event.type == SDL_EventType::SDL_EVENT_QUIT){
            running=false;
        }
    }
    log->fail("flow");
}
