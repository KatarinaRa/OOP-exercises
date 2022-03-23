#include <iostream>
#include <cmath>


 struct krug{
    int a,b,r;

};
struct pravokutnik{
    int x,y,visina,sirina;
};
int sjeciste(krug& k,pravokutnik* p)
{
    int brojac=0;
    for(int i=0;i<3;i++)
    {
        int udaljenost = std::abs(k.a - p[i].x);
        int udaljenost1 = std::abs(k.b - p[i].y);
        if((udaljenost <= (p[i].sirina / 2)) || (udaljenost1 <= (p[i].visina / 2)))
            {
                brojac++;
            }

        else if((udaljenost > (p[i].sirina / 2 + k.r)) || (udaljenost1 > (p[i].visina / 2 + k.r)))
                 continue;
    }
    return brojac;

}
int main()
{
    krug k;
    std::cout<<"Unesite tocke a,b i radijus r"<<std::endl;
    std::cin>> k.a >> k.b >> k.r ;
    pravokutnik p[3];
    for(int i=0;i<3;i++)
    {
        std::cout<<"Unesite x,y, sirinu i visinu pravokutnika"<<std::endl;
        std::cin>>p[i].x >> p[i].y >> p[i].sirina >> p[i].visina;

    }
    int l=sjeciste(k,p);
    std::cout<< l <<std::endl;

}



