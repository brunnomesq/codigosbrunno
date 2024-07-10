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
    QTextEdit *textEdit_Res;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_num;
    QLabel *label_2;
    QPushButton *pushButton_Enviar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(684, 310);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit_Res = new QTextEdit(centralwidget);
        textEdit_Res->setObjectName(QString::fromUtf8("textEdit_Res"));
        textEdit_Res->setGeometry(QRect(10, 170, 581, 51));
        textEdit_Res->setReadOnly(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 100, 281, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 100, 171, 16));
        lineEdit_num = new QLineEdit(centralwidget);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(180, 100, 61, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 20, 531, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Heading Semibold")});
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        pushButton_Enviar = new QPushButton(centralwidget);
        pushButton_Enviar->setObjectName(QString::fromUtf8("pushButton_Enviar"));
        pushButton_Enviar->setGeometry(QRect(10, 130, 231, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 684, 21));
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
        label_3->setText(QCoreApplication::translate("MainWindow", "Vers\303\243o Soma dos valores cubicos", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Vai do numero 1 at\303\251 o numero:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Exerc\303\255cio 1 - RECURSIVIDADE Lista 2", nullptr));
        pushButton_Enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
