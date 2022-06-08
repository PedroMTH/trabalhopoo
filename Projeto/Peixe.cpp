#include "Peixe.h"

Peixe::Peixe(): QObject(), QGraphicsPixmapItem(){
    spawn();
    QTimer*timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(movimentacao()));

    timer->start(50);

}

Peixe::~Peixe(){
qDebug() << "deletado";
}

void Peixe::movimentacao(){
    setPos(x()+5,y());
    if(pos().x() > 1100){
        scene()->removeItem(this);
        delete this;
    }

}

void Peixe::spawn(){
    int aleatorio = rand() % 450;
    if(aleatorio > 0 && aleatorio < 400)
    setPos(-150, aleatorio);

    setPixmap(QPixmap(":/imagens/imagens/peixin.png"));
}
