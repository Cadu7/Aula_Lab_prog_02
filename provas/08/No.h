#ifndef INC_08_NO_H
#define INC_08_NO_H

class No {
private:
    int info;
    No *prox;
public:
    No() {};

    ~No() {};

    void setInfo(int val) { info = val; };

    void setProx(No *p) { prox = p; };

    int getInfo() { return info; };

    No *getProx() { return prox; };
};

#endif //INC_08_NO_H
