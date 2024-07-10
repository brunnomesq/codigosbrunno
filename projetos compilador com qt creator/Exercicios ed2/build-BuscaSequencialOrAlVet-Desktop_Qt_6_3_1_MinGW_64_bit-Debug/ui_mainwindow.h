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
    QLabel *label;
    QLabel *label_COri;
    QLineEdit *lineEdit_Tamanho;
    QTextEdit *textEdit_Conjunto;
    QLabel *label_Tam;
    QLabel *label_2;
    QPushButton *pushButton_Tamanho;
    QLabel *label_3;
    QLineEdit *lineEdit_Valor;
    QPushButton *pushButton;
    QTextEdit *textEdit_Buscar;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 471);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 421, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(20);
        label->setFont(font);
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(20, 170, 111, 101));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(160, 150, 91, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(14);
        lineEdit_Tamanho->setFont(font1);
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(160, 180, 561, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font2.setPointSize(11);
        textEdit_Conjunto->setFont(font2);
        textEdit_Conjunto->setReadOnly(true);
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(20, 150, 141, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 50, 211, 41));
        label_2->setFont(font);
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(260, 150, 61, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 290, 101, 31));
        lineEdit_Valor = new QLineEdit(centralwidget);
        lineEdit_Valor->setObjectName(QString::fromUtf8("lineEdit_Valor"));
        lineEdit_Valor->setEnabled(false);
        lineEdit_Valor->setGeometry(QRect(160, 290, 171, 31));
        lineEdit_Valor->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(340, 290, 61, 31));
        textEdit_Buscar = new QTextEdit(centralwidget);
        textEdit_Buscar->setObjectName(QString::fromUtf8("textEdit_Buscar"));
        textEdit_Buscar->setEnabled(false);
        textEdit_Buscar->setGeometry(QRect(410, 289, 311, 31));
        textEdit_Buscar->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 360, 321, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Text")});
        font3.setPointSize(18);
        label_4->setFont(font3);
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
        label->setText(QCoreApplication::translate("MainWindow", "ESTRUTURA DE DADOS II - ATIVIDADE 02", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "BUSCA SEQUENCIAL", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Valor para Buscar:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
