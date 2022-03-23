#include <iostream>
#include "Template.h"

using namespace std;

int main()
{
    int niz[4]={20,40,10,30};
    sort(niz, 4);
    printanje(niz,4);

    char niz_ch[5]={'d','x','A','Z','l'};
    sort(niz_ch,5);
    printanje(niz_ch,5);
}

