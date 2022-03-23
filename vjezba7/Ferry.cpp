#include "Ferry.h"
Ferry::~Ferry(){

}
unsigned Ferry::passengers() {


    return NoPassengers+automobil+biciklo;

}

void Ferry::type()
{
    Watercraft::type();
}
