#pragma once
#include <iostream>
#include <vector>

using namespace std;


bool neg(int i)
{
	return (i < 0);
}

void provjera(const vector<int>& broj)
{
	auto it = find_if(broj.begin(), broj.end(), neg);
	if (it != broj.end())
		throw - 1;
}

bool veci(int i)
{
	return i > 100;
}

bool manjiod100(int i)
{
	return (i < 100);
}

struct silazno {
	bool operator() (int i, int j) {
		return i > j;
	}
};