#include "Person.h"

Person::Person(const std::string& name) : name(name) {}

Json::Value Person::dump2JSON() const {
    Json::Value json;
    json["name"] = name;
    return json;
}
