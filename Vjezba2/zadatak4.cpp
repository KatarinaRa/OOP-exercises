#include <iostream>


int zbroj(int* niz,int n)
{
    for(int i = 2; i < n; i++)
    {
        niz[i] = niz[i-1] + niz[i-2];
    }

}

int main()
{
    int* niz;
    int n=5;
    niz=new int[n];
    niz[0]=1,niz[1]=1;
    zbroj(niz,n);
    for(int i=0;i<n;i++)
    {
        std::cout<<niz[i] << ' ';
    }
    delete [] niz;
    niz=0;
}
