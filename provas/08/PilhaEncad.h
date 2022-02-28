#ifndef INC_08_PILHAENCAD_H
#define INC_08_PILHAENCAD_H


#include "No.h"

using namespace std;

class PilhaEncad {
private:
    No *topo;                /// ponteiro p/ o No do topo

public:
    PilhaEncad();

    ~PilhaEncad();

    int getTopo();           /// retorna valor do No do topo
    void empilha(int val);   /// insere No no topo
    int desempilha();        /// elimina No do topo
    bool vazia();            /// verifica se est� vazia
};

#endif //INC_08_PILHAENCAD_H
