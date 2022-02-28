class Diagonal{
    private:
        int n;
        float *vet;
        bool verifica(int i, int j);
        
    public:
        Diagonal(int n);
        ~Diagonal();

        float get(int n, int j);
        void set(int n, int j, float valor);

};