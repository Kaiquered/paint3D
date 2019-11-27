/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorwindow.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPutVoxel;
    QAction *actionCutVoxel;
    QAction *actionPutBox;
    QAction *actionCutBox;
    QAction *actionPutSphere;
    QAction *actionCutSphere;
    QAction *actionPutEllipsoid;
    QAction *actionCutEllipsoid;
    QAction *actionNewBox;
    QAction *actionShow_OFF;
    QAction *actionSave;
    QAction *actionSair;
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdNumber_5;
    QSlider *horizontalSliderRY;
    QLCDNumber *lcdNumber_6;
    QSlider *horizontalSliderRZ;
    QSlider *horizontalSliderRX;
    QLabel *label_6;
    QLCDNumber *lcdNumber_7;
    QLabel *label_7;
    QLabel *label_5;
    ColorWindow *widgetColor;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLCDNumber *lcdNumber_9;
    QLCDNumber *lcdNumber_10;
    QLabel *label_12;
    QSlider *horizontalSliderBlue;
    QLCDNumber *lcdNumber_12;
    QLCDNumber *lcdNumber_11;
    QSlider *horizontalSliderGreen;
    QSlider *horizontalSliderRed;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_9;
    QSlider *horizontalSliderAlpha;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderY;
    QLabel *label;
    QSlider *horizontalSliderX;
    QSlider *horizontalSliderZ;
    QLCDNumber *lcdNumber_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber_3;
    QLabel *label_3;
    QLCDNumber *lcdNumber;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdNumber_4;
    QLabel *label_4;
    QSlider *horizontalSliderRD;
    Plotter *widgetPlotter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QSlider *horizontalSlidereixo;
    QLCDNumber *lcdNumber_8;
    QStatusBar *statusBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(990, 687);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/pngtree-vector-drawing-brush-icon-png-image_313055.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setAnimated(true);
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/pngtree-vector-drawing-brush-icon-png-image_313055.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/images/images/index2.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        actionPutVoxel->setIcon(icon1);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutVoxel->setIcon(icon2);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/putbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutBox->setIcon(icon3);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/84583.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutBox->setIcon(icon4);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/blue-icon-hi.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutSphere->setIcon(icon5);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/cutesfera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSphere->setIcon(icon6);
        actionPutEllipsoid = new QAction(MainWindow);
        actionPutEllipsoid->setObjectName(QString::fromUtf8("actionPutEllipsoid"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/elipse-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutEllipsoid->setIcon(icon7);
        actionCutEllipsoid = new QAction(MainWindow);
        actionCutEllipsoid->setObjectName(QString::fromUtf8("actionCutEllipsoid"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/300px-Ellipse_black.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutEllipsoid->setIcon(icon8);
        actionNewBox = new QAction(MainWindow);
        actionNewBox->setObjectName(QString::fromUtf8("actionNewBox"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/Files-New-File-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewBox->setIcon(icon9);
        actionShow_OFF = new QAction(MainWindow);
        actionShow_OFF->setObjectName(QString::fromUtf8("actionShow_OFF"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/save-icon-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon10);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/com.pandaz.app.forcequit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 160, 231, 131));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lcdNumber_5 = new QLCDNumber(groupBox_2);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout_3->addWidget(lcdNumber_5, 0, 2, 1, 1);

        horizontalSliderRY = new QSlider(groupBox_2);
        horizontalSliderRY->setObjectName(QString::fromUtf8("horizontalSliderRY"));
        horizontalSliderRY->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRY, 1, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(groupBox_2);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout_3->addWidget(lcdNumber_6, 1, 2, 1, 1);

        horizontalSliderRZ = new QSlider(groupBox_2);
        horizontalSliderRZ->setObjectName(QString::fromUtf8("horizontalSliderRZ"));
        horizontalSliderRZ->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRZ, 2, 1, 1, 1);

        horizontalSliderRX = new QSlider(groupBox_2);
        horizontalSliderRX->setObjectName(QString::fromUtf8("horizontalSliderRX"));
        horizontalSliderRX->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRX, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        lcdNumber_7 = new QLCDNumber(groupBox_2);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        gridLayout_3->addWidget(lcdNumber_7, 2, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        widgetColor = new ColorWindow(centralWidget);
        widgetColor->setObjectName(QString::fromUtf8("widgetColor"));
        widgetColor->setGeometry(QRect(260, 460, 91, 121));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 450, 231, 131));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lcdNumber_9 = new QLCDNumber(groupBox_4);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));

        gridLayout_5->addWidget(lcdNumber_9, 0, 2, 1, 1);

        lcdNumber_10 = new QLCDNumber(groupBox_4);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));

        gridLayout_5->addWidget(lcdNumber_10, 1, 2, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 3, 0, 1, 1);

        horizontalSliderBlue = new QSlider(groupBox_4);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderBlue, 2, 1, 1, 1);

        lcdNumber_12 = new QLCDNumber(groupBox_4);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));

        gridLayout_5->addWidget(lcdNumber_12, 3, 2, 1, 1);

        lcdNumber_11 = new QLCDNumber(groupBox_4);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));

        gridLayout_5->addWidget(lcdNumber_11, 2, 2, 1, 1);

        horizontalSliderGreen = new QSlider(groupBox_4);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setSliderPosition(99);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderGreen, 1, 1, 1, 1);

        horizontalSliderRed = new QSlider(groupBox_4);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderRed, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        horizontalSliderAlpha = new QSlider(groupBox_4);
        horizontalSliderAlpha->setObjectName(QString::fromUtf8("horizontalSliderAlpha"));
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderAlpha, 3, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 231, 131));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSliderY = new QSlider(groupBox);
        horizontalSliderY->setObjectName(QString::fromUtf8("horizontalSliderY"));
        horizontalSliderY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderY, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSliderX = new QSlider(groupBox);
        horizontalSliderX->setObjectName(QString::fromUtf8("horizontalSliderX"));
        horizontalSliderX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderX, 0, 1, 1, 1);

        horizontalSliderZ = new QSlider(groupBox);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderZ, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(groupBox);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 300, 231, 91));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lcdNumber_4 = new QLCDNumber(groupBox_3);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout_2->addWidget(lcdNumber_4, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        horizontalSliderRD = new QSlider(groupBox_3);
        horizontalSliderRD->setObjectName(QString::fromUtf8("horizontalSliderRD"));
        horizontalSliderRD->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderRD, 0, 1, 1, 1);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QString::fromUtf8("widgetPlotter"));
        widgetPlotter->setGeometry(QRect(360, 10, 621, 601));
        widgetPlotter->setMinimumSize(QSize(471, 431));
        layoutWidget = new QWidget(widgetPlotter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, -20, 162, 426));
        gridLayout_8 = new QGridLayout(layoutWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 20, 66, 431));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setStyleSheet(QString::fromUtf8("t"));

        verticalLayout->addWidget(label_8);

        horizontalSlidereixo = new QSlider(layoutWidget1);
        horizontalSlidereixo->setObjectName(QString::fromUtf8("horizontalSlidereixo"));
        horizontalSlidereixo->setLayoutDirection(Qt::LeftToRight);
        horizontalSlidereixo->setStyleSheet(QString::fromUtf8(""));
        horizontalSlidereixo->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(horizontalSlidereixo);

        lcdNumber_8 = new QLCDNumber(layoutWidget1);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));

        verticalLayout->addWidget(lcdNumber_8);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        toolBar_2->addAction(actionNewBox);
        toolBar_2->addAction(actionPutVoxel);
        toolBar_2->addAction(actionCutVoxel);
        toolBar_2->addAction(actionPutBox);
        toolBar_2->addAction(actionCutBox);
        toolBar_2->addAction(actionPutSphere);
        toolBar_2->addAction(actionCutSphere);
        toolBar_2->addAction(actionPutEllipsoid);
        toolBar_2->addAction(actionCutEllipsoid);
        toolBar_2->addAction(actionSave);
        toolBar_2->addAction(actionSair);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderY, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderRD, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSliderRX, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSliderRY, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSliderRZ, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(horizontalSliderAlpha, SIGNAL(valueChanged(int)), lcdNumber_12, SLOT(display(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeRed(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeGreen(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeBlue(int)));
        QObject::connect(horizontalSlidereixo, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Escutor Digital", nullptr));
        actionPutVoxel->setText(QCoreApplication::translate("MainWindow", "Put Voxel", nullptr));
#if QT_CONFIG(shortcut)
        actionPutVoxel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutVoxel->setText(QCoreApplication::translate("MainWindow", "cutVoxel", nullptr));
#if QT_CONFIG(shortcut)
        actionCutVoxel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPutBox->setText(QCoreApplication::translate("MainWindow", "putBox", nullptr));
#if QT_CONFIG(shortcut)
        actionPutBox->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutBox->setText(QCoreApplication::translate("MainWindow", "cutBox", nullptr));
#if QT_CONFIG(shortcut)
        actionCutBox->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPutSphere->setText(QCoreApplication::translate("MainWindow", "putSphere", nullptr));
#if QT_CONFIG(shortcut)
        actionPutSphere->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutSphere->setText(QCoreApplication::translate("MainWindow", "cutSphere", nullptr));
#if QT_CONFIG(shortcut)
        actionCutSphere->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "putEllipsoid", nullptr));
#if QT_CONFIG(shortcut)
        actionPutEllipsoid->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "cutEllipsoid", nullptr));
#if QT_CONFIG(shortcut)
        actionCutEllipsoid->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewBox->setText(QCoreApplication::translate("MainWindow", "NewBox", nullptr));
#if QT_CONFIG(shortcut)
        actionNewBox->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_OFF->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
#if QT_CONFIG(tooltip)
        actionShow_OFF->setToolTip(QCoreApplication::translate("MainWindow", "OFF", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShow_OFF->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Raio da Elipse", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Cor", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Tamanho do Cubo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Raio da Espera", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Eixo X", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
