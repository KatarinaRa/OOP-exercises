#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "header.hpp"

using namespace std;


void Tocka::setduzina(double duzina) {
    this->duzina = duzina;
}
double Tocka::getduzina()
{
    return duzina;
}
void Tocka::setsirina(double sirina) {
    this->sirina = sirina;
}
double Tocka::getsirina()
{
    return sirina;
}
void Tocka::setvisina(double visina) {
    this->visina = visina;
}
double Tocka::getvisina()
{
    return visina;
}
void Tocka::setrandomduzina(int min, int max)
{
    srand(time(0));
    double a = (double)rand() / RAND_MAX;
    this->duzina = min + a * (max - min);

}
void Tocka::setrandomsirina(int min, int max)
{
    srand(time(0));
    double b = (double)rand() / RAND_MAX;
    this->sirina = min + b * (max - min);

}
void Tocka::setrandomvisina(int min, int max)
{
    srand(time(0));
    double c = (double)rand() / RAND_MAX;
    this->visina = min + c * (max - min);

}
void Tocka::setrandom(int min, int max)
{
    srand(time(0));

    double a = (double)rand() / RAND_MAX;
    this->duzina = min + a * (max - min);

    double b = (double)rand() / RAND_MAX;
    this->sirina = min + b * (max - min);

    double c = (double)rand() / RAND_MAX;
    this->visina = min + c * (max - min);

}
double Tocka::udaljenost2d(Tocka t)
{
    return sqrt(pow(t.getduzina() - this->duzina, 2) + pow(t.getsirina() - this->sirina, 2) * 1.0);
}
double Tocka::udaljenost3d(Tocka t)
{

    return sqrt(pow((t.getduzina() - this->duzina), 2) + pow((t.getsirina() - this->sirina), 2) + pow((t.getvisina() - this->visina), 2));
}
