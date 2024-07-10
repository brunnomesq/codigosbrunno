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
    QPushButton *pushButton_Tamanho;
    QPushButton *pushButton_Buscar_2;
    QLabel *label_COri_2;
    QTextEdit *textEdit_Conjunto;
    QLabel *label_3;
    QLineEdit *lineEdit_Valor_2;
    QLabel *label_Tam;
    QTextEdit *textEdit_Buscar;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QTextEdit *textEdit_Buscar_Bin;
    QLabel *label_COri;
    QLineEdit *lineEdit_Tamanho;
    QTextEdit *textEdit_Ordenado;
    QLineEdit *lineEdit_Valor;
    QLabel *label_7;
    QPushButton *pushButton_BuscaAle;
    QLabel *label_8;
    QTextEdit *textEdit_Buscar_ale;
    QLineEdit *lineEdit_Valor_3;
    QLabel *label_9;
    QLineEdit *lineEdit_Exec_Vet;
    QLabel *label_10;
    QLineEdit *lineEdit_Exec_Seq_Ale;
    QLabel *label_12;
    QLineEdit *lineEdit_Exec_Seq_Ord;
    QLineEdit *lineEdit_Exec_Bus_Bin;
    QLabel *label_13;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1008, 784);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(260, 90, 61, 24));
        pushButton_Buscar_2 = new QPushButton(centralwidget);
        pushButton_Buscar_2->setObjectName(QString::fromUtf8("pushButton_Buscar_2"));
        pushButton_Buscar_2->setEnabled(false);
        pushButton_Buscar_2->setGeometry(QRect(340, 620, 61, 31));
        label_COri_2 = new QLabel(centralwidget);
        label_COri_2->setObjectName(QString::fromUtf8("label_COri_2"));
        label_COri_2->setGeometry(QRect(20, 200, 111, 71));
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(160, 130, 561, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(11);
        textEdit_Conjunto->setFont(font);
        textEdit_Conjunto->setReadOnly(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 510, 101, 31));
        lineEdit_Valor_2 = new QLineEdit(centralwidget);
        lineEdit_Valor_2->setObjectName(QString::fromUtf8("lineEdit_Valor_2"));
        lineEdit_Valor_2->setEnabled(false);
        lineEdit_Valor_2->setGeometry(QRect(160, 620, 171, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(14);
        lineEdit_Valor_2->setFont(font1);
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(20, 90, 141, 21));
        textEdit_Buscar = new QTextEdit(centralwidget);
        textEdit_Buscar->setObjectName(QString::fromUtf8("textEdit_Buscar"));
        textEdit_Buscar->setEnabled(false);
        textEdit_Buscar->setGeometry(QRect(410, 510, 311, 31));
        textEdit_Buscar->setReadOnly(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 490, 561, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 620, 101, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(340, 510, 61, 31));
        textEdit_Buscar_Bin = new QTextEdit(centralwidget);
        textEdit_Buscar_Bin->setObjectName(QString::fromUtf8("textEdit_Buscar_Bin"));
        textEdit_Buscar_Bin->setEnabled(false);
        textEdit_Buscar_Bin->setGeometry(QRect(410, 620, 311, 31));
        textEdit_Buscar_Bin->setReadOnly(true);
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(20, 120, 111, 71));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(160, 90, 91, 24));
        lineEdit_Tamanho->setFont(font1);
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setGeometry(QRect(160, 210, 561, 61));
        textEdit_Ordenado->setFont(font);
        textEdit_Ordenado->setReadOnly(true);
        lineEdit_Valor = new QLineEdit(centralwidget);
        lineEdit_Valor->setObjectName(QString::fromUtf8("lineEdit_Valor"));
        lineEdit_Valor->setEnabled(false);
        lineEdit_Valor->setGeometry(QRect(160, 510, 171, 31));
        lineEdit_Valor->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 600, 561, 16));
        pushButton_BuscaAle = new QPushButton(centralwidget);
        pushButton_BuscaAle->setObjectName(QString::fromUtf8("pushButton_BuscaAle"));
        pushButton_BuscaAle->setEnabled(false);
        pushButton_BuscaAle->setGeometry(QRect(340, 390, 61, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 390, 101, 31));
        textEdit_Buscar_ale = new QTextEdit(centralwidget);
        textEdit_Buscar_ale->setObjectName(QString::fromUtf8("textEdit_Buscar_ale"));
        textEdit_Buscar_ale->setEnabled(false);
        textEdit_Buscar_ale->setGeometry(QRect(410, 390, 311, 31));
        textEdit_Buscar_ale->setReadOnly(true);
        lineEdit_Valor_3 = new QLineEdit(centralwidget);
        lineEdit_Valor_3->setObjectName(QString::fromUtf8("lineEdit_Valor_3"));
        lineEdit_Valor_3->setEnabled(false);
        lineEdit_Valor_3->setGeometry(QRect(160, 390, 171, 31));
        lineEdit_Valor_3->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(160, 370, 561, 16));
        lineEdit_Exec_Vet = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet"));
        lineEdit_Exec_Vet->setGeometry(QRect(350, 280, 371, 41));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 280, 231, 41));
        lineEdit_Exec_Seq_Ale = new QLineEdit(centralwidget);
        lineEdit_Exec_Seq_Ale->setObjectName(QString::fromUtf8("lineEdit_Exec_Seq_Ale"));
        lineEdit_Exec_Seq_Ale->setGeometry(QRect(562, 430, 151, 31));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(160, 430, 391, 31));
        lineEdit_Exec_Seq_Ord = new QLineEdit(centralwidget);
        lineEdit_Exec_Seq_Ord->setObjectName(QString::fromUtf8("lineEdit_Exec_Seq_Ord"));
        lineEdit_Exec_Seq_Ord->setGeometry(QRect(562, 560, 151, 31));
        lineEdit_Exec_Bus_Bin = new QLineEdit(centralwidget);
        lineEdit_Exec_Bus_Bin->setObjectName(QString::fromUtf8("lineEdit_Exec_Bus_Bin"));
        lineEdit_Exec_Bus_Bin->setGeometry(QRect(562, 660, 151, 31));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(160, 560, 361, 31));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(160, 660, 361, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1008, 21));
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
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        pushButton_Buscar_2->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_COri_2->setText(QCoreApplication::translate("MainWindow", "Conjunto Ordenado", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Valor para Buscar:", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Busca sequencial em um vetor ordenado:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Valor para Buscar:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Busca binaria em um vetor ordenado:", nullptr));
        pushButton_BuscaAle->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Valor para Buscar:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Busca sequencial em um vetor aleatorio:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Execucoes no vetor ordenado sem busca", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Numero de Execucoes LA\303\207O FOR no vetor aleatorio sequencial", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Numero de Execucoes LA\303\207O FOR no vetor ordenado sequencial", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Numero de Execucoes LA\303\207O FOR no vetor ordenabo Busca binaria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
