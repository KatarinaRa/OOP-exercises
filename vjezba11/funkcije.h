#include "trokut.h"
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;

void vpb(vector <int>& vect, int num) {

	vect.push_back(num);

}

vector<int> gen(){

	vector<int> vect(5);
	return vect;

}


void print(vector<int> vect)

{
    vector<int>::iterator it;

	for (it = vect.begin(); it != vect.end(); it++)
    {
        cout << *it << endl;
    }

}


vector <int> razlika(vector<int>& vect1, vector<int>& vect2, vector<int>& vect3) {

	vector<int>::iterator it;

	for (it = vect1.begin(); it != vect1.end(); it++)

	{

		if (!(count(vect2.begin(), vect2.end(), *it)))

		{

			vect3.push_back(*it);

		}

	}

}


void izbrisi(string& str) {

	for (int i=0; i < str.size();i++) {

		if ((str[i] == ' ') && (str[i+1] == '.' || str[i+1] == ',')) {

			str.erase(i,1);

		}

	}

	for (int i=0; i < str.size();i++) {

        if ((str[i+1] != ' ') && (str[i]  == '.' || str[i] == ',')) {

				//str.insert(i+1,' ');

			}
	}

}



int br_znakova(list<string>& str) {

	int brojac = 0;
    list<string>::iterator it;
	for (it = str.begin(); it != str.end(); it++) {

		brojac += (*it).length();

	}

	return brojac;

}



double prosjek(list<string>& str) {

	int sz = 0;
	list<string>::iterator it;
	for (it = str.begin(); it != str.end(); it++) {

		for (int j = 0; j < (*it).length() - 1; j++) {

			if ((*it)[j] == ' ') {

				sz++;
			}

		}

	}
    double prs = (double)br_znakova(str) / sz;
    return prs;


}



void delete_najveci(list<string>& str) {

	string najveci = "";
    list<string>::iterator it;
	for (it = str.begin(); it != str.end(); it++) {

		if ((*it).length() > najveci.length()) {

			najveci = *it;

		}

	}

	str.remove(najveci);

}



void Trokut::unos() {

	Trokut t1,t2,t3;
    cout << "unesite a,b i c stranice prvog trokuta" << endl;
    cin >> t1.a >> t1.b >> t1.c;

    cout << "unesite a,b i c stranice drugog trokuta" << endl;
    cin >> t2.a >> t2.b >> t2.c;

    cout << "unesite a,b i c stranice trećeg trokuta" << endl;
    cin >> t3.a >> t3.b >> t3.c;

    trokuti.push_back(t1);
    trokuti.push_back(t2);
    trokuti.push_back(t3);

}

int Trokut::opseg(Trokut t)
{
    return t.a+t.b+t.c;
}

void Trokut::najveci() {

    int max = 0;
    vector<Trokut>::iterator it;
    Trokut najveci_tr;
    for (it = trokuti.begin(); it != trokuti.end(); it++)
    {
        if(opseg(*it)>max)
        {
            max=opseg(*it);
            najveci_tr = *it;
        }
    }

    cout << "najveci trokut a: " << najveci_tr.a << " b: " << najveci_tr.b << " c: " << najveci_tr.c << endl;


}


