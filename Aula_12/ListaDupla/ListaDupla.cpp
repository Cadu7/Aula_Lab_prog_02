#include <iostream>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla(){

    primeiro = ultimo = NULL;
    n = 0;

}

ListaDupla::~ListaDupla(){

    NoDuplo *p = primeiro;
    while(p != NULL){
        NoDuplo *t = p->getProx();
        delete p;
        p = t;
    }

}

bool ListaDupla::busca(int val){

    for(NoDuplo *p = ultimo; p != NULL; p = p->getAnt()){
        if(p->getInfo() == val){
            return true;
        }
    }
    return false;

}

void ListaDupla::insereInicio(int val){

    NoDuplo *p = new NoDuplo();
    p->setInfo(val);
    p->setProx(primeiro);
    p->setAnt(NULL);
    if(primeiro == NULL){
        ultimo = p;
    }else{
        primeiro->setAnt(p);
    }
    primeiro = p;
    n++;

}

void ListaDupla::insereFinal(int val){

    NoDuplo *p = new NoDuplo();
    p->setInfo(val);
    p->setAnt(ultimo);
    p->setProx(NULL);
    if(primeiro == NULL){
        primeiro = p;
    }else{
        ultimo->setProx(p);
    }
    ultimo = p;
    n++;

}

void ListaDupla::insereK(int k, int val) {

    if(k < 0 || k > n){
        cout << "Indice inválido" << endl ;
    }else if(n == 0){
        insereInicio(val);
    }else if (n == k ){
        insereFinal(val);
    }else{
        NoDuplo *novo = new NoDuplo();
        novo->setInfo(val);
        int i = 0;
        for (NoDuplo *p = primeiro; p != NULL ; p = p->getProx()) {
            if(i == k){
                novo->setProx( p);
                novo->setAnt(p->getAnt());
                p->getAnt()->setProx(novo);
                p->setAnt(novo);
                n++;
            }
            i++;
            
        }
        
        
    }

}

void ListaDupla::removeInicio(){

    if(primeiro != NULL){
        NoDuplo *p = primeiro;
        primeiro = p->getProx();
        delete p;
        if(primeiro == NULL){
            ultimo = NULL;
        }else{
            primeiro->setAnt(NULL);
        }
        n--;
    }else{
        cout << "ERRO: Lista vazia." << endl;
    }

}

void ListaDupla::removeFinal(){

    if(primeiro != NULL){
        NoDuplo *p = ultimo;
        ultimo = p->getAnt();
        delete p;
        if(ultimo == NULL){
            primeiro = NULL;
        }else{
            ultimo->setProx(NULL);
        }
        n--;
    }else{
        cout << "ERRO: Lista vazia." << endl;
    }

}

void ListaDupla::imprime(){

    cout << "Lista: ";
    for(NoDuplo *p = primeiro; p != NULL; p = p->getProx()){
        cout << p->getInfo() << " ";
    }
    cout << endl;

}

void ListaDupla::imprimeReverso(){

    cout << "Lista Resversa: ";
    for(NoDuplo *p = ultimo; p != NULL; p = p->getAnt()){
        cout << p->getInfo() << " ";
    }
    cout << endl;

}
