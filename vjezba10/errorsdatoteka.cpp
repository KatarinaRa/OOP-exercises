#include "errorsdatoteka.h"

Errorsdatoteka::Errorsdatoteka(string d, string error)
{
	ofstream os("errors.log", std::ios_base::out | std::ios_base::app);
	os << d << error << endl;
}
