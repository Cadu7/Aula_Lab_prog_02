#include "ListaCont.h"

#include <iostream>
#include <cstdlib>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont()
{
    delete [] vet;
}

int ListaCont::get(int k)
{
    if(k >= 0 && k < n)
        return vet[k];
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::set(int k, int val)
{
    if(k >= 0 && k < n)
        vet[k] = val;
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::insereFinal(int val)
{
    if(n == max)
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit(1);
    }
    vet[n] = val;
    n = n + 1;
}

void ListaCont::removeFinal()
{
    if(n == 0)
    {
        cout << "ERRO: Lista Vazia!" << endl;
        exit(1);
    }
    n = n - 1;
}

void ListaCont::insereK(int k, int val)
{
    if(n == max)
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit(1);
    }
    if(k >= 0 && k < n)
    {
        for(int i = n-1; i >= k; i--)
            vet[i+1] = vet[i];
        vet[k] = val;
        n = n + 1;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::removeK(int k)
{
    if(k >= 0 && k < n)
    {
        for(int i = k; i < n-1; i++)
            vet[i] = vet[i+1];
        n = n - 1;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::insereInicio(int val)
{
    if(n == 0)
    {   //lista vazia. Sera o unico no da lista
        vet[n] = val;
        n = n + 1;
    }
    else
        insereK(0, val);
}

void ListaCont::removeInicio()
{
    removeK(0);
}

void ListaCont::imprime()
{
    for(int i = 0; i<n ; i++){
        std::cout << this->vet[i] << std::endl ;
    }

}

ListaCont *ListaCont::retornaPares() {

    int *vetpar = new int[max];
    int *vetImpar = new int[max];
    int indicePar = 0;
    int indiceImpar = 0;
    int tamanhoPar = 0;
    int tamanhoImpar = 0;

    for(int i = 0; i < n ; i ++){

        if(this->vet[i] % 2 == 0 ){
            vetpar[indicePar] = this->vet[i];
            indicePar++;
            tamanhoPar++;
        }else{
            vetImpar[indiceImpar] = this->vet[i];
            indiceImpar++;
            tamanhoImpar++;

        }

    }
    ListaCont novaLista(tamanhoPar + 2);
    // insere elementos pares na nova lista
    for(int i = 0 ; i < tamanhoPar; i++){
        novaLista.insereFinal(vetpar[i]);
    }
    // apaga a lista anterior existente
    int tamanhoAnterior = n;
    for(int i = 0 ; i < tamanhoAnterior; i++){
        this->removeFinal();
    }
    // insere valores impares na lista deste objeto
    for(int i = 0 ; i < tamanhoImpar; i++){
        this->insereFinal(vetImpar[i]);
    }

    if(tamanhoPar > 0){
        return &novaLista;
    }else{
        return NULL;
    }

}