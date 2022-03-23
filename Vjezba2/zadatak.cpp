#include <iostream>
void najveci_najmanji(int (&niz)[6],int& min, int& max)
{
    int n=6;
    for(int i=0;i<n;i++)
    {
        if(niz[i]>max)
            max=niz[i];
    }
    for (int i=0;i<n;i++)
    {
        if(niz[i]<min)
            min=niz[i];
    }
}

int main()
{
    int niz[6]={47,2,1,15,100,13};
    int min=niz[0],max=niz[0];
    najveci_najmanji(niz,min,max);
    std::cout <<"Najmanji je" << ' ' << min<< ' ' << "Najveci je" << ' ' << max << std::endl;
}
