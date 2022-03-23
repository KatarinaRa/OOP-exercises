#ifndef PTICA_HPP
#define PTICA_HPP
#include <string>

#include <iostream>
#include "zivotinja.hpp"

using namespace std;

class Ptica : public zivotinja{

public:
    virtual int legs() = 0;
	virtual string vrstaz() = 0;
	virtual ~Ptica() = 0;

};
#endif // PTICA_H
