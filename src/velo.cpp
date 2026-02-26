#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_video.h>
#include <iostream>
#include "velo.h"


Velo::Velo(){
  velog = new VELO::Log();

    if (!SDL_Init(SDL_INIT_VIDEO)){
        velog->fail("failed to initialize SDL3");
    }
    VeloWindow =  SDL_CreateWindow("Welcome", 1500, 900, SDL_WINDOW_VULKAN|SDL_WINDOW_RESIZABLE);
    runningState = true;
    VeloEvent = new SDL_Event();
    VeloRender = SDL_CreateRenderer(VeloWindow,NULL);
}


void Velo::privateFrame(){
    while (runningState){
        on_preFrame();
        while(SDL_PollEvent(VeloEvent))
        {if ((*VeloEvent).type == SDL_EventType::SDL_EVENT_QUIT){
            runningState=false;
        }}
        on_postFrame();
        SDL_SetRenderDrawColor(VeloRender,255,255,255,SDL_ALPHA_OPAQUE);
        
        SDL_RenderClear(VeloRender);
  
        SDL_RenderPresent(VeloRender);
    }
};


Velo::~Velo(){

cleanup();

SDL_DestroyRenderer(VeloRender);

    SDL_DestroyWindow(VeloWindow);

    velog->fail("flow");
}

    
    
