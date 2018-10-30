#include "screen.h"
#include <iostream>

using namespace std;

Screen::Screen(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;
    matriz = vector<vector<char>>(nlin, vector<char>(ncol,' '));
}

void Screen::setPixel(int x, int y)
{
    if((x >=0 && x < nlin) && (y >= 0 && y < ncol)){
        matriz[x][y] = brush;
    }
}

void Screen::clear()
{
    for(int i=0; i<matriz.size();i++){
        for(int j=0;j<matriz[i].size();j++){
            matriz[i][j] = ' ';
        }
    }
}

void Screen::setScreen(int nl, int nc)
{
    nlin = nl;
    ncol = nc;
    matriz = vector<vector<char>>(nlin, vector<char>(ncol,' '));
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0; i<t.nlin; i++){
        for(int j=0; j<t.ncol; j++){
            os << t.matriz[i][j];
        }
        os << endl;
    }

    return os;
}
