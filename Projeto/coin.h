#ifndef COIN_H
#define COIN_H

#include <QGraphicsPixmapItem>
#include <QObject>
//#include "Jogo.h"
#include "controle.h"

class Coin: public QObject, public QGraphicsPixmapItem, public Controle{
    Q_OBJECT
public:
    Coin();
  public slots:
    void spawn();
    void movimentacao();
    void colisao();
};

#endif // COIN_H
