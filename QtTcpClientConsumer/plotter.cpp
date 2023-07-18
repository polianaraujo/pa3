#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget{parent}
{
    alt = new int;
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
    pen.setColor(QColor(255,100,0));
    int x1, y1, x2, y2;
    int width=this->width(), height=this->height();

    //Escala dos eixos x e y do gráfico
    double xScale = width  / 31;
    double yScale = height / 100;

    x1 = 0;
    y1 = height;
    //y2 = valor;

    for(int i=0; i < valor.size(); i++)
    {
        x2 = i * xScale;                    // tempo ao longo do eixo x (na escala definida)
        y2 = height - (valor.at(i)*yScale); // valor do dado (altura total - o tamanho do dado gerado) recebendo assim a posição que deve ser colocado no gráfico. isso na escala de y definida
        painter.drawLine(x1, y1, x2, y2);   // desenhar uma reta do dado i até o i+1

        /*int aux1;
        aux1 = x2;
        x1 = aux1;

        int aux2;
        aux2 = y2
        y1 = aux2;*/

        x1 = x2;
        y1 = y2;
        if(valor.size() >= 34) valor.erase(valor.begin());
    }
}

void Plotter::setValor(int _valor)
{
    valor.append(_valor);
    repaint();
}
