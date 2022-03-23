#include <iostream>


class vektor
{
        double* niz;
        int f;
        int l;
    public:
        vektor (int n,int k = 0);
        vektor();
        int getf();
        int getl();
        double* getniz();
        vektor(vektor &v);
        void vector_new();
        void vector_delete();
        void vector_push_back(int broj);
        void vector_pop_back();
        int vector_front();
        int vector_back();
        int vector_size();
        ~vektor();
};
