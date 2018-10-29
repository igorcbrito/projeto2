#include "retangulo.h"

Retangulo::Retangulo(int _x0, int _y0, int _largura, int _altura, int _fillmode, char _brush)
{
    x0 = _x0;
    y0 = _y0;
    largura = _largura;
    altura = _altura;
    fillmode = _fillmode;
    brush = _brush;
}

void Retangulo::draw(Screen &t){
    t.setBrush(brush);
    if(fillmode == 1){
        for(int i = x0; i < (x0+largura); i++){
            for(int j = y0; j < (y0+altura); j++){

                t.setPixel(i,j);
            
            }
        }
    }
    else{
        for(int i = x0; i < (x0+largura); i++){
            for(int j = y0; j < (y0+altura); j++){
                if(((i == x0 || i == x0+largura-1) || (j == y0 || j == y0+altura-1))){
                
                t.setPixel(i,j);
                
                }
            }
        }
    }
}
