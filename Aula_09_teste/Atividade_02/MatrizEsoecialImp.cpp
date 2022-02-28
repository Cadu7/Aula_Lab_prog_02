#include <iostream>
#include "MatrizEspecial.h"

using namespace std;

MatrizEspecial::MatrizEspecial(int tamanho){

    if(tamanho < 4 ){
        cout << "Tamanho de matriz inválido" << endl;
    }else{
        this->tamanho = tamanho;
        int tamanhoVetor = tamanho * tamanho / 2;
        this.vet = new int [tamanhoVetor];
    }

}

MatrizEspecial::~MatrizEspecial(){

    delete [] this->vet;

}

// para verificar se os índices i e j da matriz são válidos e retornar 
// o índice de vet de acordo com o formato armazenado (-2 para elementos iguais a zero ou -1 
// caso não sejam válidos).
int MatrizEspecial::detInd(int i, int j){

    if ( i < 0 || i > this->tamanho || j < 0 || j > this->tamanho){
        return -1;
    }else if( i < this->tamanho/2 && j < this->tamanho/2 ){
        // primeiro quadrante da matriz == primeira parte do vetor
        int k = 0;
        k = i * this->tamanho/2 + j;
        return k;

    }else if( i > this->tamanho/2 && j > this->tamanho/2 ){
        // quarto quadrante da matriz == segunda parte do vetor
        int k = 0;
        int tamanhoVetor = this->tamanho * this->tamanho / 2;
        k = tamanhoVetor + (i * this->tamanho/2) + (j - tamanho/2) ;
        9 + ((4 - tamanho/2) * 3) + (4 - 3)
        return k;

    }else {
        return -2;
    }


}

int MatrizEspecial::get(int i, int j){

    int valor = 0;
    indice = detInd( i , j );
    if( indice != -1){
        if(indice == -2){
            return 0;
        }else{
            valor = this->vet[indice];
        }
    }
    cout << "indice fora da matriz" << endl;
    return null;

}

void MatrizEspecial::set (int i, int j, int valor){

    indice = detInd( i , j );
    if( indice != -1){
        if(indice == -2){
            if(valor != 0){
                cout << "Esse indice deve ser 0" << endl;
            }
        }else{
            this->vet[indice] = valor;
        }
    }
    cout << "indice fora da matriz" << endl;

}


