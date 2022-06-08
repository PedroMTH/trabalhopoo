#include <QTimer>
#include <QFont>
#include <QMainWindow>
#include <fstream>
#include "Jogo.h"
#include "Peixe.h"
#include "PeixeEsp.h"
#include "Pontos.h"
#include "anzol.h"
#include "coin.h"
#include "mouse.h"
#include <QToolBar>
#include <QAction>
#include "telainicio.h"
#include "controle.h"

Pontos * pontos;
Player * player;
TelaInicio * tela;
int p;
void Jogo::mousePressEvent(QMouseEvent *event){
    if(p == 0){
    player = new Player();
    scene->addItem(player);
    player->setPixmap(QPixmap(":/imagens/imagens/carangueijo.png"));
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    player->posicao();

    //setPlainText(QString("Aperte para começar"));

    Anzol * anzol = new Anzol();
    scene->addItem(anzol);

    Coin * coin = new Coin();

    pontos = new Pontos();
    pontos->mostra();
    scene->addItem(pontos);

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(5000);

    QPushButton * bsalvar = new QPushButton;
    bsalvar->setText("Salvar");
    bsalvar->move(850,0);
    scene->addWidget(bsalvar);
    QObject::connect(bsalvar,SIGNAL(clicked(bool)),player,SLOT(salvar()));

    QPushButton * qcarregar = new QPushButton;
    qcarregar->setText("Carregar");
    qcarregar->move(925,0);
    scene->addWidget(qcarregar);
    QObject::connect(qcarregar,SIGNAL(clicked(bool)),player,SLOT(carregar()));

    tela->remove();
    p=1;
}
}

Jogo::Jogo(QWidget *parent){
    p=0;
    QGraphicsScene* scene2 = new QGraphicsScene();
    scene = new QGraphicsScene();

    tela = new TelaInicio();
    tela->moveBy(180,150);
    tela->mostra();
    scene->addItem(tela);


    setSceneRect(0,0,1000,480);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scene->setBackgroundBrush(QBrush(QImage(":/imagens/imagens/Oceanll.png")));

}

Jogo* Jogo::getjogo(){
    if(jogo == nullptr){
        jogo = new Jogo();
        jogo->show();
    }
    return jogo;
}

Jogo* Jogo::jogo = nullptr;

