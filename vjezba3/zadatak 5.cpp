#include <iostream>
#include "header.hpp"
#include "oruzje.hpp"
#include "meta.hpp"
void Meta::setdonjalijeva(int duzina, int sirina, int visina){

    this->donjalijeva.duzina= duzina;
    this->donjalijeva.sirina= sirina;
    this->donjalijeva.visina= visina;
}
Tocka Meta::getdonjalijeva(){

    return donjalijeva;
}

void Meta::setgornjadesna(int duzina, int sirina, int visina){

    this->gornjadesna.duzina= duzina;
    this->gornjadesna.sirina= sirina;
    this->gornjadesna.visina= visina;


}
Tocka Meta::getgornjadesna(){

        return gornjadesna;
}
void Meta::pogodeno(Oruzje gun,int* cnt){

    if(gun.polozaj.visina > this->donjalijeva.visina && gun.polozaj.visina < this->gornjadesna.visina)
    {
        *cnt = *cnt+1;

    }
}
