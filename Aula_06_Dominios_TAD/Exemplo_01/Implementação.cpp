#include "Poligono.h"
#include <cmath>
#include <iostream>

float Poligono::area(){
    return numLados*pow(tamLados,2)/ (4*tan(3.1416/numLados));
}


float Poligono::perimetro(){
    return numLados*tamLados;
}


float Poligono::angInterno(){
    return 180* (numLados - 2 )/ numLados;
}

void Poligono::lerValores(){
    cout << "Digite o numero de lados" << endl;
    cin >> numLados;
    cout << "Digite o tamanho dos ladod" << endl;
    cin >> tamLado;
}

