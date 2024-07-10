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
    QLineEdit *lineEdit_Tamanho;
    QTextEdit *textEdit_Conjunto;
    QLabel *label_COri_2;
    QLabel *label_COri;
    QLabel *label_Tam;
    QLineEdit *lineEdit_Exec_Vet;
    QLabel *label_10;
    QTextEdit *textEdit_Ordenado;
    QPushButton *pushButton_Tamanho;
    QLabel *label;
    QLabel *label_COri_3;
    QTextEdit *textEdit_Ordenado_IS;
    QLineEdit *lineEdit_Exec_Vet_2;
    QLabel *label_11;
    QLineEdit *lineEdit_tempoSS;
    QLineEdit *lineEdit_tempoIS;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(929, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(150, 80, 91, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(14);
        lineEdit_Tamanho->setFont(font);
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(160, 120, 531, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(11);
        textEdit_Conjunto->setFont(font1);
        textEdit_Conjunto->setReadOnly(true);
        label_COri_2 = new QLabel(centralwidget);
        label_COri_2->setObjectName(QString::fromUtf8("label_COri_2"));
        label_COri_2->setGeometry(QRect(10, 190, 131, 71));
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(10, 110, 111, 71));
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(10, 80, 141, 21));
        lineEdit_Exec_Vet = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet"));
        lineEdit_Exec_Vet->setGeometry(QRect(700, 210, 81, 51));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(700, 180, 81, 41));
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setGeometry(QRect(160, 200, 531, 61));
        textEdit_Ordenado->setFont(font1);
        textEdit_Ordenado->setReadOnly(true);
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(250, 80, 61, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 541, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font2.setPointSize(26);
        font2.setBold(false);
        label->setFont(font2);
        label_COri_3 = new QLabel(centralwidget);
        label_COri_3->setObjectName(QString::fromUtf8("label_COri_3"));
        label_COri_3->setGeometry(QRect(10, 260, 131, 71));
        textEdit_Ordenado_IS = new QTextEdit(centralwidget);
        textEdit_Ordenado_IS->setObjectName(QString::fromUtf8("textEdit_Ordenado_IS"));
        textEdit_Ordenado_IS->setGeometry(QRect(160, 290, 531, 61));
        textEdit_Ordenado_IS->setFont(font1);
        textEdit_Ordenado_IS->setReadOnly(true);
        lineEdit_Exec_Vet_2 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_2->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_2"));
        lineEdit_Exec_Vet_2->setGeometry(QRect(700, 300, 81, 51));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(700, 270, 81, 41));
        lineEdit_tempoSS = new QLineEdit(centralwidget);
        lineEdit_tempoSS->setObjectName(QString::fromUtf8("lineEdit_tempoSS"));
        lineEdit_tempoSS->setGeometry(QRect(800, 210, 121, 51));
        lineEdit_tempoIS = new QLineEdit(centralwidget);
        lineEdit_tempoIS->setObjectName(QString::fromUtf8("lineEdit_tempoIS"));
        lineEdit_tempoIS->setGeometry(QRect(800, 300, 121, 51));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(820, 270, 81, 41));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(820, 180, 81, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 390, 311, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Franklin Gothic Demi Cond")});
        font3.setPointSize(16);
        label_2->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 929, 21));
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
        label_COri_2->setText(QCoreApplication::translate("MainWindow", "Conjunto Selection Sort", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Atividade 7 Insertion Sort", nullptr));
        label_COri_3->setText(QCoreApplication::translate("MainWindow", "Conjunto Insertion Sort", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
