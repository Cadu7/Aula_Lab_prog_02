class MatrizEspecial{

    private:
        int tamanho;
        int *vet;
        int detInd(int i, int j);
    
    public:
        MatrizEspecial(int tamanho);
        ~MatrizEspecial();
        int get(int i, int j);
        void set (int i, int j, int valor);

};