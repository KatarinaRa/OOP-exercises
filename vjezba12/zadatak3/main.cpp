#include <iostream>	
#include <algorithm>
#include <fstream>
#include <vector>
#include <algorithm>
#include <istream>
#include <iostream>
#include "functions.h"

int main()
{
	vector<int>broj;
	ifstream f("num.txt");
	istream_iterator<int> is(f), ends;
	copy(is, ends, back_inserter(broj));

	try
	{
		provjera(broj);
	}
	catch (int)
	{
		cout << "Broj nije prirodan!" << endl;
		exit(1);
	}

	cout << "Brojevi veci od 100:" << endl << count_if(broj.begin(), broj.end(), veci) << endl;

	broj.erase(remove_if(broj.begin(), broj.end(), manjiod100), broj.end());

	sort(broj.begin(), broj.end(), silazno());

	ostream_iterator<int>os(cout, "\n");
	copy(broj.begin(), broj.end(), os);


}
