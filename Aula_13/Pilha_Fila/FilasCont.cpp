#include "FilasCont.h"
#include "iostream"

using namespace std;

FilasCont::FilasCont(int tamanho) {

    max = tamanho;
    inicio = 0;
    fim = 0;
    vet = new int [max];

}

FilasCont::~FilasCont() {
    delete [] vet ;
}

int FilasCont::getInicio() {

    if (!vazia()){
        return vet[inicio];
    }else{
        cout << "ERROR : Fila vazia" << endl ;
    }

}

bool FilasCont::vazia() {
    return inicio == fim;
}

void FilasCont::enfileirar(int valor) {

    if ( fim == max ){
        cout << "ERROR : Fila cheia " << endl ;
    }
    vet[fim] = valor;
    fim ++;

}

int FilasCont::desenfileirar() {

    if (!vazia()){
        inicio++;
        return vet[inicio - 1];
    }else{
        cout << "ERROR : Fila vazia" << endl ;
    }

}