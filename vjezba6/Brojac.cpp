#include "Brojac.hpp"
#include <string>
#include <iostream>
using namespace std;

Brojac::Brojac()
{
	zbroj = 0;
}

void Brojac::Vrsta(int brnogu, string vrsta)
{

	cout << "Dodan: " << vrsta << endl;
	zbroj= zbroj + brnogu;

}

void Brojac::Zbroj()
{
	cout << "Ukupan broj nogu: " << zbroj;
}
