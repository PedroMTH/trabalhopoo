#ifndef TELAINICIO_H
#define TELAINICIO_H
#include <QGraphicsTextItem>
#include <QFont>
#include "Pontos.h"

class TelaInicio: public Pontos{
public:

    TelaInicio(QGraphicsItem * parent=0);
    void incio();
    void mostra();
    void remove();
};

#endif // TELAINICIO_H
