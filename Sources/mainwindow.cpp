#include <QString>
#include <QProcess>
#include <QtDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sculptor.h"
#include "plotter.h"
#include "dialogdim.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSliderX->setMaximum(ui->widgetPlotter->vx-1);
    ui->horizontalSliderY->setMaximum(ui->widgetPlotter->vy-1);
    ui->horizontalSliderZ->setMaximum(ui->widgetPlotter->vz-1);
    ui->horizontalSliderRD->setMaximum(ui->widgetPlotter->vx/2 -1);
    ui->horizontalSliderRX->setMaximum(ui->widgetPlotter->vx/2 -1);
    ui->horizontalSliderRY->setMaximum(ui->widgetPlotter->vy/2 -1);
    ui->horizontalSliderRZ->setMaximum(ui->widgetPlotter->vz/2 -1);

    ui->horizontalSliderRed->setMaximum(255);
    ui->horizontalSliderGreen->setMaximum(255);
    ui->horizontalSliderBlue->setMaximum(255);
    ui->horizontalSliderAlpha->setMaximum(255);
    ui->horizontalSliderRed->setMinimum(1);
    ui->horizontalSliderGreen->setMinimum(1);
    ui->horizontalSliderBlue->setMinimum(1);
    ui->horizontalSliderAlpha->setMinimum(1);
    ui->horizontalSliderRed->setSliderPosition(1);
    ui->horizontalSliderGreen->setSliderPosition(1);
    ui->horizontalSliderBlue->setSliderPosition(1);
    ui->horizontalSliderAlpha->setSliderPosition(1);

    ui->horizontalSlidereixo->setMaximum(ui->widgetPlotter->vz -1);


    connect(ui->actionPutVoxel,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma1()));

    connect(ui->actionCutVoxel,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma2()));

    connect(ui->actionPutBox,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma3()));

    connect(ui->actionCutBox,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma4()));

    connect(ui->actionPutSphere,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma5()));

    connect(ui->actionCutSphere,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma6()));

    connect(ui->actionPutEllipsoid,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma7()));

    connect(ui->actionCutEllipsoid,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(changeforma8()));


    connect(ui->horizontalSliderX,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_x(int)));

    connect(ui->horizontalSliderY,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_y(int)));

    connect(ui->horizontalSliderZ,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_z(int)));

    connect(ui->horizontalSliderRD,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_r(int)));

    connect(ui->horizontalSliderRX,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_rx(int)));

    connect(ui->horizontalSliderRY,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_ry(int)));

    connect(ui->horizontalSliderRZ,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_rz(int)));

    connect(ui->horizontalSliderRed,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_red(int)));

    connect(ui->horizontalSliderGreen,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_green(int)));

    connect(ui->horizontalSliderBlue,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_blue(int)));

    connect(ui->horizontalSliderAlpha,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_a(int)));

    connect(ui->horizontalSlidereixo,
            SIGNAL(valueChanged(int)),
            ui->widgetPlotter,
            SLOT(muda_eixo(int)));

    connect(ui->actionSave,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(saveAll()));


    connect(ui->horizontalSliderRed,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(m_red(int)));

    connect(ui->horizontalSliderGreen,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(m_green(int)));

    connect(ui->horizontalSliderBlue,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(m_blue(int)));

    connect(ui->horizontalSliderAlpha,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(m_alpha(int)));

    connect(ui->actionNewBox,
            SIGNAL(triggered(bool)),
            ui->widgetPlotter,
            SLOT(novo()));

    connect(ui->actionNewBox,
            SIGNAL(triggered(bool)),
            this,
            SLOT(nova_matriz()));


    connect(ui->actionPutVoxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->actionCutVoxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->actionPutBox,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->actionCutBox,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->actionPutSphere,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->actionCutSphere,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->actionPutEllipsoid,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->actionCutEllipsoid,
            SIGNAL(triggered(bool)),
            this,
            SLOT(updateShapeText()));

    connect(ui->horizontalSliderX,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(novo_eixo()));

    connect(ui->horizontalSliderY,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(updateeixoSlider()));

    connect(ui->horizontalSliderZ,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(updateeixoSlider()));


    connect(ui->widgetColor->actionMudaCor,
            SIGNAL(triggered(bool)),
            ui->widgetColor,
            SLOT(mudaCor()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::novo_eixo()
{
    int plane = ui->widgetPlotter->plane;
    if(plane==1||plane==4||plane==7||plane==10)  {
        ui->horizontalSlidereixo->setMaximum(ui->widgetPlotter->vz -1);

    }
    else if(plane==2||plane==5||plane==8||plane==11){
        ui->horizontalSlidereixo->setMaximum(ui->widgetPlotter->vy -1);

    }
    else {
        ui->horizontalSlidereixo->setMaximum(ui->widgetPlotter->vx -1);

    }

}



void MainWindow::nova_matriz(){

    ui->horizontalSliderX->setMaximum(ui->widgetPlotter->vx-1);
    ui->horizontalSliderY->setMaximum(ui->widgetPlotter->vy-1);
    ui->horizontalSliderZ->setMaximum(ui->widgetPlotter->vz-1);
    ui->horizontalSliderRD->setMaximum(ui->widgetPlotter->vx/2 -1);
    ui->horizontalSliderRX->setMaximum(ui->widgetPlotter->vx/2 -1);
    ui->horizontalSliderRY->setMaximum(ui->widgetPlotter->vy/2 -1);
    ui->horizontalSliderRZ->setMaximum(ui->widgetPlotter->vz/2 -1);
    ui->horizontalSlidereixo->setMaximum(ui->widgetPlotter->vz -1);


}
