#include "GPS.h"

GPS::GPS(double latitude, double longitude) : latitude(latitude), longitude(longitude) {}

Json::Value GPS::dump2JSON() const {
    Json::Value json;
    json["latitude"] = latitude;
    json["longitude"] = longitude;
    return json;
}
