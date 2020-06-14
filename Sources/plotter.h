#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>
#include <QColor>
#include <QTimerEvent>
#include <vector>
#include "sculptor.h"

class Plotter : public QWidget
{
    Q_OBJECT
public:

    explicit Plotter(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mousePressEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

    void drawforma(int forma, bool mousePressed);


    int vx,vy,vz;

    int sizeX,sizeY,sizeZ;

    int radius,radiusX,radiusY,radiusZ,radiusMax;

    int eixo;

    unsigned int plane;

    int colorRed,colorGreen,colorBlue;

    int transparency;



private:

    Sculptor *fig;

    std::vector<std::vector<Voxel>> m;

    bool mousePressed;

    int mouseX;

    int mouseY;

    int posX;

    int posY;

    int posZ;

    int sizeSquare;

    unsigned int forma;

signals:

  void m_x(int);

  void m_y(int);

  void cli_x(int);

  void cli_y(int);

  void mouseLinha(int);

  void mouseColuna(int);

public slots:

  void muda_x(int size);

  void muda_y(int size);

  void muda_z(int size);

  void muda_r(int rd);

  void muda_rx(int rx);

  void muda_ry(int ry);

  void muda_rz(int rz);

  void changeforma1();

  void changeforma2();

  void changeforma3();

  void changeforma4();

  void changeforma5();

  void changeforma6();

  void changeforma7();

  void changeforma8();

  void saveOFF();

  void saveAll();

  void novo();

  void muda_red(int red);

  void muda_green(int green);

  void muda_blue(int blue);

  void muda_a(int alpha);

  void muda_eixo(int pln);

};

#endif // PLOTTER_H
