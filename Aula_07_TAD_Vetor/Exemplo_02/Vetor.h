
class Vetor {

    private:
        int n;
        float *vet;
        bool verifica(int indice);

    public:
        Vetor(int tam);
        ~Vetor();
        float get(int index);
        void set( int indice, float valor);

};