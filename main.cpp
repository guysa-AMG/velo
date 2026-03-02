#include "velo.h"
#include <iostream>

class MyGame:Velo{
public:
    void on_init()override{
    setTitle("Velo demo");
   
    };

    void on_postFrame(){}

    void on_preFrame(){
    
    }

    void on_EveryFrame(){}
    void cleanup(){

    }
};
int main(){
MyGame* game =new MyGame();
game->on_init();
game->on_preFrame();



}
