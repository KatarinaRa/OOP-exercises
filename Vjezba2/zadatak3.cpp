#include <iostream>


int& referenca(int* niz, int i)
{
    return niz[i];
}
int main()
{
    int niz[]={2,5,4,8,9};
    int i=1;
    referenca(niz,i)+=1;
    for(int i=0;i<5;i++)
    {
       std::cout<<niz[i] << ' ';
    }
}
