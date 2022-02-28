#include <iostream>
#include <cstdlib>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla() {
    cout << "Criando uma ListaDupla" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla() {
    cout << "Destruindo ListaDupla" << endl;
    No *p = primeiro;
    while (p != NULL) {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaDupla::busca(int val) {
    No *p;
    for (p = primeiro; p != NULL; p = p->getProx())
        if (p->getInfo() == val)
            return true;
    return false;
}

int ListaDupla::get(int k) {
    No *p = primeiro;
    for (int i = 0; i < k; i++) {
        if (p == NULL)
            break;
        p = p->getProx();
    }
    if (p == NULL) {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    } else
        return p->getInfo();
}

void ListaDupla::set(int k, int val) {
    No *p = primeiro;
    for (int i = 0; i < k; i++) {
        if (p == NULL)
            break;
        p = p->getProx();
    }
    if (p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}

void ListaDupla::insereInicio(int val) {
    No *p = new No();
    p->setInfo(val);
    p->setProx(primeiro);
    p->setAnt(NULL);

    if (n == 0) ultimo = p;
    else primeiro->setAnt(p);

    primeiro = p;
    n = n + 1;
}

void ListaDupla::removeInicio() {
    No *p;
    if (primeiro != NULL) {
        p = primeiro;
        primeiro = p->getProx();
        delete p;
        n = n - 1;

        if (n == 0) ultimo = NULL;
        else primeiro->setAnt(NULL);
    } else
        cout << "ERRO: lista vazia" << endl;
}

void ListaDupla::insereFinal(int val) {
    No *p = new No();

    p->setInfo(val);
    p->setProx(NULL);
    p->setAnt(ultimo);

    if (n == 0)
        primeiro = p;
    else
        ultimo->setProx(p);

    ultimo = p;
    n++;
}

int *ListaDupla::append(int n) {

    if (n >= 0) {

        for (int i = 0; i < n; i++) {
            insereFinal(get(i));
        }

        return NULL;

    } else {

        int size = -n;
        int *vet = new int[size];

        // Insere valores no vetor
        for (int i = 0; i < size; i++) {
            vet[i] = get(i);
        }

        // remove da lista os valores
        for (int i = 0; i < size; i++) {
            removeInicio();
        }

        return vet;

    }

}
