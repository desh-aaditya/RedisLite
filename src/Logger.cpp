#include "Logger.h"

#include <iostream>

using namespace std;

Logger& Logger::getInstance()
{
    static Logger logger;

    return logger;
}

void Logger::info(const string& msg)
{
    cout << "[INFO] " << msg << endl;
}

void Logger::warning(const string& msg)
{
    cout << "[WARNING] " << msg << endl;
}

void Logger::error(const string& msg)
{
    cout << "[ERROR] " << msg << endl;
}