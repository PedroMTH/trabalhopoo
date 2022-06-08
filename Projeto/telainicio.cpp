#include "telainicio.h"

TelaInicio::TelaInicio(QGraphicsItem *parent)
{
}

void TelaInicio::mostra(){
    setPlainText(QString("Clique para comecar: "));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",50));
}

void TelaInicio::remove(){
     delete this;
}
