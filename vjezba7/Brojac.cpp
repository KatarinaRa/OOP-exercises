#include "Brojac.h"
#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

void Brojac::add(Vehicle* v){
    unsigned pass = v->passengers();
    v->type();
    cout << "putnika:" << pass << endl;
    count = count + pass;


}

void Brojac::total()
{
    cout << "Ukupan broj putnika: "<< count;
}

