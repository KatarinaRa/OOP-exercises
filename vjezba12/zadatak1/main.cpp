#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream> 
#include <string>
#include "players.h"


using namespace std;
int main()
{
	vector<Players>igraci;
	ifstream f("winbledon_double_faults.txt");
	istream_iterator<Players> is(f), ends;
	copy(is, ends, back_inserter(igraci));

	igraci.erase(remove_if(igraci.begin(), igraci.end(), viseod4), igraci.end());

	auto minit = min_element(igraci.begin(), igraci.end(), min);
	cout << "Igrac s najmanje dvostrukih:" << minit->fname << " " << minit->lname << endl;


	sort(igraci.begin(), igraci.end(), dvostruke);

	cout << "Igracice poredane po broju pogresaka: " << endl;

	ostream_iterator<Players>os(cout, "\n");
	copy(igraci.begin(), igraci.end(), os);
}