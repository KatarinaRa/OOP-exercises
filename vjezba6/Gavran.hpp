#ifndef GAVRAN_HPP
#define GAVRAN_HPP

#include <string>
#include "Ptica.hpp"
#include <iostream>

using namespace std;

class Gavran : public Ptica
{
	int brnogu;
	string vrsta;

public:
    Gavran()
    {
        brnogu = 2;
        vrsta = "Gavran";
    }
	int legs() {
	    return brnogu;
    };
	string vrstaz()
	 {
	     return vrsta;
    };
	~Gavran();
};

#endif // GAVRAN_HPP

