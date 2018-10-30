#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

class Retangulo: public FiguraGeometrica {
private:

    int x0, y0, largura, altura, fillmode;
    char brush;

public:

	Retangulo(int _x0 = 0, int _y0 = 0, int _largura = 0, int _altura = 0, int _fillmode = 0, char _brush = '*');
	void draw(Screen &t);
	
};

#endif //RETANGULO_H
