#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QList>
#include <QFont>
#include <stdlib.h>
#include "Jogo.h"
#include "coin.h"
#include "Player.h"

extern Pontos * pontos;

Coin::Coin(): QObject(), QGraphicsPixmapItem(){
    movimentacao();

    QTimer*timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(spawn()));

    QTimer*timer3 = new QTimer(this);
    connect(timer3,SIGNAL(timeout()),this,SLOT(colisao()));

    timer3->start(150);
}

void Coin::spawn()
{
    Coin * coin = new Coin();
    scene()->addItem(coin);
}

void Coin::movimentacao(){
    int aleatorio = rand() % 800;
    setPos(aleatorio, 400);

    setPixmap(QPixmap(":/imagens/imagens/coin.png"));
}

void Coin::colisao(){
QList<QGraphicsItem*> teste = collidingItems();
int n = teste.size(), i=0;

while(i < n){
    if(typeid(*(teste[i])) == typeid(Player)){
        pontos->soma();
        delete this;
        return;
    }
    i++;
}
}
