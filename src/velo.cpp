#include <SDL3/SDL.h>
#include <iostream>
#include "./build/utils/logger/logger.h"

int main(int argc,char** argv){
    Log* log = new Log();

    log->pass("Go Bro");
}
