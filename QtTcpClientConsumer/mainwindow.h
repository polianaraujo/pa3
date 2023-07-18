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

public slots:
    void getData();

    void tcpConnect();
    void tcpDisconnect();

    void valorTemp(int); // void valorInterv(int);

    void startTemp();
    void stopTemp();

    void insertMachines(); //void updateIp(); void copiatexto();

    void timerEvent(QTimerEvent *event);

    void itemSelected(QListWidgetItem *item);

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QString selectedProducerIP;
  QStringList IPList;

  int temp;
  int valores;
};

#endif // MAINWINDOW_H
