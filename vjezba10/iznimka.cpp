#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "iznimka.h"
#include "errorsdatoteka.h"
#include <ctime>
#include<limits>

using namespace std;

int broj()
{

	int br;
	cin >> br;
	if(cin.fail())
         throw NotNum();
    return br;
}

char op()
{
    char opr;
    cin >> opr;
    if (opr != '+' && opr != '-' && opr != '*' && opr != '/')
            throw Operacija();
}

double rez(int a, char opr, int b)
{
    if (opr== '/' && b == 0)
		throw ZeroDevide();
	else if (opr == '+')
		return (double)a + (double)b;
	else if (opr == '-')
		return (double)a - (double)b;
	else if (opr == '*')
		return (double)a * (double)b;
	else
		return (double)a / double(b);

}
int main(){

    while (1)
	{
		try
		{
			int a = broj();
			char oper = op();
			int b = broj();
			int rezulat = rez(a,oper,b);
			cout << a << oper << b << "=" << rezulat << endl;
		}
		catch (MathErr& me)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			string error = me.ShowError();
			cout << error << endl;

			time_t now = time(0);
			char* d = ctime(&now);
			Errorsdatoteka errorsdatoteka(d, error);
		}
		catch(...)
		{
		    cout<<"Greska..."<<endl;
		}
	}
}

