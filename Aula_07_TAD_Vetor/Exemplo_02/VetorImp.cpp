
#include <iostream>
#include <stdlib.h>

#include "Vetor.h"

Vetor::Vetor(int tam){

    n = 0;
    if(tam > 0){
        n = tam;
        this->vet = new float [n];
    }
    for(int i = 0 ; i < n ; i++){
        vet[i] = 0.0;;
    }

    // int mat = new int *[n];

    // for(int i = 0 ; i < n ; i++){
    //     mat[i] = new int [n];
    // }

    // for(int i = 0 ; i < n ; i++){
    //     delete [] mat[i];
    // }
    // delete [] mat;

}

Vetor::~Vetor(){
    delete [] vet;
}

float Vetor::get(int index){

    if(verifica(index)){
        return this->vet[indice];
    }
    std::cout << "Indice inválido" << std::endl; 

}

void Vetor::set( int indice, float valor){

    if( verifica( indice)){
        this->vet = valor;
    }
    std::cout << "Indice inválido" << std::endl; 

}

bool Vetor::verifica(int indice){

    if(indice >= 0 && indice < this->n){
        return true;
    }
    return false;

}
