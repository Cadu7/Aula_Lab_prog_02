#include <iostream>
#include "Diagonal.h"

using namespace std;

Diagonal::Diagonal(int n){

    this->vet = new float[n];
}

Diagonal::~Diagonal(){

    delete [] this->vet;
}
bool Diagonal::verifica(int i, int j){

    return i >= 0 && i < this->n && j >= 0 && j < this->n;
}  

float Diagonal::get(int n, int j){

    if(verifica(n,j)){

    }else{
        cout << "Indices inválidos " << endl;
    }
}

void Diagonal::set(int n, int j, float valor){

    if(verifica(n,j)){
        
    }else{
        cout << "Indices inválidos " << endl;
    }
}
