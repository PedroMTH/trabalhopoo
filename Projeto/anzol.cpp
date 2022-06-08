#include "anzol.h"

Anzol::Anzol(): QObject(), QGraphicsPixmapItem(){
    int aleatorio = rand() % 800;
    setPos(aleatorio, -480);

    setPixmap(QPixmap(":/imagens/imagens/fishhook.png"));
    QTimer*timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(movimentacao()));

    timer2->start(50);

    QTimer*timer3 = new QTimer(this);
    connect(timer3,SIGNAL(timeout()),this,SLOT(spawn()));

    timer3->start(5000);

}

void Anzol::spawn()
{
    Anzol * anzol = new Anzol();
    scene()->addItem(anzol);
}

void Anzol::movimentacao(){

    QList<QGraphicsItem*> teste = collidingItems();
    int n = teste.size(), i=0;

    while(i < n){
        if(typeid(*(teste[i])) == typeid(Player)){
            delete this;
            delete teste[i];
            exit(0);
        }
        i++;
    }

    if(pos().y() < 0)
        setPos(x(),y()+5);
    if(pos().y() == 0)
        QTimer::singleShot(1500, this, SLOT(del()));
    }

void Anzol::del(){
    scene()->removeItem(this);
    delete this;
}


