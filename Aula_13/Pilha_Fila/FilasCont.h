#ifndef PILHA_FILA_FILASCONT_H
#define PILHA_FILA_FILASCONT_H

class FilasCont {
    private:
        int max;
        int inicio;
        int fim;
        int *vet;

    public:
        FilasCont(int tamanho);
        ~FilasCont();
        int getInicio();
        void enfileirar(int valor);
        int desenfileirar();
        bool vazia();

};

#endif //PILHA_FILA_FILASCONT_H
