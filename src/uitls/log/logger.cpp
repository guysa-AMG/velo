
#include "logger.h"
#include <iostream>
#include <string.h>

void Log::pass(char* message){
    std::cout<<green("[O]")<<message<<std::endl;
}
void Log::fail(char* message){
    std::cout<<red("[x]")<<message<<std::endl;
}
void Log::inform(char* message){
    std::cout<<"[!]"<<message<<std::endl;
}


std::string Log::green(char* string){
    std::string starter ="\033[92m";
    starter.append(string);
    starter ="\033[00m";
    return starter;
}

std::string Log::red(char* string){
    std::string starter ="\033[91m";
    starter.append(string);
    starter ="\033[00m";
    return starter;
}
