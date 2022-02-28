class Relogio{

    private:
        int hora;
        int minuto;
        int segundo;
    
    public:
        Relogio(int hora, int minuto, int segundo);
        Relogio();
        ~Relogio();
        void acertar(int hora, int minuto, int segundo);
        int getHora();
        int getMinuto();
        int getSegundo();
        void getHorario();
        void tique();
};