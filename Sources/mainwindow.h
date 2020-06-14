#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sculptor.h"
#include "vector"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();    

private:

    Ui::MainWindow *ui;


public slots:

    void nova_matriz();

    void novo_eixo();


};

#endif // MAINWINDOW_H
