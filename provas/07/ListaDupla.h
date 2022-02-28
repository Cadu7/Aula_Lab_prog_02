//
// Created by cadum on 20/02/2022.
//

#ifndef INC_07_LISTADUPLA_H
#define INC_07_LISTADUPLA_H

#include "No.h"

class ListaDupla {
public:
    ListaDupla();

    ~ListaDupla();

    bool busca(int val);

    int get(int k);

    void set(int k, int val);

    void insereInicio(int val);

    void removeInicio();

    void insereFinal(int val); /// exercicio
    void removeFinal();        /// exercicio
    int* append(int n);
private:
    No *primeiro;
    No *ultimo;
    int n;
};


#endif //INC_07_LISTADUPLA_H
