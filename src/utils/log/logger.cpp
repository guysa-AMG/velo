
#include "logger.h"
#include <iostream>
#include <string.h>

void VELO::Log::pass(std::string message){
    std::string annotation = green("[O] ");
    std::cout<< annotation<<message<<std::endl;
}
void VELO::Log::fail(std::string message){
    std::cout<<red("[x] ")<<message<<std::endl;
}
void VELO::Log::inform(std::string message){
    std::cout<<"[!] "<<message<<std::endl;
}


std::string VELO::Log::green(std::string string){
    std::string starter ="\033[92m";
    starter.append(string);
    starter.append("\033[00m");
    return starter;
}

std::string VELO::Log::red(std::string string){
    std::string starter ="\033[91m";
    starter.append(string);
     starter.append("\033[00m");
    return starter;
}
