#include "dialogdim.h"
#include "ui_dialogdim.h"

Dialogdim::Dialogdim(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogdim)
{
    ui->setupUi(this);
    ui->horizontalSliderSX->setTickInterval(2);
    ui->horizontalSliderSY->setTickInterval(2);
    ui->horizontalSliderSZ->setTickInterval(2);

    ui->horizontalSliderSX->setMinimum(2);
    ui->horizontalSliderSY->setMinimum(2);
    ui->horizontalSliderSZ->setMinimum(2);

    ui->horizontalSliderSX->setMaximum(100);
    ui->horizontalSliderSY->setMaximum(100);
    ui->horizontalSliderSZ->setMaximum(100);
}

Dialogdim::~Dialogdim()
{
    delete ui;
}

int Dialogdim::ler_x()
{
  return ui->horizontalSliderSX->value();
}

int Dialogdim::ler_y()
{
  return ui->horizontalSliderSY->value();
}

int Dialogdim::ler_z()
{
  return ui->horizontalSliderSZ->value();
}
