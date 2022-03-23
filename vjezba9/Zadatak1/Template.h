#ifndef TEMPLATE_H
#define TEMPLATE_H

using namespace std;

template<class T>
void printanje(T niz[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << niz[i] << ",";
    }
}

template<class T>
void sort(T niz[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(niz[i]>niz[j])
            {
                T t=niz[i];
                niz[i]=niz[j];
                niz[j]=t;
            }
        }
    }
}

void sort(char niz[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(tolower(niz[i]) > tolower(niz[j]))
            {
                char t=niz[i];
                niz[i]=niz[j];
                niz[j]=t;
            }
        }
    }
}

#endif // TEMPLATE_H

