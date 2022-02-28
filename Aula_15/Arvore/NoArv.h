#ifndef ARVORE_NOARV_H
#define ARVORE_NOARV_H

class NoArv{
private:
    NoArv* esq;
    int info;
    NoArv* dir;
public:
    NoArv(){ };
    ~NoArv(){ };
    void setEsq(NoArv *p){ esq = p; };
    void setInfo(int val){ info = val; };
    void setDir(NoArv *p){ dir = p; };
    NoArv* getEsq(){ return esq; };
    int getInfo(){ return info; };
    NoArv* getDir(){ return dir; };
};


#endif //ARVORE_NOARV_H
