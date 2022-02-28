#include <iostream>
#include "string.h"

#include "Aluno.h"

using namespace std;

Aluno::Aluno(char nome[40], char matricula[50]){
    
    int i;
    for( i = 0; nome[i]!='\0'; i++){
        this->nome[i] = nome[i];
    }
    this->nome[i] = '\n';

    for( i = 0; matricula[i]!='\0'; i++){
        this->matricula[i] = matricula[i];
    }
    this->matricula[i] = '\n';
    
}

Aluno::~Aluno(){

}

void Aluno::lerNotas(){
    for (int i = 0; i < 7; i++){
        cout << "Digite o númedo da nota " << i+1 << endl;
        cin >>  this->notas[i];
    }
    
}

double ALuno::calculaMedia(){

    double media = 0;
    for (int i = 0; i < 7; i++){
        media += this->notas[i]; 
    }

    return media/7.0;
}

void  Aluno::setMatricula(char matricula[]){

   int i;
    for( i = 0; matricula[i]!='\0'; i++){
        this->matricula[i] = matricula[i];
    }
    this->matricula[i] = '\n';

}

char* Aluno::getMatricula(){

    char *m = new char[15];
    for( i = 0; this->matricula[i]!='\0'; i++){
        m[i] = matricula[i];
    }
    m[i] = '\n';
    return m;
}

void  Aluno::setNome(char nome[]){

    int i;
    for( i = 0; nome[i]!='\0'; i++){
        this->nome[i] = nome[i];
    }
    this->nome[i] = '\n';

}

char* Aluno::getNome(){

    char *n = new char[15];
    for( i = 0; this->nome[i]!='\0'; i++){
        n[i] = nome[i];
    }
    n[i] = '\n';
    return n;

}
