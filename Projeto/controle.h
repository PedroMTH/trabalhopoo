#ifndef CONTROLE_H
#define CONTROLE_H
#include <QMainWindow>

class Controle{
public:
    virtual void movimentacao() = 0;
    virtual void spawn() = 0;
};

#endif // CONTROLE_H
