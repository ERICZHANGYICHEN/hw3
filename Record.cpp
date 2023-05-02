#include "Record.h"

Record::Record(const Time& t, const GPS& gps, const Person& p, const Thing& thing)
    : time(t), gps(gps), person(p), thing(thing) {}

Json::Value Record::dump2JSON() const {
    Json::Value json;
    json["time"] = time.dump2JSON();
    json["gps"] = gps.dump2JSON();
    json["person"] = person.dump2JSON();
    json["thing"] = thing.dump2JSON();
    return json;
}
