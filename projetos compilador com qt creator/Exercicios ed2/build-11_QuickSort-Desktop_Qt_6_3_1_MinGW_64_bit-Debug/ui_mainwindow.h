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
    QLineEdit *lineEdit_tempoSS;
    QTextEdit *textEdit_Ordenado;
    QLineEdit *lineEdit_Exec_Vet_HS;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_COri;
    QLineEdit *lineEdit_Exec_Vet_IS;
    QLineEdit *lineEdit_tempoBB;
    QLineEdit *lineEdit_tempoMS;
    QLabel *label_COri_5;
    QTextEdit *textEdit_Ordenado_BB;
    QPushButton *pushButton_Tamanho;
    QLabel *label_11;
    QLabel *label_COri_4;
    QLabel *label_18;
    QLabel *label_Tam;
    QTextEdit *textEdit_Ordenado_IS;
    QLabel *label_2;
    QLineEdit *lineEdit_tempoIS;
    QLabel *label_17;
    QLineEdit *lineEdit_Exec_Vet_MS;
    QLineEdit *lineEdit_Exec_Vet_SS;
    QTextEdit *textEdit_Conjunto;
    QLabel *label_19;
    QLabel *label_15;
    QLineEdit *lineEdit_Tamanho;
    QLabel *label_COri_3;
    QLabel *label_12;
    QTextEdit *textEdit_Ordenado_HS;
    QLabel *label_COri_6;
    QLabel *label_COri_2;
    QTextEdit *textEdit_Ordenado_MS;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label;
    QLineEdit *lineEdit_Exec_Vet_BB;
    QLineEdit *lineEdit_tempoHS;
    QLabel *label_20;
    QLabel *label_COri_7;
    QLineEdit *lineEdit_Exec_Vet_QS;
    QLabel *label_21;
    QLineEdit *lineEdit_tempoQS;
    QTextEdit *textEdit_Ordenado_QS;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(937, 803);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_tempoSS = new QLineEdit(centralwidget);
        lineEdit_tempoSS->setObjectName(QString::fromUtf8("lineEdit_tempoSS"));
        lineEdit_tempoSS->setGeometry(QRect(790, 140, 121, 51));
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setGeometry(QRect(150, 130, 531, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(11);
        textEdit_Ordenado->setFont(font);
        textEdit_Ordenado->setReadOnly(true);
        lineEdit_Exec_Vet_HS = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_HS->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_HS"));
        lineEdit_Exec_Vet_HS->setGeometry(QRect(690, 500, 81, 51));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(690, 110, 81, 41));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(810, 290, 81, 41));
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(0, 40, 111, 71));
        lineEdit_Exec_Vet_IS = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_IS->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_IS"));
        lineEdit_Exec_Vet_IS->setGeometry(QRect(690, 230, 81, 51));
        lineEdit_tempoBB = new QLineEdit(centralwidget);
        lineEdit_tempoBB->setObjectName(QString::fromUtf8("lineEdit_tempoBB"));
        lineEdit_tempoBB->setGeometry(QRect(790, 320, 121, 51));
        lineEdit_tempoMS = new QLineEdit(centralwidget);
        lineEdit_tempoMS->setObjectName(QString::fromUtf8("lineEdit_tempoMS"));
        lineEdit_tempoMS->setGeometry(QRect(790, 410, 121, 51));
        label_COri_5 = new QLabel(centralwidget);
        label_COri_5->setObjectName(QString::fromUtf8("label_COri_5"));
        label_COri_5->setGeometry(QRect(0, 390, 131, 71));
        textEdit_Ordenado_BB = new QTextEdit(centralwidget);
        textEdit_Ordenado_BB->setObjectName(QString::fromUtf8("textEdit_Ordenado_BB"));
        textEdit_Ordenado_BB->setGeometry(QRect(150, 310, 531, 61));
        textEdit_Ordenado_BB->setFont(font);
        textEdit_Ordenado_BB->setReadOnly(true);
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(240, 10, 61, 24));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(690, 200, 81, 41));
        label_COri_4 = new QLabel(centralwidget);
        label_COri_4->setObjectName(QString::fromUtf8("label_COri_4"));
        label_COri_4->setGeometry(QRect(0, 300, 131, 71));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(810, 470, 81, 41));
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(0, 10, 141, 21));
        textEdit_Ordenado_IS = new QTextEdit(centralwidget);
        textEdit_Ordenado_IS->setObjectName(QString::fromUtf8("textEdit_Ordenado_IS"));
        textEdit_Ordenado_IS->setGeometry(QRect(150, 220, 531, 61));
        textEdit_Ordenado_IS->setFont(font);
        textEdit_Ordenado_IS->setReadOnly(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 690, 311, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Demi Cond")});
        font1.setPointSize(16);
        label_2->setFont(font1);
        lineEdit_tempoIS = new QLineEdit(centralwidget);
        lineEdit_tempoIS->setObjectName(QString::fromUtf8("lineEdit_tempoIS"));
        lineEdit_tempoIS->setGeometry(QRect(790, 230, 121, 51));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(810, 380, 81, 41));
        lineEdit_Exec_Vet_MS = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_MS->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_MS"));
        lineEdit_Exec_Vet_MS->setGeometry(QRect(690, 410, 81, 51));
        lineEdit_Exec_Vet_SS = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_SS->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_SS"));
        lineEdit_Exec_Vet_SS->setGeometry(QRect(690, 140, 81, 51));
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(150, 50, 531, 61));
        textEdit_Conjunto->setFont(font);
        textEdit_Conjunto->setReadOnly(true);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(690, 470, 81, 41));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(690, 290, 81, 41));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(140, 10, 91, 24));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font2.setPointSize(14);
        lineEdit_Tamanho->setFont(font2);
        label_COri_3 = new QLabel(centralwidget);
        label_COri_3->setObjectName(QString::fromUtf8("label_COri_3"));
        label_COri_3->setGeometry(QRect(0, 190, 131, 71));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(810, 200, 81, 41));
        textEdit_Ordenado_HS = new QTextEdit(centralwidget);
        textEdit_Ordenado_HS->setObjectName(QString::fromUtf8("textEdit_Ordenado_HS"));
        textEdit_Ordenado_HS->setGeometry(QRect(150, 490, 531, 61));
        textEdit_Ordenado_HS->setFont(font);
        textEdit_Ordenado_HS->setReadOnly(true);
        label_COri_6 = new QLabel(centralwidget);
        label_COri_6->setObjectName(QString::fromUtf8("label_COri_6"));
        label_COri_6->setGeometry(QRect(0, 480, 131, 71));
        label_COri_2 = new QLabel(centralwidget);
        label_COri_2->setObjectName(QString::fromUtf8("label_COri_2"));
        label_COri_2->setGeometry(QRect(0, 120, 131, 71));
        textEdit_Ordenado_MS = new QTextEdit(centralwidget);
        textEdit_Ordenado_MS->setObjectName(QString::fromUtf8("textEdit_Ordenado_MS"));
        textEdit_Ordenado_MS->setGeometry(QRect(150, 400, 531, 61));
        textEdit_Ordenado_MS->setFont(font);
        textEdit_Ordenado_MS->setReadOnly(true);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(810, 110, 81, 41));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(690, 380, 81, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, -10, 541, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font3.setPointSize(26);
        font3.setBold(false);
        label->setFont(font3);
        lineEdit_Exec_Vet_BB = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_BB->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_BB"));
        lineEdit_Exec_Vet_BB->setGeometry(QRect(690, 320, 81, 51));
        lineEdit_tempoHS = new QLineEdit(centralwidget);
        lineEdit_tempoHS->setObjectName(QString::fromUtf8("lineEdit_tempoHS"));
        lineEdit_tempoHS->setGeometry(QRect(790, 500, 121, 51));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(690, 560, 81, 41));
        label_COri_7 = new QLabel(centralwidget);
        label_COri_7->setObjectName(QString::fromUtf8("label_COri_7"));
        label_COri_7->setGeometry(QRect(0, 570, 131, 71));
        lineEdit_Exec_Vet_QS = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_QS->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_QS"));
        lineEdit_Exec_Vet_QS->setGeometry(QRect(690, 590, 81, 51));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(810, 560, 81, 41));
        lineEdit_tempoQS = new QLineEdit(centralwidget);
        lineEdit_tempoQS->setObjectName(QString::fromUtf8("lineEdit_tempoQS"));
        lineEdit_tempoQS->setGeometry(QRect(790, 590, 121, 51));
        textEdit_Ordenado_QS = new QTextEdit(centralwidget);
        textEdit_Ordenado_QS->setObjectName(QString::fromUtf8("textEdit_Ordenado_QS"));
        textEdit_Ordenado_QS->setGeometry(QRect(150, 580, 531, 61));
        textEdit_Ordenado_QS->setFont(font);
        textEdit_Ordenado_QS->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 937, 21));
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
        label_10->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_COri_5->setText(QCoreApplication::translate("MainWindow", " Merge Sort", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri_4->setText(QCoreApplication::translate("MainWindow", " Bubble Sort", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri_3->setText(QCoreApplication::translate("MainWindow", "Insertion Sort", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_COri_6->setText(QCoreApplication::translate("MainWindow", " Heap Sort", nullptr));
        label_COri_2->setText(QCoreApplication::translate("MainWindow", "Selection Sort", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Atividade 11 Quick Sort", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri_7->setText(QCoreApplication::translate("MainWindow", " Quick Sort", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
