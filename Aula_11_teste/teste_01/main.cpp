#include <iostream>
#include "ListaCont.h"
#include "listaCont.cpp"

int main() {
    ListaCont l(5);
    l.insereFinal(24);
    l.insereFinal(3);
    l.insereFinal(2);
    l.insereFinal(99);
    l.insereFinal(33);

    std::cout << "Fazendo parte par" << std::endl ;
    l.retornaPares();

    return 0;
}
