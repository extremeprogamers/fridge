//
// Created by Marcin Włoczko on 2019-04-25.
//


#ifndef FRIDGE1_DATABASE_H
#define FRIDGE1_DATABASE_H

#include <string>
#include <list>

using namespace std;

class Database {
private:
    list<string> storage;

public:
    Database();
    bool add(string message);
    list<string> getAll();
};

#endif //FRIDGE1_DATABASE_H
