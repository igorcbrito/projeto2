#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

/*! @brief A classe Reta é subclasse de FiguraGeometrica. É responsável por desenhar uma reta na tela.
 * */

class Reta : public FiguraGeometrica {
private:

    int xi, yi, xf, yf;
    char brush;

public:
/*! @brief Reta é o construtor da classe.
 * @param _xi É a coordenada x inicial da reta.
 * @param _yi É a coordenada y inicial da reta.
 * @param _xf É a coordenada x final da reta.
 * @param _yf É a coordenada y final da reta.
 * */
    Reta(int _xi = 0, int _yi = 0, int _xf = 0, int _yf = 0,char _brush = '*');
    /*! @brief draw dentro da classe é reta é responsável por desenhar uma reta na tela.
     * */
    void draw(Screen &t);
    /*! Sinal é uma função auxiliar utilizada para desenhar a reta digital.
     * */
    int Sinal(int x);
    
};

#endif // RETA_H
