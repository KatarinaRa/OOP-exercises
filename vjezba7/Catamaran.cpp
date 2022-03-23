#include "Catamaran.h"
Catamaran::~Catamaran(){

}

unsigned Catamaran::passengers(){
    return this->NoPassengers;
}

void Catamaran::type()
{
    Watercraft::type();
}
