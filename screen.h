#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>
#include <ostream>

using namespace std;
/*! @brief A classe Screen implementa uma tela virtual de suporte, representada por uma matriz, onde são reproduzidos os desenhos.
 */
class Screen {
private:
    int nlin, ncol;
    char brush = '*';
    vector< vector<char> > matriz;

public:
    /*! @brief Screen é o construtor da classe.
     * @param nlin É a variável que representa o número de linhas da matriz que compõe a tela. (Definido por padrão)
     * @param ncol É a variável que representa o número de colunas da matriz que compõe a tela. (Definido por padrão)
    */
    Screen(int _nlin = 10, int _ncol = 10);
    /*! @brief Define um pixel na tela com o caractere guardado em brush.
     * @param x É a coordenada horizontal da tela.
     * @param y É a coordenada vertical da tela.
     * */
    void setPixel(int x, int y);
    /*! @brief Apaga todos os caracteres da tela.
     * */
    void clear();
    /*! @param brush É a variável do tipo char que representa o tipo de caractere que formará a figura.
     * @brief Define o brush que irá formar as figuras.
     * */
    void setBrush(char _brush = '*');
    friend ostream& operator<<(ostream &os, Screen &t);
    /*! @brief setScreen define uma tela para o sistema.
     * @param nl É o número de linhas que irá formar a matriz que representa a tela.
     * @param nc É o número de colunas que irá formar a matriz que representa a tela.
     * */
    void setScreen(int nl,int nc);
    
};

#endif // SCREEN_H
