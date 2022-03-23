#include <iostream>

struct vektor
{
    int* niz;
    int f;
    int l;
};

void vector_new(vektor& v)
{
    v.niz = new int(6);
    v.f = 1;
    v.l = 0;
}

void vector_delete(vektor& v)
{
    delete[] v.niz;
    v.niz = 0;
    v.f = 0;
    v.l = 0;

}

void vector_push_back(vektor& v, int broj)
{
    if (v.f == v.l)
    {
        int* niz1 = new int[v.f * 2];
        for (int i = 0; i < v.f; i++)
        {
            niz1[i] = v.niz[i];
        }
        delete[] v.niz;
        v.niz = 0;
        v.niz = niz1;
        v.f = v.f * 2;
    }
    v.niz[v.l] = broj;
    v.l++;

}
int* vector_pop_back(vektor& v)
{
   if(v.niz==0)
    {
        return 0 ;
    }
    int* niz1 = new int[v.l];
    for (int j = 0; j < v.l - 1; j++)
    {
        niz1[j] = v.niz[j];
    }
    delete[] v.niz;
    v.l--;
    return niz1;
}

int vector_front(vektor& v)
{
    if(v.niz==0)
    {
        return 0 ;
    }
    return v.niz[0];
}

int vector_back(vektor& v)
{
    if(v.niz==0)
    {
        return 0 ;
    }
    return v.niz[v.l - 1];
}

int vector_size(vektor& v)
{
    return v.l;
}

int main()
{
    vektor v;
    vector_new(v);
    vector_push_back(v, 4);
    vector_push_back(v, 16);
    vector_push_back(v, 19);
    vector_push_back(v, 6);
    vector_push_back(v, 20);

    v.niz = vector_pop_back(v);

    for (int i = 0; i < v.l; i++)
    {
        std::cout << v.niz[i] << " ";
    }
    int a = vector_front(v);
    std::cout << "prvi" << " " << a <<std::endl;*/
    int b = vector_back(v);
    std::cout << "zadnji" << " " << b <<std::endl;
    int c = vector_size(v);
    vector_delete(v);
}
