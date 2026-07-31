#pragma once

#include "Database.h"

class CommandParser
{
private:

    Database& database;

public:

    CommandParser(Database& db);

    void run();
};