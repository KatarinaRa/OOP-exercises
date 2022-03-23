#ifndef KUKAC_H
#define KUKAC_H
#include <string>
#include <iostream>
#include "zivotinja.hpp"

using namespace std;

class Kukac : public zivotinja{
public:
    virtual int legs() = 0;
	virtual string vrstaz() = 0;
	virtual ~Kukac() = 0;

};
#endif // KUKAC_H
