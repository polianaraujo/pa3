#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimerEvent>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);

    connect(ui->pushButton_Start,
            SIGNAL(clicked(bool)),
            this,
            SLOT(startTemp()));

    connect(ui->pushButton_Stop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stopTemp()));

    connect(ui->pushButton_Update,
            SIGNAL(clicked(bool)),
            this,
            SLOT(copyIp()));

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

void MainWindow::copyIp(){

}

void MainWindow::setIp(){

}

/*void MainWindow::getData(){
    QString str;
    QByteArray array;
    QStringList list;
    qint64 thetime;
    qDebug() << "to get data...";

    if(socket->state() == QAbstractSocket::ConnectedState){

        if(socket->isOpen()){
            qDebug() << "reading...";
            socket->write("get 127.0.0.1 5\r\n");
            socket->waitForBytesWritten();
            socket->waitForReadyRead();
            qDebug() << socket->bytesAvailable();

            while(socket->bytesAvailable()){
                str = socket->readLine().replace("\n","").replace("\r","");
                list = str.split(" ");

                if(list.size() == 2){
                    bool ok;
                    str = list.at(0);
                    thetime = str.toLongLong(&ok);
                    str = list.at(1);
                    qDebug() << thetime << ": " << str;
                }
            }
        }
    }
}*/

void MainWindow::getData()
{

}

void MainWindow::startTemp()
{
    int timing = 1000*ui->horizontalSlider_Timing->value();
    temp = startTimer(timing);
}

void MainWindow::stopTemp()
{
    killTimer(temp);
}

MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
