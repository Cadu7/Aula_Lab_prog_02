class Matriz{
    public:
        Matriz(int mm, int nn);
        ~Matriz();
        float get(int i, int j);
        void set(int i, int j, float valor);
        void imprime(int mm, int nn);
    private:
        int nl, nc;
        float *vet;
        int index(int i , int j);    

};