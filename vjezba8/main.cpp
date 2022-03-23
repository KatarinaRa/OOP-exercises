#include <iostream>>
#include "money.h"

using namespace std;

int main()
{
    money juha(11,30), becki(15,50), salata(10), pivo(15), babic(16,40);
    money receipt = juha + becki + salata + pivo;

    receipt -=pivo;
    receipt += babic;

    cout << receipt << endl;
}
