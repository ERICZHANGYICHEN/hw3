#include "Thing.h"

Thing::Thing(const std::string& name) : name(name) {}

Json::Value Thing::dump2JSON() const {
    Json::Value json;
    json["name"] = name;
    return json;
}
