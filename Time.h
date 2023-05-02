#ifndef TIME_H
#define TIME_H

#include "ecs36b_Common.h"

class Time {
public:
    Time(int hour, int minute);

    Json::Value dump2JSON() const;

private:
    int hour;
    int minute;
};

#endif // TIME_H
