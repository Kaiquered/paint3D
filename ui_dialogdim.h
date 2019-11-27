/********************************************************************************
** Form generated from reading UI file 'dialogdim.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDIM_H
#define UI_DIALOGDIM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogdim
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderSX;
    QLCDNumber *lcdNumber;
    QSlider *horizontalSliderSY;
    QLCDNumber *lcdNumber_2;
    QSlider *horizontalSliderSZ;
    QLCDNumber *lcdNumber_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialogdim)
    {
        if (Dialogdim->objectName().isEmpty())
            Dialogdim->setObjectName(QString::fromUtf8("Dialogdim"));
        Dialogdim->resize(176, 161);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/Files-New-File-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialogdim->setWindowIcon(icon);
        layoutWidget = new QWidget(Dialogdim);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 156, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSliderSX = new QSlider(layoutWidget);
        horizontalSliderSX->setObjectName(QString::fromUtf8("horizontalSliderSX"));
        horizontalSliderSX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSX, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 1, 1, 1);

        horizontalSliderSY = new QSlider(layoutWidget);
        horizontalSliderSY->setObjectName(QString::fromUtf8("horizontalSliderSY"));
        horizontalSliderSY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSY, 1, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 1, 1, 1);

        horizontalSliderSZ = new QSlider(layoutWidget);
        horizontalSliderSZ->setObjectName(QString::fromUtf8("horizontalSliderSZ"));
        horizontalSliderSZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSZ, 2, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(layoutWidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(Dialogdim);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialogdim, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialogdim, SLOT(reject()));
        QObject::connect(horizontalSliderSX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderSY, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderSZ, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Dialogdim);
    } // setupUi

    void retranslateUi(QDialog *Dialogdim)
    {
        Dialogdim->setWindowTitle(QCoreApplication::translate("Dialogdim", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogdim: public Ui_Dialogdim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDIM_H
