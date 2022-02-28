#ifndef PILHA_FILA_PILHACONT_H
#define PILHA_FILA_PILHACONT_H

class PilhaCont {
    private:
        int max;
        int topo;
        int *vet;

    public:
        PilhaCont(int tamanho);
        ~PilhaCont();
        int getTopo();
        void empilha(int valor);
        int desempilha();
        bool vazia();

};

#endif //PILHA_FILA_PILHACONT_H
