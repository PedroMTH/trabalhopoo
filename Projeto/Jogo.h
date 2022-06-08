#ifndef JOGO_H
#define JOGO_H

#include <QGraphicsView>
#include <QWidget>
#include <QPushButton>
#include <QDialog>
//#include "Peixe.h"
#include "Player.h"
#include "Pontos.h"

class Jogo: public QGraphicsView{
    static Jogo* jogo;
    Jogo(QWidget *parent = 0);
public:
    QGraphicsScene * scene;
    static Jogo* getjogo();
    void mousePressEvent(QMouseEvent* event);
};

#endif // JOGO_H
