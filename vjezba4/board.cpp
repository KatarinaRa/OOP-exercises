#include<iostream>
#include "board.hpp"
#include "point.hpp"

board::board()
{

}
board::board(const board& b2){
    red=b2.red;
    stupac=b2.stupac;

    matrica=new char*[red];
    for(int i = 0; i<red; i++)
    {
        matrica[i]=new char[stupac];
    }
    for(int i =0 ; i<red; i++)
    {
        for(int j=0; i<stupac; j++)
        {
            matrica[i][j]=b2.matrica[i][j];
        }
    }



}
board::board(int r,int s)
{
	red = r;
	stupac = s;
    ch = 'o';
	matrica = new char*[red];
	for (int i = 0; i < red; i++)
	{
		matrica[i] = new char[stupac];
	}
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < stupac; j++)
		{
			if (i == 0 || j == 0 || i == red-1  || j == stupac-1 )
			{
				matrica[i][j] = ch;
			}
			else
			{
				matrica[i][j] = ' ';
			}
		}
	}

}

void board::draw_char(point p, char ch)
{
	int x = p.x, y = p.y;
	matrica[x][y] = ch;

}

void board::draw_up_line(point p, char ch)
{
	int x = p.x;
	int y = p.y;
	for (int i = 1; i <= y; i++)
	{
		matrica[x][i] = ch;

	}

}

void board::draw_line(point p1, point p2, char ch)
{
	int x1 = p1.x, x2 = p2.x, y1 = p1.y, y2 = p2.y;

	if (x1 == x2 && y1 > y2)
	{
		for (int i = y2; i <= y1; i++)
		{
			matrica[x1][i] = ch;
		}
	}

	if (x1 == x2 && y1 < y2)
	{
		for (int i = y1; i <= y2; i++)
		{
			matrica[x1][i] = ch;
		}
	}

	if (x1 > x2 && y1 > y2)
	{
		for (int i = x2,j= y2; i<=x1 && j<= y1; i++ ,j++)
		{
			matrica[i][j] = ch;
		}
	}

	if (x1 < x2 && y1 < y2)
	{
		for (int i = x1, j = y1; i <= x2 && j <= y2; i++, j++)
		{
			matrica[i][j] = ch;
		}
	}

	if (x1 > x2 && y1 < y2)
	{
		for (int i = x2, j = y1; i <= x1 && j <= y2; i++, j++)
		{
			matrica[i][j] = ch;
		}
	}

	if (x1 < x2 && y1 > y2)
	{
		for (int i = x1, j = y2; i <= x2 && j <= y1; i++, j++)
		{
			matrica[i][j] = ch;
		}
	}

	if (x1 > x2 && y1 == y2)
	{
		for (int i = x2; i <= x1 ; i++)
		{
			matrica[i][y1] = ch;
		}
	}

	if (x1 < x2&& y1 == y2)
	{
		for (int i = x1; i <= x2; i++)
		{
			matrica[i][y1] = ch;
		}
	}

	if (x1 == x2 && y1 == y2 && x1 > y1)
	{
		for (int i = x2, j = y2; i <= x1 && j <= y1; i++, j++)
		{
			matrica[i][j] = ch;
		}
	}

	if (x1 == x2 && y1 == y2 && x1 < y1)
	{
		for (int i = x1, j = y1; i <= x2 && j <= y2; i++, j++)
		{
			matrica[i][j] = ch;
		}
	}


}
void board::display()

{
	for (int i = 0; i < stupac; i++)
	{
		for (int j = 0; j < red; j++)
		{
			cout << this->matrica[j][i];

		}
		cout << endl;
	}
}

board::~board()
{
	for (int i = 0; i < red; i++)
		delete[] matrica[i];
	delete[] matrica;

}
