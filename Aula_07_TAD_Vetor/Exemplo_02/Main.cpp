#include <iostream>
#include "Vetor.h"

using namespace std;

int main(){

    int n = 10 , valor = 0;
    Vetor v(n);

    for(int i = 0 ; i < n ; i++){
        v.set( i , valor );
        valor+=10;
    }

    for(int i = 0 ; i < n ; i++){
        cout << v.get(i) << endl;
    }

    return 0;
}