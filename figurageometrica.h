#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/*! @brief A classe abstrata FiguraGeometrica é usada para representar objetos primitivos genéricos
 * */
class FiguraGeometrica {
public:
    /*! @brief A função virtual draw instrue a se desenhar em um objeto do tipo screen
     * */
	virtual void draw(Screen &t)=0;
	
};

#endif // FIGURAGEOMETRICA_H
