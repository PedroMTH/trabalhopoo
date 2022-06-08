#include "Player.h"
#include "anzol.h"

extern Pontos * pontos;
extern Player * player;


void Player::keyPressEvent(QKeyEvent *event){
 if(event->key() == Qt::Key_Left){
     if(pos().x() > 0)
     setPos(x()-10,y());
     setPixmap(QPixmap(":/imagens/imagens/carangueijoesq.png"));
 }
 else if(event->key() == Qt::Key_Right){
     if(pos().x()+140<1000)
     setPos(x()+10,y());
     setPixmap(QPixmap(":/imagens/imagens/carangueijo.png"));
 }
}

void Player::posicao(){
    setPos(x()+450,y()+360);
}

void Player::spawn(){
Peixe * peixe = new Peixe();
scene()->addItem(peixe);
PeixeEsp * peixin = new PeixeEsp();
scene()->addItem(peixin);
Coin * coin = new Coin();
scene()->addItem(coin);
}

void Player::salvar(){
    int k = pontos->getpontos();
    if(k == 0){
        QMessageBox msgBox;
        msgBox.setText("Não é possivel salvar sem ter pontuado.");
        msgBox.setGeometry(1920/2,500,100,50);
        msgBox.exec();
        return;
    }

    std::fstream f("texte.txt",std::fstream::out);
    f << k;
    f.close();
    qDebug() << "Salvo";
    player->setFocus();
}

void Player::carregar(){
    std::fstream f("texte.txt",std::fstream::in);
    std::string texto;
    while(!f.eof()){
        std::getline(f,texto);
    }
    pontos->setpontos(stoi(texto));
    qDebug() << "Carregado";
    player->setFocus();
}

