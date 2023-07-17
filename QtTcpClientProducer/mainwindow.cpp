#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimerEvent>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
 // tcpConnect();
 // tcpDisconnect();

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

    connect(ui->horizontalSlider_Max,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(quantidadeMax(int)));

    connect(ui->horizontalSlider_Max,
            SIGNAL(valueChanged(int)),
            ui->lcdNumber_Max,
            SLOT(display(int)));

    connect(ui->horizontalSlider_Min,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(quantidadeMin(int)));

    connect(ui->horizontalSlider_Min,
            SIGNAL(valueChanged(int)),
            ui->lcdNumber_Min,
            SLOT(display(int)));

    connect(ui->horizontalSlider_Timing,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(valorTemp(int)));

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

void MainWindow::quantidadeMax(int max)
{
    quantMAX = max;
}

void MainWindow::quantidadeMin(int min)
{
    quantMIN = min;
}

void MainWindow::valorTemp(int timing)
{
    temp = timing*500;
}

void MainWindow::putData(){
    QString str;
    qint64 msecdate;

    int valor_min = ui->lcdNumber_Min->value();
    int valor_max = ui->lcdNumber_Max->value();

    if(socket->state()== QAbstractSocket::ConnectedState){

        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " +
              QString::number(valor_min + rand()% (valor_max - valor_min))+"\r\n";

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

void MainWindow::timerEvent(QTimerEvent *event)
{
    putData();
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}
