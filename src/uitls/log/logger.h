#ifndef LOG_H
#define LOG_H
#endif

#include <iostream>
#include <string.h>

class Log{

    public:
        void pass(char* message);
        void fail(char* message);
        void inform(char* message);
    private:
        std::string green(char* string);

        std::string red(char* string);
};