#include <iostream>
#ifndef HEADER_H
#define HEADER_H

using namespace std;

class Tocka {
public:
    double duzina;
    double sirina;
    double visina;

    Tocka() {
        duzina = 0;
        sirina = 0;
        visina = 0;
    }
    Tocka(double duzina, double sirina, double visina) {
        this->duzina = duzina;
        this->sirina = sirina;
        this->visina = visina;
    }
    void setduzina(double duzina);
    double getduzina();
    void setsirina(double sirina);
    double getsirina();
    void setvisina(double visina);
    double getvisina();
    void setrandomduzina(int min, int max);
    void setrandomsirina(int min, int max);
    void setrandomvisina(int min, int max);
    void setrandom(int min, int max);
    double udaljenost2d(Tocka t);
    double udaljenost3d(Tocka t);
};
#endif
