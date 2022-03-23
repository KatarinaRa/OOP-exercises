#include "trokut.h"
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <iostream>
#include "funkcije.h"

using namespace std;

int main()

{
	vector<int> vect1 = gen();
	vector<int> vect2 = gen();

	vpb(vect1, 2);
	vpb(vect1, 3);
	vpb(vect1, 4);
	vpb(vect1, 6);
	vpb(vect1, 12);

	vpb(vect2, 2);
	vpb(vect2, 2);
	vpb(vect2, 4);
	vpb(vect2, 6);
	vpb(vect2, 1);

	vector<int> vect3;

	razlika(vect1, vect2,vect3);
	print(vect3);


	string str = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .";
	izbrisi(str);
	cout << str << endl;


    list<string>str1;
	list<string>niz;
	str1.push_back("Katarina Ramljak!");
	str1.push_back("Programming in C++");
	str1.push_back("Jedva cekam zavrsit ovu vjezbu.");
	int broj = br_znakova(str1);
	cout <<"broj znakova: " << broj << endl;
	double d = prosjek(str1);
	cout << "Prosjek:" <<d << endl;
	delete_najveci(str1);
	for (list<string>::iterator it = str1.begin(); it != str1.end(); it++)
    {
        cout << *it << endl;
    }

    Trokut t;
    t.unos();
    t.najveci();


}
