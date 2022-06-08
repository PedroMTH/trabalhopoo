#include "PeixeEsp.h"

PeixeEsp::PeixeEsp(): QObject(), QGraphicsPixmapItem(){
    spawn();

    QTimer*timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(movimentacao()));

    timer->start(30);

}

PeixeEsp::~PeixeEsp(){
qDebug() << "deletado";
}

void PeixeEsp::movimentacao(){
    setPos(x()-5,y());
    if(pos().x() < -100){
        scene()->removeItem(this);
        delete this;
    }

}

void PeixeEsp::spawn(){
    int aleatorio = rand() % 450;
    if(aleatorio > 0 && aleatorio < 400)
        setPos(1150, aleatorio);

    setPixmap(QPixmap(":/imagens/imagens/peixeesp.png"));

}
