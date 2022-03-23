#ifndef ZIVOTINJA_H
#define ZIVOTINJA_H
#include <iostream>
#include <string>

using namespace std;

class zivotinja{

    public:
        virtual int legs() = 0;
        virtual string vrstaz() = 0;
        virtual ~zivotinja() = 0;

};
#endif // ZIVOTINJA_H


