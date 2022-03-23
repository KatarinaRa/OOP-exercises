#include <iostream>
#include <string>
#include "zivotinja.hpp"
#include "Kukac.hpp"
#include "Pauk.hpp"
#include "Ptica.hpp"
#include "Tarantula.hpp"
#include "Gavran.hpp"
#include "Pcela.hpp"
#include "Brojac.hpp"

using namespace std;

int main()
{
    zivotinja* niz[] = { new Pcela, new Tarantula, new Gavran };
	Brojac br;
	for (int i = 0; i < 3; i++)
	{
		br.Vrsta(niz[i]->legs(), niz[i]->vrstaz());
	}

	br.Zbroj();
}
