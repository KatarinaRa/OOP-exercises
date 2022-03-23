#include <iostream>
#include "header.hpp"
#include "oruzje.hpp"

using namespace std;


Oruzje::Oruzje(Tocka polozaj, int brojmetaka, int trenutnavrmetaka)
{
    this->polozaj = polozaj;
    this->brojmetaka = brojmetaka;
    this->trenutnavrmetaka = trenutnavrmetaka;
}
void Oruzje::settrenutnavrmetaka(int trenutnavrmetaka)
{
    this->trenutnavrmetaka = trenutnavrmetaka;
}
int Oruzje::gettrenutnavrmetaka()
{
    return trenutnavrmetaka;
}
int Oruzje::shoot() {
    if (trenutnavrmetaka == 0)
    {
        cout << "Prazno";
        return 0;

    }
    this->trenutnavrmetaka--;

}

void Oruzje::reload() {
    for (int i = trenutnavrmetaka; i < this->brojmetaka; i++)
    {
        this->trenutnavrmetaka++;

    }

}



