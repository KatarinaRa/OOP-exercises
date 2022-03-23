#include <iostream>
#include "igrac.hpp"

using namespace std;

int main()
{
    int num;
    string name;
    cout << "Ime prvog igraca";
    cin >> name;
    Igrac i1;
    i1.setName(name);

    string choice;
    cout << "Unesite odabir:";
    cin >> choice;
    i1.setChoice(choice);

    cout << "Unesite broj";
    cin >> num;
    i1.setNumber(num);

    cout << "Ime drugog igraca";
    cin >> name;
    Igrac i2;
    i2.setName(name);

    if (i1.getChoice() == "nepar")
    {
        cout << "Preostali izbor " << i2.getName() << " je par";
        i2.setChoice("par");
    }
    else if (i1.getChoice() == "par")
    {
        cout << "Preostali izbor " << i2.getName() << " je nepar";
        i2.setChoice("nepar");
    }

    cout << "Unesite broj";
    cin >> num;
    i2.setNumber(num);

    int sum = i1.getNumber() + i2.getNumber();
    string winCh;
    if (sum % 2 == 0)
        winCh = "par";
    else
        winCh = "nepar";

    if (i1.getChoice() == winCh)
    {
        i1.setWin();
    }
    else if (i2.getChoice() == winCh)
    {
        i2.setWin();
    }

    if (i1.getWin())
        cout << "Pobijednik je " << i1.getName();
    else if (i2.getWin())
        cout << "Pobijednik je " << i2.getName();



}
