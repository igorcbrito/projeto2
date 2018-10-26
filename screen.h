#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>
#include <ostream>

using namespace std;

/**
 * @brief A classe Screen prove suporte para desenhar pontos em uma tela virtual. 
 Essa tela deverá ser implementada em uma matriz alocada dinamicamente conforme tamanho 
 a ser determinado pelo usuário.
 */
class Screen
{
private:
    // armazenam o tamanho da tela de desenho
    // no de linhas e de colunas
    int nlin, ncol;
    char brush = '*';
    // guarda o caractere usado para desenhar
    vector< vector<char> > mat;
public:
    /**
     * @brief Screen é o construtor da classe
     * @param _nlin é o número de linhas da tela
     * @param _ncol é o número de colunas da tela
     */
    Screen(int _nlin = 10, int _ncol = 10);

    /**
     * @brief setPixel desenha um pixel da matriz usando o caractere
     * @param x é a coordenada x do pixel a ser alterado
     * @param y é a coordenada y do pixel a ser alterado
     */
    void setPixel(int x, int y);

    /**
     * @brief clear limpa a tela
     */
    void clear();

    /**
     * @brief setBrush muda o caractere de desenho
     * @param _brush é o caracetere a ser usado para o pincel
     */
    void setBrush(char _brush = '*');

    /**
     * @brief operator << é a sobrecarga do operador << 
     * @param os é um parâmetro de fluxos de saída
     * @param t é a tela na qual deve ser desenhada
     * @return
     */
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
