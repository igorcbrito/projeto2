#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

/*! @brief A classe círculo é uma subclasse de FiguraGeometrica capaz de desenhar um círculo na tela.
 * */

class Circulo : public FiguraGeometrica {
private:

    int x0, y0, raio;
    bool fillmode;
    char brush;

public:
/*! @brief Circulo é o construtor da classe
 * @param _x0 É a coordenada x da posição do centro do círculo a ser desenhado.
 * @param _y0 É a coordenada y da posição do centro do círculo a ser desenhado.
 * @param _raio É a medida do raio do círculo.
 * @param _fillmode É a variável booleana que indica se o o círculo será preenchido ou não, sendo 1 para preenchido e 0 para não preenchido.
 * @param _brush É o tipo de caractere que irá compor o círculo.
 * */
    Circulo(int _x0, int _y0, int _raio, bool _fillmode,char _brush='*');
    /*! @brief draw é a função virtual responsável por desenhar o círculo na tela.
     * */
    void draw(Screen &t);
    
};

#endif // CIRCULO_H
