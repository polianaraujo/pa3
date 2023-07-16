#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimerEvent>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();
  tcpDisconnect();

  connect(ui->pushButton_Start,
          SIGNAL(clicked(bool)),
          this,
          SLOT(startTemp()));
  connect(ui->pushButton_Stop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stopTemp()));
  connect(ui->pushButton_Connect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
  connect(ui->pushButton_Disconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));
}

void MainWindow::tcpConnect(){
    socket->connectToHost(ui->lineEdit_ServerIP->text(),1234);

    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        statusBar()->showMessage("Connected");
    }
    else{
        qDebug() << "Disconnected";
        statusBar()->showMessage("Could not connected");
    }
}

void MainWindow::tcpDisconnect(){

    /*if(socket->waitForDisconnected(3000)){
        statusBar()->showMessage("Disconnected");
    }*/
    socket->disconnectFromHost();
    statusBar()->showMessage("Disconnected");
}

void MainWindow::putData(){
    //QDateTime datetime;
    QString str;
    qint64 msecdate;

    if(socket->state()== QAbstractSocket::ConnectedState){

        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " +
            QString::number(rand()%35)+"\r\n";

        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str())
                 << " bytes written";
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
        ui->textBrowser_ShowData->append(str);
    }
}

void MainWindow::startTemp()
{
    int timing = 1000*ui->horizontalSlider_Timing->value();
    temp = startTimer(timing);
}

void MainWindow::stopTemp(){
    killTimer(temp);
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}
