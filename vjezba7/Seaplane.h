#ifndef SEAPLANE_H
#define SEAPLANE_H
#include "Watercraft.h"
#include "Aircraft.h"
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Seaplane : public Watercraft, public Aircraft
{
    unsigned NoPassengers;
public:
   Seaplane(unsigned NoPassengers)
    {
        this->NoPassengers=NoPassengers;
    }
    unsigned passengers() override;
    void type() override;
   ~Seaplane();
};

#endif // SEAPLANE_H
