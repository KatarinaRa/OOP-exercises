#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle{
public:
    virtual void type() = 0;
    virtual unsigned passengers() = 0;
    virtual ~Vehicle() = 0;

};

#endif // VEHICLE_H
