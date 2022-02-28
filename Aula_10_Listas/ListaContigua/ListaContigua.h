
class ListaContigua{

    private:
        int max;
        int n;
        int *vet; 
        void realoca();

    public:
        ListaContigua(int tam);
        ~ListaContigua();

        int get(int k);
        void set(int k, int val);  

        void removeFinal();
        void removeInicio();

        void removeK(int k);
        void insereK(int k, int val);

        void insereFinal(int val);
        void insereInicio(int val);

        void imprime();
};



};