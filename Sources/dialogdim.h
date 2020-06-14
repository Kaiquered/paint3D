#ifndef DIALOGDIM_H
#define DIALOGDIM_H

#include <QDialog>

namespace Ui {
class Dialogdim;
}

class Dialogdim : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogdim(QWidget *parent = nullptr);
    ~Dialogdim();

    int ler_x();

    int ler_y();

    int ler_z();


private:
    Ui::Dialogdim *ui;
};

#endif
