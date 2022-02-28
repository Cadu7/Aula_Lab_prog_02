#include <iostream>
#include "Poligono.h"

using namespace std;

// TAD Dominio + metodos

int main(){

    Poligono p;

    p.lerValores();
    
    cout << "Area: " << p.area <<endl;
    cout << "Perimetro: " << p.perimetro <<endl;
    cout << "Angulo interno: " << p.angInterno <<endl;

    return 0;
}

// Antes de encapsulamento
//typedef int VetN[50];
//
//int main(){
//
//    VetN v;
//    int maior, menor;
//    for (int i = 0; i < 50; i++){
//        cin >> v[i];
//    }
//    
//
//    return 0;
//}
//
//struct Aluno{
//    int matricula;
//    float notas[3];
//}
//
//iont main(){
//    Aluno a;
//    a.matricula=2165;
//    
//}