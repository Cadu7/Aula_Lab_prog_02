#ifndef TESTE_01_LISTACONT_H
#define TESTE_01_LISTACONT_H

#include "Ponto.h"

class ListaCont
{
private:
    int max;
    int n;
    int *vet;

public:
    ListaCont(int tam);
    ~ListaCont();

    int get(int k);
    void set(int k, int val);
    void insereFinal(int val);
    void insereK(int k, int val);
    void insereInicio(int val);
    void removeFinal();
    void removeK(int k);
    void removeInicio();
    void imprime();
    ListaCont* retornaPares();

};

#endif //TESTE_01_LISTACONT_H
