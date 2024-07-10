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
    QLabel *label_12;
    QLineEdit *lineEdit_Exec_Vet_2;
    QLabel *label;
    QLineEdit *lineEdit_tempoBB;
    QTextEdit *textEdit_Ordenado;
    QLineEdit *lineEdit_tempoSS;
    QLabel *label_14;
    QTextEdit *textEdit_Ordenado_IS;
    QLabel *label_COri_3;
    QLineEdit *lineEdit_Exec_Vet;
    QLabel *label_2;
    QLabel *label_11;
    QTextEdit *textEdit_Ordenado_BB;
    QLabel *label_COri_4;
    QLabel *label_COri;
    QLabel *label_Tam;
    QLabel *label_10;
    QLineEdit *lineEdit_Tamanho;
    QLineEdit *lineEdit_tempoIS;
    QTextEdit *textEdit_Conjunto;
    QLineEdit *lineEdit_Exec_Vet_3;
    QLabel *label_COri_2;
    QPushButton *pushButton_Tamanho;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_16;
    QLineEdit *lineEdit_tempoMS;
    QLineEdit *lineEdit_Exec_Vet_4;
    QLabel *label_17;
    QTextEdit *textEdit_Ordenado_MS;
    QLabel *label_COri_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(990, 671);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(830, 260, 81, 41));
        lineEdit_Exec_Vet_2 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_2->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_2"));
        lineEdit_Exec_Vet_2->setGeometry(QRect(710, 290, 81, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 541, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font.setPointSize(26);
        font.setBold(false);
        label->setFont(font);
        lineEdit_tempoBB = new QLineEdit(centralwidget);
        lineEdit_tempoBB->setObjectName(QString::fromUtf8("lineEdit_tempoBB"));
        lineEdit_tempoBB->setGeometry(QRect(810, 380, 121, 51));
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setGeometry(QRect(170, 190, 531, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(11);
        textEdit_Ordenado->setFont(font1);
        textEdit_Ordenado->setReadOnly(true);
        lineEdit_tempoSS = new QLineEdit(centralwidget);
        lineEdit_tempoSS->setObjectName(QString::fromUtf8("lineEdit_tempoSS"));
        lineEdit_tempoSS->setGeometry(QRect(810, 200, 121, 51));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(830, 350, 81, 41));
        textEdit_Ordenado_IS = new QTextEdit(centralwidget);
        textEdit_Ordenado_IS->setObjectName(QString::fromUtf8("textEdit_Ordenado_IS"));
        textEdit_Ordenado_IS->setGeometry(QRect(170, 280, 531, 61));
        textEdit_Ordenado_IS->setFont(font1);
        textEdit_Ordenado_IS->setReadOnly(true);
        label_COri_3 = new QLabel(centralwidget);
        label_COri_3->setObjectName(QString::fromUtf8("label_COri_3"));
        label_COri_3->setGeometry(QRect(20, 250, 131, 71));
        lineEdit_Exec_Vet = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet"));
        lineEdit_Exec_Vet->setGeometry(QRect(710, 200, 81, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 560, 311, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Demi Cond")});
        font2.setPointSize(16);
        label_2->setFont(font2);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(710, 260, 81, 41));
        textEdit_Ordenado_BB = new QTextEdit(centralwidget);
        textEdit_Ordenado_BB->setObjectName(QString::fromUtf8("textEdit_Ordenado_BB"));
        textEdit_Ordenado_BB->setGeometry(QRect(170, 370, 531, 61));
        textEdit_Ordenado_BB->setFont(font1);
        textEdit_Ordenado_BB->setReadOnly(true);
        label_COri_4 = new QLabel(centralwidget);
        label_COri_4->setObjectName(QString::fromUtf8("label_COri_4"));
        label_COri_4->setGeometry(QRect(20, 360, 131, 71));
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(20, 100, 111, 71));
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(20, 70, 141, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(710, 170, 81, 41));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(160, 70, 91, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font3.setPointSize(14);
        lineEdit_Tamanho->setFont(font3);
        lineEdit_tempoIS = new QLineEdit(centralwidget);
        lineEdit_tempoIS->setObjectName(QString::fromUtf8("lineEdit_tempoIS"));
        lineEdit_tempoIS->setGeometry(QRect(810, 290, 121, 51));
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(170, 110, 531, 61));
        textEdit_Conjunto->setFont(font1);
        textEdit_Conjunto->setReadOnly(true);
        lineEdit_Exec_Vet_3 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_3->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_3"));
        lineEdit_Exec_Vet_3->setGeometry(QRect(710, 380, 81, 51));
        label_COri_2 = new QLabel(centralwidget);
        label_COri_2->setObjectName(QString::fromUtf8("label_COri_2"));
        label_COri_2->setGeometry(QRect(20, 180, 131, 71));
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(260, 70, 61, 24));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(710, 350, 81, 41));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(830, 170, 81, 41));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(710, 440, 81, 41));
        lineEdit_tempoMS = new QLineEdit(centralwidget);
        lineEdit_tempoMS->setObjectName(QString::fromUtf8("lineEdit_tempoMS"));
        lineEdit_tempoMS->setGeometry(QRect(810, 470, 121, 51));
        lineEdit_Exec_Vet_4 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_4->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_4"));
        lineEdit_Exec_Vet_4->setGeometry(QRect(710, 470, 81, 51));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(830, 440, 81, 41));
        textEdit_Ordenado_MS = new QTextEdit(centralwidget);
        textEdit_Ordenado_MS->setObjectName(QString::fromUtf8("textEdit_Ordenado_MS"));
        textEdit_Ordenado_MS->setGeometry(QRect(170, 460, 531, 61));
        textEdit_Ordenado_MS->setFont(font1);
        textEdit_Ordenado_MS->setReadOnly(true);
        label_COri_5 = new QLabel(centralwidget);
        label_COri_5->setObjectName(QString::fromUtf8("label_COri_5"));
        label_COri_5->setGeometry(QRect(20, 450, 131, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 990, 21));
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
        label_12->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Atividade 9 Merge Sort", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_COri_3->setText(QCoreApplication::translate("MainWindow", "Insertion Sort", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri_4->setText(QCoreApplication::translate("MainWindow", " Bubble Sort", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri_2->setText(QCoreApplication::translate("MainWindow", "Selection Sort", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_COri_5->setText(QCoreApplication::translate("MainWindow", " Merge Sort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
