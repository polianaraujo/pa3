/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QSlider *horizontalSlider_Min;
    QSlider *horizontalSlider_Max;
    QLCDNumber *lcdNumber_Min;
    QLCDNumber *lcdNumber_Max;
    QLabel *label_Min;
    QLabel *label_Max;
    QSlider *horizontalSlider_Timing;
    QLabel *label_Timing;
    QLCDNumber *lcdNumber_Timing;
    QLineEdit *lineEdit_ServerIP;
    QPushButton *pushButton_Stop;
    QTextBrowser *textBrowser_ShowData;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(528, 389);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName("pushButton_Start");
        pushButton_Start->setGeometry(QRect(10, 290, 121, 21));
        pushButton_Connect = new QPushButton(centralWidget);
        pushButton_Connect->setObjectName("pushButton_Connect");
        pushButton_Connect->setGeometry(QRect(10, 50, 121, 24));
        pushButton_Disconnect = new QPushButton(centralWidget);
        pushButton_Disconnect->setObjectName("pushButton_Disconnect");
        pushButton_Disconnect->setGeometry(QRect(140, 50, 121, 24));
        horizontalSlider_Min = new QSlider(centralWidget);
        horizontalSlider_Min->setObjectName("horizontalSlider_Min");
        horizontalSlider_Min->setGeometry(QRect(10, 100, 181, 16));
        horizontalSlider_Min->setOrientation(Qt::Horizontal);
        horizontalSlider_Max = new QSlider(centralWidget);
        horizontalSlider_Max->setObjectName("horizontalSlider_Max");
        horizontalSlider_Max->setGeometry(QRect(10, 170, 181, 16));
        horizontalSlider_Max->setOrientation(Qt::Horizontal);
        lcdNumber_Min = new QLCDNumber(centralWidget);
        lcdNumber_Min->setObjectName("lcdNumber_Min");
        lcdNumber_Min->setGeometry(QRect(200, 110, 64, 31));
        lcdNumber_Max = new QLCDNumber(centralWidget);
        lcdNumber_Max->setObjectName("lcdNumber_Max");
        lcdNumber_Max->setGeometry(QRect(200, 180, 64, 31));
        label_Min = new QLabel(centralWidget);
        label_Min->setObjectName("label_Min");
        label_Min->setGeometry(QRect(200, 90, 49, 16));
        label_Max = new QLabel(centralWidget);
        label_Max->setObjectName("label_Max");
        label_Max->setGeometry(QRect(200, 160, 49, 16));
        horizontalSlider_Timing = new QSlider(centralWidget);
        horizontalSlider_Timing->setObjectName("horizontalSlider_Timing");
        horizontalSlider_Timing->setGeometry(QRect(69, 240, 121, 20));
        horizontalSlider_Timing->setMinimum(1);
        horizontalSlider_Timing->setOrientation(Qt::Horizontal);
        label_Timing = new QLabel(centralWidget);
        label_Timing->setObjectName("label_Timing");
        label_Timing->setGeometry(QRect(10, 240, 51, 16));
        lcdNumber_Timing = new QLCDNumber(centralWidget);
        lcdNumber_Timing->setObjectName("lcdNumber_Timing");
        lcdNumber_Timing->setGeometry(QRect(200, 240, 64, 31));
        lcdNumber_Timing->setMidLineWidth(0);
        lineEdit_ServerIP = new QLineEdit(centralWidget);
        lineEdit_ServerIP->setObjectName("lineEdit_ServerIP");
        lineEdit_ServerIP->setGeometry(QRect(10, 10, 251, 24));
        pushButton_Stop = new QPushButton(centralWidget);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setGeometry(QRect(140, 290, 121, 21));
        textBrowser_ShowData = new QTextBrowser(centralWidget);
        textBrowser_ShowData->setObjectName("textBrowser_ShowData");
        textBrowser_ShowData->setGeometry(QRect(270, 10, 251, 301));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 528, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_Min, SIGNAL(valueChanged(int)), lcdNumber_Min, SLOT(display(int)));
        QObject::connect(horizontalSlider_Max, SIGNAL(valueChanged(int)), lcdNumber_Max, SLOT(display(int)));
        QObject::connect(horizontalSlider_Timing, SIGNAL(valueChanged(int)), lcdNumber_Timing, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_Min->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_Max->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_Timing->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        lineEdit_ServerIP->setText(QString());
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
