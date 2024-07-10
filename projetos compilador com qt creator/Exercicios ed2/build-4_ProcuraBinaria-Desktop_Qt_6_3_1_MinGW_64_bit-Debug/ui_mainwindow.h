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
    QLineEdit *lineEdit_Valor;
    QTextEdit *textEdit_Buscar;
    QLabel *label_COri;
    QLabel *label_COri_2;
    QTextEdit *textEdit_Conjunto;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_Tam;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_Tamanho;
    QLineEdit *lineEdit_Tamanho;
    QLabel *label_3;
    QTextEdit *textEdit_Ordenado;
    QLabel *label_5;
    QPushButton *pushButton_Buscar_2;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *textEdit_Buscar_Bin;
    QLineEdit *lineEdit_Valor_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_Valor = new QLineEdit(centralwidget);
        lineEdit_Valor->setObjectName(QString::fromUtf8("lineEdit_Valor"));
        lineEdit_Valor->setEnabled(false);
        lineEdit_Valor->setGeometry(QRect(170, 350, 171, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(14);
        lineEdit_Valor->setFont(font);
        textEdit_Buscar = new QTextEdit(centralwidget);
        textEdit_Buscar->setObjectName(QString::fromUtf8("textEdit_Buscar"));
        textEdit_Buscar->setEnabled(false);
        textEdit_Buscar->setGeometry(QRect(420, 350, 311, 31));
        textEdit_Buscar->setReadOnly(true);
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(30, 160, 111, 71));
        label_COri_2 = new QLabel(centralwidget);
        label_COri_2->setObjectName(QString::fromUtf8("label_COri_2"));
        label_COri_2->setGeometry(QRect(30, 240, 111, 71));
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(170, 170, 561, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(11);
        textEdit_Conjunto->setFont(font1);
        textEdit_Conjunto->setReadOnly(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 40, 171, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font2.setPointSize(20);
        label_2->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 470, 321, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Text")});
        font3.setPointSize(18);
        label_4->setFont(font3);
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(30, 130, 141, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 0, 421, 41));
        label->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(350, 350, 61, 31));
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(270, 130, 61, 24));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(170, 130, 91, 24));
        lineEdit_Tamanho->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 350, 101, 31));
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setGeometry(QRect(170, 250, 561, 61));
        textEdit_Ordenado->setFont(font1);
        textEdit_Ordenado->setReadOnly(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 330, 561, 16));
        pushButton_Buscar_2 = new QPushButton(centralwidget);
        pushButton_Buscar_2->setObjectName(QString::fromUtf8("pushButton_Buscar_2"));
        pushButton_Buscar_2->setEnabled(false);
        pushButton_Buscar_2->setGeometry(QRect(350, 410, 61, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 410, 101, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 390, 561, 16));
        textEdit_Buscar_Bin = new QTextEdit(centralwidget);
        textEdit_Buscar_Bin->setObjectName(QString::fromUtf8("textEdit_Buscar_Bin"));
        textEdit_Buscar_Bin->setEnabled(false);
        textEdit_Buscar_Bin->setGeometry(QRect(420, 410, 311, 31));
        textEdit_Buscar_Bin->setReadOnly(true);
        lineEdit_Valor_2 = new QLineEdit(centralwidget);
        lineEdit_Valor_2->setObjectName(QString::fromUtf8("lineEdit_Valor_2"));
        lineEdit_Valor_2->setEnabled(false);
        lineEdit_Valor_2->setGeometry(QRect(170, 410, 171, 31));
        lineEdit_Valor_2->setFont(font);
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
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_COri_2->setText(QCoreApplication::translate("MainWindow", "Conjunto Ordenado", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "BUSCA BINARIA", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ESTRUTURA DE DADOS II - ATIVIDADE 04", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Valor para Buscar:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Busca sequencial em um vetor ordenado:", nullptr));
        pushButton_Buscar_2->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Valor para Buscar:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Busca binaria em um vetor ordenado:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
