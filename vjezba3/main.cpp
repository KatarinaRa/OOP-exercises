#include <iostream>
#include "header.hpp"
#include "oruzje.hpp"
#include "meta.hpp"

using namespace std;
int main1()
{
    Tocka t(2, 3, 5);
    Tocka t1;
    t1.setrandom(2, 10);
    double u2d = t.udaljenost2d(t1);
    double u3d = t.udaljenost3d(t1);
    cout << "Udaljenost 2D je " << u2d << " " << "Udaljenost 3D je " << u3d<< endl;

    Oruzje o;
    Meta m1,m2,m3;
    m1.setdonjalijeva(5,7,3);
    m1.setgornjadesna(5,8,10);

    m2.setdonjalijeva(2,2,4);
    m2.setgornjadesna(5,4,8);

    m3.setdonjalijeva(6,7,1);
    m3.setgornjadesna(4,4,5);

    int cnt=0;
    m1.pogodeno(o,&cnt);
    m2.pogodeno(o,&cnt);
    m3.pogodeno(o,&cnt);

    cout << "pogodeno je " << cnt << " meta " << endl;

}
