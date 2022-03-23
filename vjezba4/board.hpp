#pragma once
#include<iostream>
#include <string>
#include "point.hpp"

using namespace std;

class board{
private:
    char** matrica;
    int red;
    int stupac;
    char ch;

public:
    board();
    board(int r, int c);
    board(const board& b2);
    void draw_char(point p,char ch);
    void draw_up_line(point p, char ch);
    void draw_line(point p1, point p2, char ch);
    void display();
    ~board();
};

