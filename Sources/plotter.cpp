#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>
#include <QtDebug>
#include <QMessageBox>
#include <QDialog>
#include <QString>
#include <QProcess>
#include <vector>
#include <iostream>
#include "dialogdim.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotter.h"
#include "sculptor.h"

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    vx = 50; vy = 50; vz=50;
    fig = new Sculptor(vx,vy,vz);

    eixo=0; plane=1;
    sizeX=0; sizeY=0; sizeZ=0; radius=0;radiusX=0;radiusY=0;radiusZ=0;

    colorRed = 1; colorGreen=1; colorBlue=1; transparency = 255;

    forma=1;
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter pa(this);
    QPen pen;
    QBrush brush;
    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    pa.setPen(pen);
    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pa.setBrush(brush);
    m.clear();
   m = fig ->readMx(eixo,plane);

    int dim1 = width()/m[0].size();
    int dim2 = height()/m.size();

    if(dim1>dim2){
        sizeSquare=dim2;
    }
    else if(dim2>=dim1) {
        sizeSquare=dim1;
    }


    for(unsigned int i =0; i<m.size(); i++){
        for(unsigned int j =0; j<m[0].size(); j++){
            pa.drawRect(i*sizeSquare,j*sizeSquare,sizeSquare, sizeSquare);
        }
    }

    for(unsigned int i=0; i<m.size();i++){    //trabalhar com iterators pra desenhar voxels ligados
       for(unsigned int j=0; j<m[0].size();j++){
            if(m[i][j].isOn){
                    brush.setColor(QColor(m[i][j].r,m[i][j].g,m[i][j].b,m[i][j].a));   //Cor setada por sliders
                    brush.setStyle(Qt::SolidPattern);
                    pa.setBrush(brush);
                    int xcenter =i*sizeSquare;
                    int ycenter =j*sizeSquare;
                    pa.drawEllipse(xcenter,ycenter,sizeSquare,sizeSquare);
            }
       }
    }

}

void Plotter::mouseMoveEvent(QMouseEvent *event){
    emit m_x(event->x());
    emit m_y(event->y());

    mouseX = (event->x())/sizeSquare;
    mouseY = (event->y())/sizeSquare;

    switch(plane){
    case 1:
        posX=mouseX;
        posY=mouseY;
        posZ=eixo;
    break;
    case 2:
        posX=mouseY;
        posY=eixo;
        posZ=mouseX;
    break;
    case 3:
        posX=eixo;
        posY=mouseX;
        posZ=mouseY;
    break;
    case 4:
        posX=mouseY;
        posY=vy-1-mouseX;
        posZ=eixo;
    break;
    case 5:
        posX=vx-1-mouseX;
        posY=eixo;
        posZ=mouseY;
    break;
    case 6:
        posX=eixo;
        posY=mouseY;
        posZ=vz-1-mouseX;
    break;
    case 7:
        posX=vx-1-mouseX;
        posY=vy-1-mouseY;
        posZ=eixo;
    break;
    case 8:
        posX=vx-1-mouseY;
        posY=eixo;
        posZ=vz-1-mouseX;
    break;
    case 9:
        posX=eixo;
        posY=vy-1-mouseX;
        posZ=vz-1-mouseY;
    break;
    case 10:
        posX=vx-1-mouseY;
        posY=mouseX;
        posZ=eixo;
    break;
    case 11:
        posX=mouseX;
        posY=eixo;
        posZ=vz-1-mouseY;
    break;
    case 12:
        posX=eixo;
        posY=vy-1-mouseY;
        posZ=mouseX;
    break;
    case 13:
        posX=mouseY;
        posY=mouseX;
        posZ=eixo;
    break;
    case 14:
        posX=mouseX;
        posY=eixo;
        posZ=mouseY;
    break;
    case 15:
        posX=eixo;
        posY=mouseY;
        posZ=mouseX;
    break;
    case 16:
        posX=mouseX;
        posY=vx-1-mouseY;
        posZ=eixo;
    break;
    case 17:
        posX=mouseX;
        posY=eixo;
        posZ=mouseY;
    break;
    case 18:
        posX=eixo;
        posY=mouseY;
        posZ=mouseX;
    break;
    case 19:
        posX=vx-mouseX;
        posY=vy-mouseY;
        posZ=eixo;
    break;
    case 20:
        posX=mouseY;
        posY=eixo;
        posZ=mouseX;
    break;
    case 21:
        posX=eixo;
        posY=mouseX;
        posZ=mouseY;
    break;
    case 22:
        posX=mouseY;
        posY=mouseX;
        posZ=eixo;
    break;
    case 23:
        posX=mouseX;
        posY=eixo;
        posZ=mouseY;
    break;
    case 24:
        posX=eixo;
        posY=mouseY;
        posZ=mouseX;
    break;
    }
    emit mouseLinha(posX+1);
    emit mouseColuna(posY+1);

    Plotter::drawforma(forma,mousePressed);


}

