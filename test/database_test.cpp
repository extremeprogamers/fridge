//
// Created by Marcin Włoczko on 2019-04-25.
//

#include "gtest/gtest.h"
#include <string>
#include <list>
#include "../src/database.h"

using namespace std;

string message1 = "Message 1";
string message2 = "Message 2";

TEST(database, add) {
    Database database;
    bool result = database.add(message1);
    ASSERT_TRUE(result);
}

TEST(database, getAll) {
    Database database;
    database.add(message1);
    list<string> result = database.getAll();
    ASSERT_EQ(result.size(), 1);
}







