
#include "logger.h"
#include <iostream>
#include <string.h>

void Log::pass(std::string message){
    std::string annotation = green("[O] ");
    std::cout<< annotation<<message<<std::endl;
}
void Log::fail(std::string message){
    std::cout<<red("[x] ")<<message<<std::endl;
}
void Log::inform(std::string message){
    std::cout<<"[!] "<<message<<std::endl;
}


std::string Log::green(std::string string){
    std::string starter ="\033[92m";
    starter.append(string);
    starter.append("\033[00m");
    return starter;
}

std::string Log::red(std::string string){
    std::string starter ="\033[91m";
    starter.append(string);
     starter.append("\033[00m");
    return starter;
}
