#ifndef PAUK_H
#define PAUK_H
#include <string>

#include <iostream>
#include "zivotinja.hpp"

class Pauk : public zivotinja{

public:

	virtual int legs() = 0;
	virtual string vrstaz() = 0;
	virtual ~Pauk() = 0;

};
#endif // PAUK_H
