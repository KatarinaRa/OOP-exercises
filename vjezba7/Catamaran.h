#ifndef CATAMARAN_H
#define CATAMARAN_H
#include "Watercraft.h"
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Catamaran :  public Watercraft
{
    unsigned NoPassengers;
public:
    Catamaran();
    Catamaran(unsigned NoPassengers)
    {
        this->NoPassengers=NoPassengers;
    }
    unsigned passengers() override;
    void type() override;
    ~Catamaran();
};


#endif // CATAMARAN_H
