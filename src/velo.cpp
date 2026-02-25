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

    SDL_Window* window =  SDL_CreateWindow("Welocome", 1500, 900, SDL_WINDOW_VULKAN|SDL_WINDOW_RESIZABLE);



    bool running = true;
    SDL_Event event = SDL_Event();

    SDL_Renderer* render = SDL_CreateRenderer(window,NULL);

    while (running){
        while(SDL_PollEvent(&event))
        {if (event.type == SDL_EventType::SDL_EVENT_QUIT){
            running=false;
        }}
        SDL_SetRenderDrawColor(render,255,255,255,SDL_ALPHA_OPAQUE);
        
        SDL_RenderClear(render);
  
        SDL_RenderPresent(render);
    }
    SDL_DestroyRenderer(render);

    SDL_DestroyWindow(window);

    log->fail("flow");
    
}
