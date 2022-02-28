#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaEncad.h"
#include "listaEncad.cpp"
#include "No.h"

using namespace std;



int main() {
    ListaEncad l; /// cria lista vazia

    l.insereInicio(5);
    l.insereInicio(12);
    l.insereInicio(65);
    l.insereInicio(7);
    l.insereInicio(9);
    cout << l.get(0) << endl;
    cout << l.get(1) << endl;
    cout << l.get(2) << endl;
    cout << l.get(3) << endl;
    cout << l.get(4) << endl;
    l.avancaPrimeiro(4);
    cout << l.get(0) << endl;






    return 0;
}
