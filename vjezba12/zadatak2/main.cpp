#include <iostream>
#include "array.h"

using namespace std;

int main()
{
	Array<short, 10> a(4);
	a[0] = a[2] += 5;
	ostream_iterator<short> os(cout, " ");
	copy(a.begin(), a.end(), os);
}

