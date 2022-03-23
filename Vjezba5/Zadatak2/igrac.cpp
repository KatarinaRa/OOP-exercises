#include "Igrac.hpp"
using namespace std;

Igrac::Igrac()
{
    win = 0;
    number = 0;
    choice = "";
}

string Igrac::getName()
{
    return name;
}

void Igrac::setName(string n)
{
    name = n;
}

int Igrac::getWin()
{
    return win;
}

void Igrac::setWin()
{
    win = 1;
}

int Igrac::getNumber()
{
    return number;
}


void Igrac::setNumber(int num)
{
    number = num;
}

string Igrac::getChoice()
{
    return choice;
}

void Igrac::setChoice(string ch)
{
    choice = ch;
}

Igrac::~Igrac()
{

}
