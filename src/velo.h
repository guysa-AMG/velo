#ifndef VELO_H
#define VELO_H
#include <SDL3/SDL_video.h>
#endif

#include <vector>
#include <SDL3/SDL.h>
#include <iostream>
#include "component.h"
#include "logger.h"
#include <memory>

class Velo{
    
    private:
        VELO::Log* velog;
        std::unique_ptr<SDL_Window> VeloWindow;
        std::unique_ptr<SDL_Renderer> VeloRender;
        SDL_Event* VeloEvent;
        bool runningState;
        void privateFrame();


    public:
        Velo(); 
        virtual 0void on_init()=0;

        virtual void on_preFrame()=0;

        virtual void on_postFrame()=0;

        virtual void on_EveryFrame();

        void registerComponent(Component comp);

        void setTitle(std::string title);

        void setWindowSize(std::vector<int> sz);

        void currentBackgroundColour(uint r ,uint g,uint b ,uint a);
        
        virtual void cleanup()=0;
        ~Velo();
        
};