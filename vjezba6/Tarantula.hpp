#ifndef TARANTULA_HPP
#define TARANTULA_HPP
#include <string>

#include "Pauk.hpp"
#include <iostream>

using namespace std;

class Tarantula : public Pauk
{
	int brnogu;
	string vrsta;

public:
	Tarantula() {
	    brnogu = 8;
        vrsta="Tarantula";
    }
	int legs(){
	    return brnogu;
    };
	string vrstaz() {
	     return vrsta;
    };
    ~Tarantula();
};
#endif // TARANTULA_HPP

