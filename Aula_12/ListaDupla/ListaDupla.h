#ifndef LISTADUPLA_LISTADUPLA_H
#define LISTADUPLA_LISTADUPLA_H

#include "NoDuplo.h"

class ListaDupla{
    public:
        ListaDupla();
        ~ListaDupla();
        bool busca(int val);
        void insereInicio(int val);
        void removeInicio();
        void insereFinal(int val);
        void removeFinal();
        void imprime();
        void imprimeReverso();
        void insereK(int k , int val);

    private:
        NoDuplo *primeiro;
        int n;
        NoDuplo *ultimo;
};


#endif //LISTADUPLA_LISTADUPLA_H
