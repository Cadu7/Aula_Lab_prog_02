#include <iostream>
#include "Aluno.h"

using namespace std;

int main(){
    
    char nome[6] = {'c', 'a', 'd', 'u', '\0' };
    char mat[5] = {'1', '2', '3', '4', '\0'};
    Aluno aluno( nome , mat );

    aluno.lerNotas();
    cout << "A media do aluno 1 é : "<< aluno.calculaMedia() << endl;
    //aluno.imprime();
    


    return 0;
}