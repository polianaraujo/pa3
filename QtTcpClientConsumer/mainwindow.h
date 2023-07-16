#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimerEvent>
#include <QListWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
  
    void tcpConnect();
    void tcpDisconnect();

public slots:
    void getData();
    void setIp();
    void copyIp();
    void startTemp();
    void stopTemp();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int temp;
  QString selectedProducerIP;
};

#endif // MAINWINDOW_H
