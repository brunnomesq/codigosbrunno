/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_num;
    QTextEdit *textEdit_Res;
    QPushButton *pushButton_Enviar;
    QLabel *label_3;
    QLineEdit *lineEdit_pot;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 20, 581, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Heading Semibold")});
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 171, 16));
        lineEdit_num = new QLineEdit(centralwidget);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(70, 70, 81, 21));
        textEdit_Res = new QTextEdit(centralwidget);
        textEdit_Res->setObjectName(QString::fromUtf8("textEdit_Res"));
        textEdit_Res->setGeometry(QRect(20, 170, 221, 151));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Titillium Web")});
        font1.setPointSize(16);
        textEdit_Res->setFont(font1);
        textEdit_Res->setReadOnly(true);
        pushButton_Enviar = new QPushButton(centralwidget);
        pushButton_Enviar->setObjectName(QString::fromUtf8("pushButton_Enviar"));
        pushButton_Enviar->setGeometry(QRect(20, 130, 231, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(18, 100, 51, 16));
        lineEdit_pot = new QLineEdit(centralwidget);
        lineEdit_pot->setObjectName(QString::fromUtf8("lineEdit_pot"));
        lineEdit_pot->setGeometry(QRect(70, 100, 81, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 70, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 100, 49, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 190, 71, 61));
        QFont font2;
        font2.setPointSize(28);
        label_6->setFont(font2);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 200, 49, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 90, 281, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Exerc\303\255cio 5 - RECURSIVIDADE Lista 2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Numero:", nullptr));
        pushButton_Enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Potencia:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Potencia de dois numeros usando multiplica\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
