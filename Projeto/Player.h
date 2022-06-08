#ifndef PLAYER_H
#define PLAYER_H

#include <QKeyEvent>
#include <QGraphicsScene>
#include <fstream>
#include <QMessageBox>
#include <QGraphicsPixmapItem>
#include <QObject>
#include "Pontos.h"
#include "Peixe.h"
#include "PeixeEsp.h"
#include "coin.h"

class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
       void keyPressEvent(QKeyEvent * event);
       void posicao();
public slots:
       void spawn();
       void salvar();
       void carregar();
};

#endif // PLAYER_H
