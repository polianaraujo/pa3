#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT

private:
    int *alt;
    QTimer *atual;
    QVector<int> valor;

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

signals:


public slots:
    void setValor(int _valor);
};

#endif // PLOTTER_H
