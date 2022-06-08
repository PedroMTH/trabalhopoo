#include <QApplication>
#include "Jogo.h"
#include "Pontos.h"
#include "mainwindow.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    Jogo::getjogo();

    return a.exec();
}
