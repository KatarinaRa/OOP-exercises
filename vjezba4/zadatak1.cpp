#include <iostream>
#include "vektor.hpp"
double*  vektor::getniz()
{
    return niz;
}

vektor::vektor (int n,int k)
{
     this->l = n;
     this->f = n;
     for(int i=0 ;i<n ; i++)
     {
         this->niz[i] = k;

     }
     std::cout << "Kons s dva el" << std::endl;

}
vektor::vektor(){

    this->l=0;
    this->f=0;
    this->niz=0;
    std::cout << "konstruktor"<< std::endl;
}
int vektor::getf(){
    return f;

}
int vektor::getl(){
    return l;
}
vektor::vektor(vektor &v){
    std::cout << "copy konstruktor"<< std::endl;
    this->f=v.f;
    this->l=v.l;
    this->niz = new double(v.l);
    for(int i=0; i<v.l; i++)
    {
        this->niz[i]=v.niz[i];
    }

}

void vektor::vector_new()
{
    this->niz = new double(6);
    this->f = 1;
    this->l = 0;
}

void vektor::vector_delete()
{
    delete[] this->niz;
    this->niz = 0;
    this->f = 0;
    this->l = 0;

}

void vektor::vector_push_back(int broj)
{

    if (this->f == this->l)
    {
        double* niz1 = new double[this->f * 2];
        for (int i = 0; i < this->f; i++)
        {
            niz1[i] = this->niz[i];
        }
        delete[] this->niz;
        this->niz = 0;
        this->niz = niz1;
        this->f = this->f * 2;
    }
    this->niz[this->l] = broj;
    this->l++;
}
void vektor::vector_pop_back()
{
   if(this->niz==0)
    {
        return;
    }
    double* niz1 = new double[this->l];
    for (int j = 0; j < this->l - 1; j++)
    {
        niz1[j] = this->niz[j];
    }
    this->niz = niz1;
    delete[] niz1;
    this->l--;
}

int vektor::vector_front()
{
    if(this->niz==0)
    {
        return 0 ;
    }
    return this->niz[0];
}

int vektor::vector_back()
{
    if(this->niz==0)
    {
        return 0;
    }
    return this->niz[this->l - 1];
}

int vektor::vector_size()
{
    return this->l;
}

vektor::~vektor()
{
    std::cout << "destruktor" << std::endl;
}


