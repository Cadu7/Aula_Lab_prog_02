#include <iostream>
#include "PilhaEncad.h"
#include "PilhaEncad.cpp"
#include "FilaEncad.h"
#include "FilaEncad.cpp"

using namespace std;

PilhaEncad* transfere(PilhaEncad *p1, PilhaEncad *p2, FilaEncad *f){

    PilhaEncad *novaPilha = new PilhaEncad();

    while (!f->vazia() && !p1->vazia() && !p2->vazia()){
        int numero = f->desenfileira();

        if (numero == -1){

            if (!p1->vazia()){
                novaPilha->empilha(p1->desempilha());
            }

        }else if(numero == 1){

            if (!p2->vazia()){
                novaPilha->empilha(p2->desempilha());
            }


        }else if (numero == 0){

            int num = p1->desempilha();
            int num2 = p2->desempilha();
            novaPilha->empilha(num+num2);

        }

        if (f->vazia()){
            while (!p1->vazia()){
                novaPilha->empilha(p1->desempilha());
            }
            while (!p2->vazia()){
                novaPilha->empilha(p2->desempilha());
            }

        }

    }

    return novaPilha;
}

int main() {
   /// TESTE COM PILHA
   PilhaEncad p1;
   PilhaEncad p2;

   for (int i = 0; i < 5; i++) p1.empilha(i);
   cout << "Pilha apos inserir 5 valores" << endl;
   ///p.imprime();

    for (int i = 20; i < 25; i++) p2.empilha(i);
    cout << "Pilha apos inserir mais 5 valores" << endl;
    ///p.imprime();

    FilaEncad f;
    f.enfileira(1);
    f.enfileira(-1);
    f.enfileira(0);
    f.enfileira(1);

    PilhaEncad *p3 = transfere(&p1,&p2,&f);
    for (int i = 0; i < 10; ++i) {
        cout << p3->desempilha() << endl;
    }
    /// TESTE COM FILA

//    FilaEncad f;
//    for (int i = 0; i < 5; i++) f.enfileira(i);
//    cout << "Fila apos inserir 5 valores" << endl;
//    ///f.imprime();
//
//
//    for (int i = 20; i < 25; i++) f.enfileira(i);
//    cout << "Fila apos inserir mais 5 valores" << endl;
//    ///f.imprime();


    return 0;
}
