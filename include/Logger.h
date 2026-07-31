#pragma once

#include <string>

class Logger
{
public:

    static Logger& getInstance();

    void info(const std::string& msg);

    void warning(const std::string& msg);

    void error(const std::string& msg);

private:

    Logger() = default;

    Logger(const Logger&) = delete;

    Logger& operator=(const Logger&) = delete;
};