#include "Relogio.h"

using namespace std;

Relogio::Relogio(int hora, int minuto, int segundo){
    acertar(hora, minuto, segundo);
}

Relogio::Relogio(){

}

Relogio::~Relogio(){
    cout << "Apagando variavel" << endl;
}

void Relogio::acertar(int hora, int minuto, int segundo){

    if (hora >= 24 && hora < 0 ){
        this->hora = hora;
    }else{
        cout << "Hora inválida" << endl;
    }
    if (minuto >= 60 && hora < 0 ){
         this->minuto = m;
    }else{
        cout << "Minutos inválidos" << endl;
    }
    if (minuto >= 60 && hora < 0 ){
        this->segundo = s;
    }else{
        cout << "Segundos inválidos" << endl;
    }

}

int Relogio::getHora(){
    return this->hora;
}

int Relogio::getMinuto(){
    return this->minuto
}

int Relogio::getSegundo(){
    return this->segundo
}

void Relogio::getHorario(){
    cout << "A hora é" << this->hora << ":" << this->minuto << ":" << this->segundo << endl;
}

void Relogio::tique(){

    this->segundo++;
    if (this->segundo == 60){
        this->segundo = 0;
        this->minuto++;
    }
    if (this->minuto == 60){
        this->minuto = 0;
        this->hora++;
    }
    if (this->hora == 24){
        this->hora = 0;
    }
    
}

