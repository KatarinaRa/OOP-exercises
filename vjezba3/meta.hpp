#include <iostream>
#include "header.hpp"

using namespace std;

class Meta{
    public:
        Tocka donjalijeva;
        Tocka gornjadesna;
        bool pogoden;

    void setdonjalijeva(int duzina, int sirina, int visina);
    Tocka getdonjalijeva();
    void setgornjadesna(int duzina, int sirina, int visina);
    Tocka getgornjadesna();
    void pogodeno(Oruzje gun,int* cnt);

};

