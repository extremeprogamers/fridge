//
// Created by Marcin Włoczko on 2019-04-25.
//
#include "database.h"

using namespace std;

Database :: Database() {
}

bool Database :: add(string message) {
    storage.push_front(message);
    return true;
}

list<string> Database :: getAll() {
    return storage;
}