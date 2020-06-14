/***************************************************************

Universidade Federal do Rio Grande do Norte

Projeto desenvolvido na disciplina DCA1202: Programação Avançada

Desenvolvido por: Kaíque Gomes Machado , Marlucy Barbosa Costa

Orientação: Prof. Dr. Agostinho De Medeiros Brito Junior

2019

****************************************************************
*/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
