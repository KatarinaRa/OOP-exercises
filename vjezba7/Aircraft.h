#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Aircraft : virtual public Vehicle {
public:
    void type(){
       cout << "Air";
   }
    unsigned passengers(){
        return 0;
    }
   ~Aircraft();

};

#endif // AIRCRAFT_H

