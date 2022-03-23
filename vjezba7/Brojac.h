#ifndef BROJAC_H
#define BROJAC_H
#include "Vehicle.h"
#include <string>
#include <iostream>
#include <string>

using namespace std;

class Brojac
{
public:
    unsigned count = 0;
    void add(Vehicle* v);
    void total();
};
#endif // BROJAC_H

