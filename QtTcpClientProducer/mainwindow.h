#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>
#include <QTimer>
#include <QTimerEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void tcpConnect();
    void tcpDisconnect();

    void quantidadeMax(int);
    void quantidadeMin(int);
    void valorTemp(int);

    void putData();

    void startTemp();
    void stopTemp();

    void timerEvent(QTimerEvent *event);

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QTimer *Timer;
    int temp;
    int quantMAX;
    int quantMIN;
};

#endif // MAINWINDOW_H
