#ifndef ANZOL_H
#define ANZOL_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include <QDebug>
//#include "Jogo.h"
#include "Player.h"
#include "controle.h"

class Anzol:public QObject, public QGraphicsPixmapItem, public Controle{
    Q_OBJECT
public:
    Anzol();
public slots:
    void spawn();
    void movimentacao();
    void del();

};


#endif // ANZOL_H
