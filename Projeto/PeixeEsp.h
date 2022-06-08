#ifndef PEIXEESP_H
#define PEIXEESP_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "controle.h"

class PeixeEsp: public QObject, public QGraphicsPixmapItem, public Controle{
    Q_OBJECT
public:
    PeixeEsp();
    ~PeixeEsp();
public slots:
    void movimentacao();
    void spawn();
};

#endif // PEIXEESP_H
