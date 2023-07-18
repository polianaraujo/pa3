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
            SLOT(insertMachines()));

    connect(ui->pushButton_Connect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect()));

    connect(ui->pushButton_Disconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpDisconnect()));

    connect(ui->horizontalSlider_Timing,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(valorTemp(int)));
}

void MainWindow::tcpConnect()
{
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

void MainWindow::tcpDisconnect()
{
    socket->disconnectFromHost();
    statusBar()->showMessage("Disconnected");
}

void MainWindow::valorTemp(int timing) // Valor do timing
{
    temp = timing*500;
}


void MainWindow::startTemp() // Iniciar o timing
{
    int timing = 1000*ui->horizontalSlider_Timing->value();
    temp = startTimer(timing);
}

void MainWindow::stopTemp() // Parar o timing
{
    killTimer(temp);
}

// Inserir a lista de máquinas na listWidget
// E limpar a lista ao clicar no botão 'Update'.
// Mostrando as máquinas conectadas no servidor conectado.
void MainWindow::insertMachines() //updateIp
{
    ui->listWidget->clear();
    ui->listWidget->addItems(IPList);
}

void MainWindow::getData(){
    QString str;
    //QByteArray array;
    QStringList list;
    qint64 thetime;
    qDebug() << "to get data...";

    QHostAddress ipAddress = socket->peerAddress();
    QString ipString = ipAddress.toString();

    // Atualizando a listas de IP's sem repetir.
    if(IPList.contains(ipString)){ }
    else{ IPList.append(ipString); }

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

                valores = list.at(1).toInt();
                qDebug() << valores << "\n";
            }
        }
    }
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    getData();

}

void MainWindow::itemSelected(QListWidgetItem *item)
{
    QString selected = item->text();

    // Coisas que vão acontecer com o item selecionado:
    tcpDisconnect();                      // Garante a disconexão da máquina anterior.
    socket->connectToHost(selected,1234); // Conecta a máquina (item) selecinado na porta 1234

    if(socket->waitForConnected(3000))
    {
        qDebug() << "Connected";
        statusBar()->showMessage("Connected");
    }else
    {
        qDebug() << "Disconnected";
        statusBar()->showMessage("Disconnected");
    }

    qDebug() << "Item selecionado: " << selected;
}

MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}
