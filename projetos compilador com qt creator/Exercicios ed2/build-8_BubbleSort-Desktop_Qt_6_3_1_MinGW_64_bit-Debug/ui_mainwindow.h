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
    QLabel *label_Tam;
    QLineEdit *lineEdit_tempoSS;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_COri_2;
    QLabel *label_11;
    QLabel *label_COri;
    QLineEdit *lineEdit_Exec_Vet;
    QLabel *label_13;
    QLineEdit *lineEdit_Tamanho;
    QPushButton *pushButton_Tamanho;
    QTextEdit *textEdit_Ordenado;
    QLineEdit *lineEdit_tempoIS;
    QTextEdit *textEdit_Conjunto;
    QLabel *label_10;
    QLabel *label;
    QTextEdit *textEdit_Ordenado_IS;
    QLabel *label_COri_3;
    QLineEdit *lineEdit_Exec_Vet_2;
    QTextEdit *textEdit_Ordenado_BB;
    QLabel *label_COri_4;
    QLineEdit *lineEdit_Exec_Vet_3;
    QLabel *label_15;
    QLineEdit *lineEdit_tempoBB;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1082, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(10, 70, 141, 21));
        lineEdit_tempoSS = new QLineEdit(centralwidget);
        lineEdit_tempoSS->setObjectName(QString::fromUtf8("lineEdit_tempoSS"));
        lineEdit_tempoSS->setGeometry(QRect(800, 200, 121, 51));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(820, 260, 81, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 480, 311, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Demi Cond")});
        font.setPointSize(16);
        label_2->setFont(font);
        label_COri_2 = new QLabel(centralwidget);
        label_COri_2->setObjectName(QString::fromUtf8("label_COri_2"));
        label_COri_2->setGeometry(QRect(10, 180, 131, 71));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(700, 260, 81, 41));
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(10, 100, 111, 71));
        lineEdit_Exec_Vet = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet"));
        lineEdit_Exec_Vet->setGeometry(QRect(700, 200, 81, 51));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(820, 170, 81, 41));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(150, 70, 91, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(14);
        lineEdit_Tamanho->setFont(font1);
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(250, 70, 61, 24));
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setGeometry(QRect(160, 190, 531, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font2.setPointSize(11);
        textEdit_Ordenado->setFont(font2);
        textEdit_Ordenado->setReadOnly(true);
        lineEdit_tempoIS = new QLineEdit(centralwidget);
        lineEdit_tempoIS->setObjectName(QString::fromUtf8("lineEdit_tempoIS"));
        lineEdit_tempoIS->setGeometry(QRect(800, 290, 121, 51));
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(160, 110, 531, 61));
        textEdit_Conjunto->setFont(font2);
        textEdit_Conjunto->setReadOnly(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(700, 170, 81, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 541, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font3.setPointSize(26);
        font3.setBold(false);
        label->setFont(font3);
        textEdit_Ordenado_IS = new QTextEdit(centralwidget);
        textEdit_Ordenado_IS->setObjectName(QString::fromUtf8("textEdit_Ordenado_IS"));
        textEdit_Ordenado_IS->setGeometry(QRect(160, 280, 531, 61));
        textEdit_Ordenado_IS->setFont(font2);
        textEdit_Ordenado_IS->setReadOnly(true);
        label_COri_3 = new QLabel(centralwidget);
        label_COri_3->setObjectName(QString::fromUtf8("label_COri_3"));
        label_COri_3->setGeometry(QRect(10, 250, 131, 71));
        lineEdit_Exec_Vet_2 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_2->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_2"));
        lineEdit_Exec_Vet_2->setGeometry(QRect(700, 290, 81, 51));
        textEdit_Ordenado_BB = new QTextEdit(centralwidget);
        textEdit_Ordenado_BB->setObjectName(QString::fromUtf8("textEdit_Ordenado_BB"));
        textEdit_Ordenado_BB->setGeometry(QRect(160, 370, 531, 61));
        textEdit_Ordenado_BB->setFont(font2);
        textEdit_Ordenado_BB->setReadOnly(true);
        label_COri_4 = new QLabel(centralwidget);
        label_COri_4->setObjectName(QString::fromUtf8("label_COri_4"));
        label_COri_4->setGeometry(QRect(10, 360, 131, 71));
        lineEdit_Exec_Vet_3 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_3->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_3"));
        lineEdit_Exec_Vet_3->setGeometry(QRect(700, 380, 81, 51));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(700, 350, 81, 41));
        lineEdit_tempoBB = new QLineEdit(centralwidget);
        lineEdit_tempoBB->setObjectName(QString::fromUtf8("lineEdit_tempoBB"));
        lineEdit_tempoBB->setGeometry(QRect(800, 380, 121, 51));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(820, 350, 81, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1082, 21));
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
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        label_COri_2->setText(QCoreApplication::translate("MainWindow", "Selection Sort", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Atividade 8 Bubble Sort", nullptr));
        label_COri_3->setText(QCoreApplication::translate("MainWindow", "Insertion Sort", nullptr));
        label_COri_4->setText(QCoreApplication::translate("MainWindow", " Bubble Sort", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
