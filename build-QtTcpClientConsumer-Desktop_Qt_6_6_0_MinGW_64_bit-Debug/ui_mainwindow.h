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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_ServerIP;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QListWidget *listWidget;
    QPushButton *pushButton_Update;
    QLabel *label_Timing;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider_Timing;
    QLCDNumber *lcdNumber_Timing;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Stop;
    Plotter *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(555, 452);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 531, 373));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_ServerIP = new QLineEdit(layoutWidget);
        lineEdit_ServerIP->setObjectName("lineEdit_ServerIP");

        verticalLayout->addWidget(lineEdit_ServerIP);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Connect = new QPushButton(layoutWidget);
        pushButton_Connect->setObjectName("pushButton_Connect");

        horizontalLayout->addWidget(pushButton_Connect);

        pushButton_Disconnect = new QPushButton(layoutWidget);
        pushButton_Disconnect->setObjectName("pushButton_Disconnect");

        horizontalLayout->addWidget(pushButton_Disconnect);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        pushButton_Update = new QPushButton(layoutWidget);
        pushButton_Update->setObjectName("pushButton_Update");

        verticalLayout->addWidget(pushButton_Update);

        label_Timing = new QLabel(layoutWidget);
        label_Timing->setObjectName("label_Timing");

        verticalLayout->addWidget(label_Timing);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSlider_Timing = new QSlider(layoutWidget);
        horizontalSlider_Timing->setObjectName("horizontalSlider_Timing");
        horizontalSlider_Timing->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_Timing);

        lcdNumber_Timing = new QLCDNumber(layoutWidget);
        lcdNumber_Timing->setObjectName("lcdNumber_Timing");

        horizontalLayout_2->addWidget(lcdNumber_Timing);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_Start = new QPushButton(layoutWidget);
        pushButton_Start->setObjectName("pushButton_Start");

        horizontalLayout_3->addWidget(pushButton_Start);

        pushButton_Stop = new QPushButton(layoutWidget);
        pushButton_Stop->setObjectName("pushButton_Stop");

        horizontalLayout_3->addWidget(pushButton_Stop);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        widget = new Plotter(layoutWidget);
        widget->setObjectName("widget");

        horizontalLayout_4->addWidget(widget);

        horizontalLayout_4->setStretch(0, 50);
        horizontalLayout_4->setStretch(1, 50);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 555, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_Timing, SIGNAL(valueChanged(int)), lcdNumber_Timing, SLOT(display(int)));
        QObject::connect(pushButton_Connect, SIGNAL(clicked()), MainWindow, SLOT(tcpConnect()));
        QObject::connect(pushButton_Disconnect, SIGNAL(clicked()), MainWindow, SLOT(tcpDisconnect()));
        QObject::connect(pushButton_Start, SIGNAL(clicked()), MainWindow, SLOT(startTemp()));
        QObject::connect(pushButton_Stop, SIGNAL(clicked()), MainWindow, SLOT(stopTemp()));
        QObject::connect(pushButton_Update, SIGNAL(clicked()), MainWindow, SLOT(showProd()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_ServerIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButton_Update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_Timing->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
