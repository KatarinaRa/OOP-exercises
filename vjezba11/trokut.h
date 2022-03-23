#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

class Trokut {
public:
    int a,b,c;
    vector<Trokut> trokuti;
	void unos();
	void print();
	int opseg(Trokut t);
	void najveci();

};




