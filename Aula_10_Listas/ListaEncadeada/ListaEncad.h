#ifndef LISTAENCAD_H_INCLUDED
#define LISTAENCAD_H_INCLUDED
#include "No.h"

class ListaEncad{
    public:
        ListaEncad();
        ~ListaEncad();
        bool busca(int val);        
        int get(int k);             
        void set(int k, int val);   
        void insereInicio(int val); 
        void insereFinal(int val);  
        void removeInicio();        
        void removeFinal();         
    
    private:
        No *primeiro;  
        No *ultimo;    
        int n;         
    };
#endif
