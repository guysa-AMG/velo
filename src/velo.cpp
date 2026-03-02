#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_video.h>
#include <iostream>
#include "velo.h"
#include <memory>

 Velo::Velo(){
  std::unique_ptr<VELO::Log> velog(new VELO::Log());

    if (!SDL_Init(SDL_INIT_VIDEO)){
        velog->fail("failed to initialize SDL3");
    }
    VeloWindow(SDL_CreateWindow("Welcome", 1500, 900, SDL_WINDOW_VULKAN|SDL_WINDOW_RESIZABLE));
    runningState = true;
    VeloEvent(SDL_Event());
     VeloRender(SDL_CreateRenderer(VeloWindow.get(),NULL));
    
}
void Velo::on_init(){
velog->fail("calling super method");

};
void Velo::setTitle(std::string title){
SDL_SetWindowTitle(VeloWindow,title.c_str());
}
void Velo::on_preFrame(){
    velog->pass("base called");
}
void Velo::setWindowSize(std::vector<int> sz){

}
void Velo::currentBackgroundColour(uint r ,uint g,uint b,uint a){

}
void Velo::on_EveryFrame(){

}
void Velo::privateFrame(){
    while (runningState){
       
        while(SDL_PollEvent(VeloEvent))
        {if ((*VeloEvent).type == SDL_EventType::SDL_EVENT_QUIT){
            runningState=false;
          
        }}
       
        SDL_SetRenderDrawColor(VeloRender,255,255,255,SDL_ALPHA_OPAQUE);
        
        SDL_RenderClear(VeloRender);
  
        SDL_RenderPresent(VeloRender);
    }
};

void Velo::registerComponent(Component child){

}

Velo::~Velo(){

delete VeloEvent;

SDL_DestroyRenderer(VeloRender);
SDL_DestroyWindow(VeloWindow);
velog->fail("Destroying objects and freeing memory");
}

    
    
