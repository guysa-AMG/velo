#ifndef LOGGER_H
#define LOGGER_H
#endif

#include <iostream>
#include <string.h>

class Log{

    public:
        void pass(std::string message);
        void fail(std::string message);
        void inform(std::string message);
    private:
        std::string green(std::string string);

        std::string red(std::string string);
};