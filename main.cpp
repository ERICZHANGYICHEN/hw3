#include <iostream>
#include "Time.h"
#include "GPS.h"
#include "Person.h"
#include "Thing.h"
#include "Record.h"

int main() {
    // Create the four records
    Record record1(Time(18, 0), GPS(38.5371, -121.7532), Person("Alice"), Thing("Classroom"));
    Record record2(Time(18, 10), GPS(38.5420, -121.7569), Person("Bob"), Thing("Silo Station"));
    Record record3(Time(18, 20), GPS(38.5802, -121.4904), Person("Charlie"), Thing("8th and J Street"));
    Record record4(Time(18, 32), GPS(38.5449, -121.7484), Person("Dave"), Thing("Moore and Pollock"));

    // Dump each record to JSON and print it
    std::cout << "Record 1:\n" << record1.dump2JSON() << '\n';
    std::cout << "Record 2:\n" << record2.dump2JSON() << '\n';
    std::cout << "Record 3:\n" << record3.dump2JSON() << '\n';
    std::cout << "Record 4:\n" << record4.dump2JSON() << '\n';

    return 0;
}
