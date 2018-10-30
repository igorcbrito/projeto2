#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

/*! @brief A classe Retangulo é uma subclasse de FiguraGeometrica capaz de desenhar um retângulo na tela.
 * */
class Retangulo: public FiguraGeometrica {
private:

    int x0, y0, largura, altura, fillmode;
    char brush;

public:
/*! Retangulo é o contrutor da classe.
 * @param _x0 É a coordenada x da posição inicial do canto superior esquerdo do retângulo.
 * @param _y0 É a coordenada y da posição inicial do canto superior esquerdo do retângulo.
 * @param _largura Como o nome sugere, é o valor da largura do retângulo.
 * @param _altura Como o nome sugere, é o valor da altura do retângulo.
 * @param _fillmode É a variável que indica se o retângulo será preenchido ou não, sendo valor 1 para preenchido e 0 para não preenchido.
 * @param _brush É o tipo de caractere que irá compor o retângulo.
 * */
	Retangulo(int _x0 = 0, int _y0 = 0, int _largura = 0, int _altura = 0, int _fillmode = 0, char _brush = '*');
    /*! @brief draw é a função virtual que desenha o retângulo na tela.
     * */
	void draw(Screen &t);
	
};

#endif //RETANGULO_H
