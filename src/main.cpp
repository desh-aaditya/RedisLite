#include <iostream>

#include "Logger.h"
#include "Database.h"
#include "CommandParser.h"

using namespace std;

int main()
{
    Logger::getInstance().info("RedisLite Starting...");

    Database database;

    CommandParser parser(database);

    parser.run();

    Logger::getInstance().info("RedisLite Closed.");

    return 0;
}