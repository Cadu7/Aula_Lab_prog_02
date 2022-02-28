//
// Created by cadum on 20/02/2022.
//

#ifndef INC_08_FILHAENCAD_H
#define INC_08_FILHAENCAD_H

#include "No.h"

using namespace std;

class FilaEncad {
private:
    No *inicio;
    No *fim;      /// ponteiros para os No's extremos
public:
    FilaEncad();

    ~FilaEncad();

    int getInicio();           /// retorna valor do primeiro No
    void enfileira(int val);   /// insere No no fim
    int desenfileira();        /// elimina No do inicio
    bool vazia();              /// verifica se fila esta vazia
};

#endif //INC_08_FILHAENCAD_H
