//
// Created by cadum on 14/02/2022.
//

#ifndef ARVORE_ARVBINBUSCA_H
#define ARVORE_ARVBINBUSCA_H
#include "NoArv.h"

class ArvBinBusca {
public:
    ArvBinBusca();
    ~ArvBinBusca();
    bool vazia(); // verifica se a �rvore est� vazia
    bool busca(int val);
    void insere(int val);
    void remove(int val);
    void imprime();
    float mediaCaminho(int ch);
    void removeFolhaVal(int valor);


private:
    void auxFolhaRemove(NoArv *p, int valor);
    NoArv* raiz; // ponteiro para o No raiz da �rvore
    bool auxBusca(NoArv *p, int val);
    NoArv* auxInsere(NoArv *p, int val);
    NoArv* auxRemove(NoArv *p, int val);
    NoArv* menorSubArvDireita(NoArv *p);
    NoArv* removeFolha(NoArv *p);
    NoArv* remove1Filho(NoArv *p);
    void imprimePorNivel(NoArv* p, int nivel);
    NoArv* libera(NoArv *p);
};


#endif //ARVORE_ARVBINBUSCA_H
