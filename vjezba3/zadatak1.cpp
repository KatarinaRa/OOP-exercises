#include <iostream>

class vektor
{
    public:
        double* niz;
        int f;
        int l;
        void vector_new();
        void vector_delete();
        void vector_push_back(int broj);
        double* vector_pop_back();
        int vector_front();
        int vector_back();
        int vector_size();
};

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
double* vektor::vector_pop_back()
{
   if(this->niz==0)
    {
        return 0;
    }
    double* niz1 = new double[this->l];
    for (int j = 0; j < this->l - 1; j++)
    {
        niz1[j] = this->niz[j];
    }
    delete[] this->niz;
    this->l--;
    return niz1;
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

int main()
{
    vektor v;
    v.vector_new();
    v.vector_push_back(4);
    v.vector_push_back(16);
    v.vector_push_back(19);
    v.vector_push_back(6);
    v.vector_push_back(20);
    v.vector_push_back(11);
    v.vector_push_back(15);
    v.vector_push_back(16);
    v.vector_push_back(11);


    v.niz = v.vector_pop_back();

    for (int i = 0; i < v.l; i++)
    {
        std::cout << v.niz[i] << " ";
    }
    int a = v.vector_front();
    std::cout << "prvi" << " " << a <<std::endl;
    int b = v.vector_back();
    std::cout << "zadnji" << " " << b <<std::endl;
    int c = v.vector_size();
    std::cout <<"size" << " " <<c;
    v.vector_delete();
}

