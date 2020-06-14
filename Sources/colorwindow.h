#ifndef COLORWINDOW_H
#define COLORWINDOW_H

#include <QWidget>
#include <QColor>

class ColorWindow : public QWidget
{
    Q_OBJECT

public:

    explicit ColorWindow(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);

    void contextMenuEvent(QContextMenuEvent *event);

    int c_red;
    int c_green;
    int c_blue;
    int alpha;

    QAction *actionMudaCor;

private:
signals:

public slots:

    void m_red(int red);

    void m_green(int green);

    void m_blue(int blue);

    void m_alpha(int alpha);

    void mudaCor();
};

#endif // COLORWINDOW_H
