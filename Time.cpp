#include "Time.h"

Time::Time(int hour, int minute) : hour(hour), minute(minute) {}

Json::Value Time::dump2JSON() const {
    Json::Value json;
    json["hour"] = hour;
    json["minute"] = minute;
    return json;
}
