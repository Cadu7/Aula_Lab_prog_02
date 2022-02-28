#include <iostream>
#include "ListaContigua.h"

using namespace std;

ListaCont::ListaCont(int tam){

    n = 0; 
    max = tam;
    vet = new int[max];

}

ListaCont::~ListaCont(){

    delete [] vet;

}

int ListaCont::get(int k){

    if(k >= 0 && k < n){
        return vet[k];
    }    
    else{

        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::set(int k, int val){
    if(k >= 0 && k < n){
        vet[k] = val;
    }    
    else{

        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::realoca(){

    max = max*1.4;  
    cout<<max<<endl;
    int *v = new int [max];

    for(int i=0; i<n; i++){
        v[i] = vet[i];
    }

    delete [] vet;

    vet = v;
}

void ListaCont::insereFinal(int val){
    if(n == max){
        realoca();
    }    
    vet[n] = val;
    n = n + 1;
}

void ListaCont::removeFinal(){
    if(n == 0){
        cout << "ERRO: Lista Vazia!" << endl;
        exit(1);
    }
    n = n - 1;
}

void ListaCont::insereK(int k, int val){

    if(n == max){
        realoca();
    }
    if(k >= 0 && k < n){

        for(int i = n-1; i >= k; i--){
            vet[i+1] = vet[i];
        }
        vet[k] = val;
        n = n + 1;
    }
    else{
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::removeK(int k){
    if(k >= 0 && k < n){

        for(int i = k; i < n-1; i++){
            vet[i] = vet[i+1];
        }
        n = n - 1;
    }
    else{
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::imprime(){
    cout<<"\n";
    for(int i = 0; i < n; i++){
        cout<<vet[i]<<"\t";
    }
    cout<<"\n\n";
}
