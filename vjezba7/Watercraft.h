#ifndef WATERCRAFT_H
#define WATERCRAFT_H
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Watercraft : virtual public Vehicle{
public:

   void type(){
       cout << "Water,";
   }
   unsigned passengers(){
    return 0;
   }

    ~Watercraft();


};

#endif // WATERCRAFT_H
