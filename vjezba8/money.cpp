#include <iostream>
#include "money.h"

using namespace std;

money::money()
{
    this->kn=0;
    this->lp=0;
}

money::money(int kn,int lp)
{
    this->kn=kn;
    this->lp=lp;
}

money::money(int kn)
{
    this->kn=kn;
    this->lp=0;

}

void money::set_Kn(int kn)
{
    this->kn=kn;
}

int money::get_Kn(){
    return kn;
}

void money::set_Lp(int lp)
{
    this->lp=lp;
}

int money::get_Lp()
{
    return lp;
}

money money::operator + (money& m)
{
    return money(kn + m.kn, lp + m.lp);
}

money money::operator - (money& m)
{
    return money(kn - m.kn, lp - m.lp);
}

money money::operator+=(money& m)
{
	money receipt(kn += m.kn, lp += m.lp);
	if (lp > 100)
	{
		kn++;
		lp = lp - 100;
	}
	return receipt;
}

money money::operator-=(money& m)
{
	return money(kn -= m.kn, lp -= m.lp);
}

ostream& operator << (ostream& ost, money& m)
{
    cout <<"Ukupan iznos racuna je:" << m.kn<<" "<< "kuna" << ","<< " " << m.lp<< " " << "lipa" << endl;
	return ost;
}
money::operator double()
{
	return kn + lp / 100;
}

money::~money()
{
}
