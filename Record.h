#ifndef RECORD_H
#define RECORD_H

#include "ecs36b_Common.h"
#include "Thing.h"
#include "GPS.h"
#include "Time.h"
#include "Person.h"

class Record {
public:
    Record(const Time& t, const GPS& gps, const Person& p, const Thing& thing);
    Json::Value dump2JSON() const;

private:
    Time time;
    GPS gps;
    Person person;
    Thing thing;
};

#endif // RECORD_H