void Plotter::mousePressEvent(QMouseEvent *event){
  if(event->button() == Qt::LeftButton){
    emit cli_x(event->x());
    emit cli_y(event->y());
    mousePressed = true;
    mouseX = (event->x())/sizeSquare;
    mouseY = (event->y())/sizeSquare;

    switch(plane){
    case 1:
        posX=mouseX;
        posY=mouseY;
        posZ=eixo;
    break;
    case 2:
        posX=mouseY;
        posY=eixo;
        posZ=mouseX;
    break;
    case 3:
        posX=eixo;
        posY=mouseX;
        posZ=mouseY;
    break;
    case 4:
        posX=mouseY;
        posY=vy-1-mouseX;
        posZ=eixo;
    break;
    case 5:
        posX=vx-1-mouseX;
        posY=eixo;
        posZ=mouseY;
    break;
    case 6:
        posX=eixo;
        posY=mouseY;
        posZ=vz-1-mouseX;
    break;
    case 7:
        posX=vx-1-mouseX;
        posY=vy-1-mouseY;
        posZ=eixo;
    break;
    case 8:
        posX=vx-1-mouseY;
        posY=eixo;
        posZ=vz-1-mouseX;
    break;
    case 9:
        posX=eixo;
        posY=vy-1-mouseX;
        posZ=vz-1-mouseY;
    break;
    case 10:
        posX=vx-1-mouseY;
        posY=mouseX;
        posZ=eixo;
    break;
    case 11:
        posX=mouseX;
        posY=eixo;
        posZ=vz-1-mouseY;
    break;
    case 12:
        posX=eixo;
        posY=vy-1-mouseY;
        posZ=mouseX;
    break;
    case 13:
        posX=mouseY;
        posY=mouseX;
        posZ=eixo;
    break;
    case 14:
        posX=mouseX;
        posY=eixo;
        posZ=mouseY;
    break;
    case 15:
        posX=eixo;
        posY=mouseY;
        posZ=mouseX;
    break;
    case 16:
        posX=mouseX;
        posY=vx-1-mouseY;
        posZ=eixo;
    break;
    case 17:
        posX=vx-1-mouseY;
        posY=eixo;
        posZ=mouseX;
    break;
    case 18:
        posX=eixo;
        posY=mouseX;
        posZ=vz-1-mouseY;
    break;
    case 19:
        posX=mouseX;
        posY=mouseY;
        posZ=eixo;
    break;
    case 20:
        posX=mouseY;
        posY=eixo;
        posZ=mouseX;
    break;
    case 21:
        posX=eixo;
        posY=mouseX;
        posZ=mouseY;
    break;
    case 22:
        posX=mouseY;
        posY=mouseX;
        posZ=eixo;
    break;
    case 23:
        posX=mouseX;
        posY=eixo;
        posZ=mouseY;
    break;
    case 24:
        posX=eixo;
        posY=mouseY;
        posZ=mouseX;
    break;
    }
    emit mouseLinha(posX+1);
    emit mouseColuna(posY+1);

    Plotter::drawforma(forma,mousePressed);
  }
}

