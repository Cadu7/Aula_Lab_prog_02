#include <iostream>
#include "PilhaCont.h"
#include "PilhaCont.cpp"
#include "FilasCont.h"
#include "FilasCont.cpp"

using namespace std;

int main() {

    PilhaCont pilha = PilhaCont(5);
    pilha.empilha(5);
    pilha.empilha(7);
    pilha.empilha(7);
    pilha.empilha(8);
    cout << "Get topo da pilha " << pilha.getTopo() << endl ;
    cout << "Pilha esta vazia? " << pilha.vazia() << endl ;

    FilasCont fila = FilasCont(10);
    fila.enfileirar(10);
    fila.enfileirar(5);
    fila.enfileirar(14);
    fila.enfileirar(8);
    fila.enfileirar(1);


}
