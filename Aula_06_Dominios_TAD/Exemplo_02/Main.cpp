#include <iostream>
#include "Relogio.h"

int main(){

    Relogio relogio;

    relogio.acertar(23,59,58);
    
    for (int i = 0; i < 10; i++){
        relogio.getHorario();
        relogio.tique();
    }
    
    return 0;
}