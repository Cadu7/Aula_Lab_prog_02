#include <iostream>
#include "Atividade.h"

using namespace std;

Atividade::~Atividade(int quantQuestoes){

    this->notas = new float [quantQuestoes];
    this->totalQuestoes = quantQuestoes;
    this->valorQuestao = 100;

}

Atividade::~Atividade(){

    delete [] this->notas;

}

void Atividade::leNotas(){

    for(int i = 0; i< this->totalQuestoes; i++){
        int n = 0 ;
        cin >> n ;
        if( n > 100 ||  n < 0){
            cin >> n ;
        }else{
            this->notas[i] = n;
        }
    }

}

void Atividade::imprimeRelatorio(){

    int soma = 0 ;
    for(int i = 0 ; i < this.totalQuestoes ; i ++){
        if(notas[i] < 60){
            cout << "Na questão " << i+1 << " a nota foi abaixo de 60" << endl;  
        }
        soma += notas[i];
    }
    cout << "A nota final é " << soma << endl;

}









