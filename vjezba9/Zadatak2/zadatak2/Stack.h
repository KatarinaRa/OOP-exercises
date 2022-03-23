#pragma once

#include <vector>
#include <string>

using namespace std;

template<typename T>
class Stack {
    int size;
    T* v;
    int i;
public:
    Stack();
    Stack(int sz);
    void pushBack(T sz);
    void popBack();
    bool is_empty();

};

template <typename T>
Stack<T>::Stack()
{

}

template <typename T>
Stack<T>::Stack(int sz)
{
    size = sz;
    i = 0;
    v = new T[size];
}

template <typename T>
void Stack<T>::pushBack(T t) {

    if (size == i)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        v[i] = t;
        ++i;
    }
}

template <typename T>
void Stack<T>::popBack() {

    if (i == 0)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        i--;
        v[i];
    }
}

template<class T>
bool Stack<T>::is_empty()
{
    if (i == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