void Plotter::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
       mousePressed = false;
    }
}

void Plotter::drawforma(int forma, bool mousePressed){

  if(mousePressed){
    if(forma == 1)
    {
       fig->setColor(colorRed,colorGreen,colorBlue,transparency);
       fig->putVoxel(posX,posY,posZ);
    }
    if(forma == 2)
    {
       fig->cutVoxel(posX,posY,posZ);
    }
    if(forma == 3)
    {
        fig->setColor(colorRed,colorGreen,colorBlue,transparency);
        fig->putBox(posX,(posX+sizeX),posY,(posY+sizeY),posZ,(posZ+sizeZ));

    }
    if(forma == 4)
    {
       fig->cutBox(posX,(posX+sizeX),posY,(posY+sizeY),posZ,(posZ+sizeZ));
    }
    if(forma == 5)
    {
        fig->setColor(colorRed,colorGreen,colorBlue,transparency);
        fig->putSphere(posX,posY,posZ,radius);

    }
    if(forma == 6)
    {
       fig->cutSphere(posX,posY,posZ,radius);;
    }
    if(forma == 7)
    {
        fig->setColor(colorRed,colorGreen,colorBlue,transparency);
        fig->putEllipsoid(posX,posY,posZ,radiusX,radiusY,radiusZ);

    }
    if(forma == 8)
    {
       fig->cutEllipsoid(posX,posY,posZ,radiusX,radiusY,radiusZ);
    }
    repaint();
    }
}

void Plotter::muda_red(int red)
{
    colorRed = red;
}
void Plotter::muda_green(int green)
{
    colorGreen = green;
}
void Plotter::muda_blue(int blue)
{
    colorBlue = blue;
}
void Plotter::muda_a(int alpha)
{
    transparency = alpha;
}

void Plotter::muda_x(int size)
{
    sizeX=size;
}
void Plotter::muda_y(int size)
{
    sizeY=size;
}
void Plotter::muda_z(int size)
{
    sizeZ=size;
}
void Plotter::muda_r(int rd)
{
    radius=rd;
}
void Plotter::muda_rx(int rx)
{
    radiusX=rx;
}
void Plotter::muda_ry(int ry)
{
    radiusY=ry;
}
void Plotter::muda_rz(int rz)
{
    radiusZ=rz;
}
void Plotter::muda_eixo(int pln)
{
    eixo = pln;
    repaint();
}



void Plotter::changeforma1() //PV
{
    forma = 1;


}
void Plotter::changeforma2()
{
    forma = 2;

}
void Plotter::changeforma3()
{
    forma = 3;

}
void Plotter::changeforma4()
{
    forma = 4;
    ;
}
void Plotter::changeforma5()
{
    forma = 5;

}
void Plotter::changeforma6()
{
    forma = 6;

}
void Plotter::changeforma7()
{
    forma = 7;

}
void Plotter::changeforma8()
{
    forma = 8;

}



void Plotter::saveOFF()
{
    fig->writeOFF("File.off");


}
void Plotter::saveAll()
{

    fig->writeOFF("File.off");
}

void Plotter::novo()
{
     QMessageBox box;
     QString msg;
     Dialogdim dialog;

     if(dialog.exec() == QDialog::Accepted){
       msg = "Novo Arquivo Criado!";
       box.setText(msg);
       box.exec();
     }

    fig->~Sculptor();

    vx = dialog.ler_x();
    vy = dialog.ler_y();
    vz = dialog.ler_z();



    fig = new Sculptor(dialog.ler_x(),dialog.ler_y(),dialog.ler_z());

    eixo = 0;


    repaint();

}
