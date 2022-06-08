#include "Pontos.h"


Pontos::Pontos(QGraphicsItem *parent): QGraphicsTextItem(parent){
    pontos = 0;
}

void Pontos::mostra(){
    setPlainText(QString("Pontuacao: ") + QString::number(pontos));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
}

void Pontos::soma(){
    pontos++;
    setPlainText(QString("Pontuacao: ") + QString::number(pontos));
}


int Pontos::getpontos(){
    return pontos;
}

void Pontos::setpontos(int x){
    pontos = x;
    setPlainText(QString("Pontuacao: ") + QString::number(pontos));
}
