#include "CommandParser.h"

#include <iostream>

using namespace std;

CommandParser::CommandParser(Database& db)
    : database(db)
{

}

void CommandParser::run()
{
    cout << endl;

    cout << "==========================================" << endl;
    cout << "        Welcome to RedisLite" << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Database Initialized Successfully." << endl;

    cout << endl;

    cout << "Command Parser coming in Volume 2..." << endl;
}