//
// Created by cadum on 20/02/2022.
//

#ifndef INC_07_NO_H
#define INC_07_NO_H


class No {
public:
    No() {};

    ~No() {};

    void setAnt(No *p) { ant = p; };

    void setProx(No *p) { prox = p; };

    void setInfo(int val) { info = val; };

    No *getAnt() { return ant; };

    No *getProx() { return prox; };

    int getInfo() { return info; };
private:
    No *ant;  /// ponteiro para anterior
    int info;      /// informacao do no
    No *prox; /// ponteiro para proximo
};

#endif //INC_07_NO_H
