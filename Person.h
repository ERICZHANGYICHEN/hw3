#ifndef PERSON_H
#define PERSON_H

#include "ecs36b_Common.h"

class Person {
public:
    Person(const std::string& name);

    Json::Value dump2JSON() const;

private:
    std::string name;
};

#endif // PERSON_H
