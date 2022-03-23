#include <iostream>
#include "header.hpp"

using namespace std;

class Oruzje {
public:
    Tocka polozaj;
    int brojmetaka;
    int trenutnavrmetaka;

    Oruzje() {
        polozaj.setduzina(2);
        polozaj.setsirina(4);
        polozaj.setvisina(6);
        brojmetaka = 5;
        trenutnavrmetaka = 5;

    }
    Oruzje(Tocka polozaj, int brojmetaka, int trenutnavrmetaka);
    void settrenutnavrmetaka(int trenutnavrmetaka);
    int gettrenutnavrmetaka();
    int shoot();
    void reload();
};
