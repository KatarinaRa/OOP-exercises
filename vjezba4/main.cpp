#include<iostream>
#include "board.hpp"
#include "point.hpp"

using namespace std;

int main()
{
    board* b = new board(20,10);
    board* b2= b;
    point p1(2,2),p2(8,8),p3(2,8),p4(16,8);
    b->draw_line(p1, p2, 'x');
    b->draw_line(p3, p4, 'x');
    b->display();
}
