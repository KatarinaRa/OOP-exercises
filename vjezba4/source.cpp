#include <iostream>
#include "vektor.hpp"

int main55()
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

    v.vector_pop_back();
    vektor v1 = v;
    int a = v.vector_front();
    std::cout << "prvi" << " " << a <<std::endl;
    int b = v.vector_back();
    std::cout << "zadnji" << " " << b <<std::endl;
    int c = v.vector_size();
    std::cout <<"size" << " " <<c << std::endl;
    v.vector_delete();

}
