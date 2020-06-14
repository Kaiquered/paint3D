#include "colorwindow.h"
#include <QPainter>
#include <QColor>
#include <QPen>
#include <QBrush>
#include <QAction>
#include <QMessageBox>
#include <QColorDialog>
#include <QMenu>
#include <QContextMenuEvent>
#include "plotter.h"

ColorWindow::ColorWindow(QWidget *parent) : QWidget(parent)
{
    c_red=1;c_green=1;c_blue=1;alpha=255;
    actionMudaCor = new QAction(this);
    actionMudaCor->setText("Muda Cor");
}

void ColorWindow::paintEvent(QPaintEvent *event)
{
    QPainter pa(this);
    QPen pen;
    QBrush brush;
    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);
    pa.setPen(pen);
    brush.setColor(QColor(c_red,c_green,c_blue,alpha));
    brush.setStyle(Qt::SolidPattern);
    pa.setBrush(brush);


    pa.drawRect(0,0,width(),height());

}

void ColorWindow::m_red(int red)
{
    c_red = red;
    repaint();
}
void ColorWindow::m_green(int green)
{
    c_green = green;
    repaint();
}
void ColorWindow::m_blue(int blue)
{
    c_blue = blue;
    repaint();
}
void ColorWindow::m_alpha(int _alpha)
{
    alpha = _alpha;
    repaint();
}

void ColorWindow::mudaCor(){
  int r, g, b;
  QColor cor;
  QMessageBox box;
  QString msg;
  QColorDialog d;
  d.exec();
  cor = d.selectedColor();
  c_red = cor.red();
  c_green = cor.green();
  c_blue = cor.blue();
  r = cor.red();
  g = cor.green();
  b = cor.blue();
  msg = "r = <b>"+QString::number(r)+"</b> <br>"+
      "g = <b>"+QString::number(g)+"</b> <br>"+
      "b = <b>"+QString::number(b)+"</b>";
  box.setText(msg);
  box.exec();
  repaint();
}

void ColorWindow::contextMenuEvent(QContextMenuEvent *event)
{
  QMenu menu(this);
  menu.addAction(actionMudaCor);
  menu.exec(event->globalPos());
}

