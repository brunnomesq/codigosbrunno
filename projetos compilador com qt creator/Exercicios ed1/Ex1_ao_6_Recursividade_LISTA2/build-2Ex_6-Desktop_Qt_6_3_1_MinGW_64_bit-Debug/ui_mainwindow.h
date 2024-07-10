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
    QPushButton *pushButton_Enviar;
    QLabel *label_2;
    QLineEdit *lineEdit_num;
    QLineEdit *lineEdit_num2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit_Res = new QTextEdit(centralwidget);
        textEdit_Res->setObjectName(QString::fromUtf8("textEdit_Res"));
        textEdit_Res->setGeometry(QRect(22, 160, 221, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Titillium Web")});
        font.setPointSize(16);
        textEdit_Res->setFont(font);
        textEdit_Res->setReadOnly(true);
        pushButton_Enviar = new QPushButton(centralwidget);
        pushButton_Enviar->setObjectName(QString::fromUtf8("pushButton_Enviar"));
        pushButton_Enviar->setGeometry(QRect(22, 120, 231, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(82, 10, 581, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Heading Semibold")});
        font1.setPointSize(24);
        font1.setBold(true);
        label_2->setFont(font1);
        lineEdit_num = new QLineEdit(centralwidget);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(72, 60, 81, 21));
        lineEdit_num2 = new QLineEdit(centralwidget);
        lineEdit_num2->setObjectName(QString::fromUtf8("lineEdit_num2"));
        lineEdit_num2->setGeometry(QRect(72, 90, 81, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 61, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 61, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 80, 221, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 170, 151, 81));
        QFont font2;
        font2.setPointSize(22);
        label_5->setFont(font2);
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
        pushButton_Enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Exerc\303\255cio 6 - RECURSIVIDADE Lista 2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Numero 1:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Numero 2:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Multiplica\303\247\303\243o s\303\263 usando a adi\303\247\303\243o", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "N1 * N2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
