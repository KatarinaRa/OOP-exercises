#include "Seaplane.h"

Seaplane::~Seaplane()
{

}
unsigned Seaplane::passengers(){
    return NoPassengers;
}


void Seaplane::type(){

    Aircraft::type();
    cout << "-";
    Watercraft::type();
}

