#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Players
{
	int col;
	string fname;
	string lname;
	string country;
	int match;
	int doublef;
};

ostream& operator<<(ostream& os, const Players& p)
{
	return os << p.col << " " << p.fname << " " << p.lname << " " << p.country << (double)p.doublef / (double)p.match;
}

istream& operator>>(istream& is, Players& p)
{
	return is >> p.col >> p.fname >> p.lname >> p.country >> p.match >> p.doublef;
}

bool viseod4(const Players& p)
{
	return ((float)p.doublef / (float)p.match) > 4;
}


bool min(const Players& p1, const Players& p2)
{
	return ((float)p1.doublef / (float)p1.match) < ((float)p2.doublef / (float)p2.match);
}

bool dvostruke(const Players& p1, const Players& p2)
{
	return (float)p1.doublef / (float)p1.match < (float)p2.doublef / (float)p2.match;
}

