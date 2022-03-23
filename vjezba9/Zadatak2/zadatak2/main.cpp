#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<char> s(3);
    cout << s.is_empty() << endl;
    s.pushBack('x');
    s.pushBack('y');
    s.pushBack('z');
    cout << s.is_empty() << endl;
    s.popBack();
    s.popBack();
    s.popBack();
    s.popBack();
    cout << s.is_empty() << endl;

}
