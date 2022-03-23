#ifndef FERRY_H
#define FERRY_H
#include "Watercraft.h"
#include <iostream>
#include <string>

using namespace std;

class Ferry : public Watercraft
{
    unsigned NoPassengers;
    int automobil;
    int biciklo;
public:
  Ferry(unsigned NoPassengers, int automobil, int biciklo)
    {
        this->NoPassengers=NoPassengers;
        this->automobil=automobil;
        this->biciklo=biciklo;

    }
    unsigned passengers() override;
    void type() override;
   ~Ferry();
};
#endif // FERRY_H
