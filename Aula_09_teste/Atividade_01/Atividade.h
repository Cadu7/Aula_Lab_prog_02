class Atividade{

    private:
        int totalQuestoes ;
        float valorQuestao ; 
        float *notas ; 

    public:
        Atividade(int quantQuestoes);
        ~Atividade();
        void leNotas();
        void imprimeRelatorio();
};