#include "PilhaCont.h"
#include "iostream"

using namespace std;

PilhaCont::PilhaCont(int tamanho) {

    max = tamanho;
    topo = -1;
    vet = new int[max];

}

PilhaCont::~PilhaCont() {
    delete [] this->vet ;

}

void PilhaCont::empilha(int valor) {

    if (this->topo ==( max -1)){
        cout << "ERROR : lista cheia" << endl ;
    }else{
        this->topo ++;
        this->vet[this->topo] = valor;
    }

}

int PilhaCont::desempilha() {

    if (this->topo ==-1){
        cout << "ERROR : lista vazia" << endl ;
    }
    this->topo --;
    return this->vet[this->topo + 1];

}

int PilhaCont::getTopo() {

    if(this->topo != -1 ){
        return this->vet[this->topo];
    }else{
        cout << "ERROR : lista está vazia" << endl;
        exit(1);
    }

}

bool PilhaCont::vazia() {
    return (this->topo == -1);
}
