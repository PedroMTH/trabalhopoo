#include <QGraphicsView>
#include <QGraphicsScene>

class Janela: public QGraphicsView{
public:

    Janela();

    QGraphicsScene * scene;
    void cena();
};
