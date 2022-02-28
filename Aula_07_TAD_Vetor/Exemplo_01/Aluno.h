
class Aluno{

    private:
        int idade;
        char nome[40], matricula[50];
        double notas[7];

    public:
        Aluno(char nome[40], char matricula[50]);
        ~Aluno();
        void lerNotas();
        double calculaMedia();
        void setMatricula();
        char* getMatricula();
        void setNome();
        char* getNome();
};