#include <iostream>

using namespace std;

class money{
    int kn;
    int lp;

public:
    money();
    money(int kn,int lp);
    money(int kn);
    ~money();

    void set_Kn(int kn);
    int get_Kn();
    void set_Lp(int lp);
    int get_Lp();

    money operator+ (money& m);
    money operator-(money& m);
	money operator+= (money& m);
	money operator-= (money& m);

	friend ostream& operator<< (ostream& ost,money& m);

	operator double();

};
