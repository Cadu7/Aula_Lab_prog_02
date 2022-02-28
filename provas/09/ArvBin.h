#ifndef INC_09_ARVBIN_H
#define INC_09_ARVBIN_H

#include "NoArv.h"

class ArvBin {
public:
    ArvBin();

    ~ArvBin();

    int getRaiz();

    void cria(int x, ArvBin *sae, ArvBin *sad);

    void anulaRaiz();

    bool vazia(); // verifica se a �rvore est� vazia
    bool busca(int x);

    void preOrdem();

    void montaArvore();

    void insere(int x);

    void alturaContagens(int k);

    bool isLeaf(NoArv *p);

private:
    NoArv *raiz; // ponteiro para o No raiz da �rvore

    NoArv *libera(NoArv *p);

    bool auxBusca(NoArv *p, int x);

    void auxPreOrdem(NoArv *p);

    NoArv *auxMontaArvore();

    void auxImpNivel(NoArv *p, int atual, int k);

    void auxInverte(NoArv *p);

    NoArv *auxInsere(NoArv *p, int x);

    void auxalturaContagens(NoArv *p, int atual,int k, int *cont1, int *cont2);
};


#endif //INC_09_ARVBIN_H
