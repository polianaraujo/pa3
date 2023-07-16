#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget{parent}
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    //Brush cor amarela
    brush.setColor(QColor(255,255,100));
    brush.setStyle(Qt::SolidPattern);

    //Caneta cor vermelha
    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);

    //informa ao pintor qual o brush atual
    painter.setBrush(brush);

    //informa ao pintor qual a caneta atual
    painter.setPen(pen);

    //desenha um retangulo abrangendo toda a extensão componente
    //draw.Rect(int x1, int y1, int w, int h)
    painter.drawRect(0,0, width(), height());
}
