#ifndef PEIXE_H
#define PEIXE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "controle.h"

class Peixe: public QObject, public QGraphicsPixmapItem, public Controle{
    Q_OBJECT
public:
    Peixe();
    ~Peixe();
public slots:
    void spawn();
    void movimentacao();

};


#endif // PEIXE_H
