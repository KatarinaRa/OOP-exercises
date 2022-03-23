#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Watercraft.h"
#include "Aircraft.h"
#include "Catamaran.h"
#include "Seaplane.h"
#include "Ferry.h"
#include "Brojac.h"

using namespace std;

int main()
{

        Brojac br;
        Vehicle* v[] = {new Catamaran(30), new Ferry(10, 5, 1), new Seaplane(15)};
        size_t sz = sizeof v/sizeof v[0];

       for (unsigned i = 0; i < sz; ++i)
            br.add(v[i]);

       br.total();
        for (unsigned i = 0; i < sz; ++i)
            delete v[i];

}

