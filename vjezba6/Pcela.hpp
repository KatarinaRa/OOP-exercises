#ifndef PCELA_HPP
#define PCELA_HPP
#include <string>

#include <iostream>
#include "Kukac.hpp"

using namespace std;

class Pcela : public Kukac{

    int brnogu;
    string vrsta;

public:
    Pcela() {
        brnogu = 6;
        vrsta = "Pcela";
    }
	int legs() {
        return brnogu;
     };
	string vrstaz() {
	    return vrsta;
    };
	~Pcela();

};
#endif // PAUK_H
