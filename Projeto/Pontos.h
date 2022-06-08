#ifndef PONTOS_H
#define PONTOS_H

#include <QGraphicsTextItem>
#include <QFont>
#include <fstream>

class Pontos: public QGraphicsTextItem{
public:
    Pontos(QGraphicsItem * parent=0);
    void mostra();
    void soma();
    void setpontos(int x);
    int getpontos();
private:
    int pontos;
};

#endif // PONTOS_H
