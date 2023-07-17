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

    //gerar gráfico
    int x1, y1, x2, y2;

    x1=0;
    y1=height();
    y2=valor;

    m = (double) (height() - y2)/(double)width();
    //b =

    for(int i=1; i<width(); i++)
    {
        //desenha o gráfico dos dados gerados ao longo do tempo
        pen.setColor(QColor(255,100,0));
        painter.setPen(pen);

        x2 = i + width()/30; // temp
        y2 = (m*x2 + valor); // valor do dado gerado
        painter.drawLine(x1, y1, x2, y2);

        int aux1;
        aux1 = x2;
        x1 = aux1;

        int aux2;
        aux2 = y2
        y1 = aux2;
    }
}

void Plotter::setValor(int _valor);
{
    if(_valor != valor)
    {
        valor = _valor;
        repaint();
    }
}
