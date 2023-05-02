#ifndef GPS_H
#define GPS_H

#include "ecs36b_Common.h"

class GPS {
public:
    GPS(double latitude, double longitude);

    Json::Value dump2JSON() const;

private:
    double latitude;
    double longitude;
};

#endif // GPS_H
