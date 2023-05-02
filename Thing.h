#ifndef THING_H
#define THING_H

#include "ecs36b_Common.h"

class Thing {
public:
    Thing(const std::string& name);

    Json::Value dump2JSON() const;

private:
    std::string name;
};

#endif // THING_H

