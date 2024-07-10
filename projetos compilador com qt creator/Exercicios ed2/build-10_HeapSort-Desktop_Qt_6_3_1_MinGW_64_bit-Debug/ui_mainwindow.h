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
    QLabel *label_12;
    QLineEdit *lineEdit_Exec_Vet_4;
    QLineEdit *lineEdit_Exec_Vet_2;
    QLabel *label_11;
    QLabel *label_COri_4;
    QLineEdit *lineEdit_Tamanho;
    QLabel *label_COri_2;
    QLabel *label;
    QLabel *label_10;
    QLineEdit *lineEdit_tempoIS;
    QLabel *label_15;
    QLineEdit *lineEdit_tempoSS;
    QLabel *label_2;
    QTextEdit *textEdit_Ordenado;
    QLabel *label_17;
    QLabel *label_14;
    QLineEdit *lineEdit_Exec_Vet;
    QLineEdit *lineEdit_Exec_Vet_3;
    QTextEdit *textEdit_Ordenado_IS;
    QLabel *label_Tam;
    QLineEdit *lineEdit_tempoMS;
    QLabel *label_16;
    QTextEdit *textEdit_Ordenado_MS;
    QTextEdit *textEdit_Conjunto;
    QLabel *label_COri_5;
    QTextEdit *textEdit_Ordenado_BB;
    QLineEdit *lineEdit_tempoBB;
    QLabel *label_COri;
    QLabel *label_COri_3;
    QLabel *label_13;
    QLabel *label_18;
    QLineEdit *lineEdit_tempoHS;
    QLabel *label_COri_6;
    QLineEdit *lineEdit_Exec_Vet_5;
    QTextEdit *textEdit_Ordenado_HS;
    QLabel *label_19;
    QLabel *label_3;
    QLabel *label_COri_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(934, 730);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(250, 20, 61, 24));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(820, 210, 81, 41));
        lineEdit_Exec_Vet_4 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_4->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_4"));
        lineEdit_Exec_Vet_4->setGeometry(QRect(700, 420, 81, 51));
        lineEdit_Exec_Vet_2 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_2->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_2"));
        lineEdit_Exec_Vet_2->setGeometry(QRect(700, 240, 81, 51));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(700, 210, 81, 41));
        label_COri_4 = new QLabel(centralwidget);
        label_COri_4->setObjectName(QString::fromUtf8("label_COri_4"));
        label_COri_4->setGeometry(QRect(10, 310, 131, 71));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(150, 20, 91, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(14);
        lineEdit_Tamanho->setFont(font);
        label_COri_2 = new QLabel(centralwidget);
        label_COri_2->setObjectName(QString::fromUtf8("label_COri_2"));
        label_COri_2->setGeometry(QRect(10, 130, 131, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 541, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font1.setPointSize(26);
        font1.setBold(false);
        label->setFont(font1);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(700, 120, 81, 41));
        lineEdit_tempoIS = new QLineEdit(centralwidget);
        lineEdit_tempoIS->setObjectName(QString::fromUtf8("lineEdit_tempoIS"));
        lineEdit_tempoIS->setGeometry(QRect(800, 240, 121, 51));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(700, 300, 81, 41));
        lineEdit_tempoSS = new QLineEdit(centralwidget);
        lineEdit_tempoSS->setObjectName(QString::fromUtf8("lineEdit_tempoSS"));
        lineEdit_tempoSS->setGeometry(QRect(800, 150, 121, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 590, 311, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Demi Cond")});
        font2.setPointSize(16);
        label_2->setFont(font2);
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setGeometry(QRect(160, 140, 531, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font3.setPointSize(11);
        textEdit_Ordenado->setFont(font3);
        textEdit_Ordenado->setReadOnly(true);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(820, 390, 81, 41));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(820, 300, 81, 41));
        lineEdit_Exec_Vet = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet"));
        lineEdit_Exec_Vet->setGeometry(QRect(700, 150, 81, 51));
        lineEdit_Exec_Vet_3 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_3->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_3"));
        lineEdit_Exec_Vet_3->setGeometry(QRect(700, 330, 81, 51));
        textEdit_Ordenado_IS = new QTextEdit(centralwidget);
        textEdit_Ordenado_IS->setObjectName(QString::fromUtf8("textEdit_Ordenado_IS"));
        textEdit_Ordenado_IS->setGeometry(QRect(160, 230, 531, 61));
        textEdit_Ordenado_IS->setFont(font3);
        textEdit_Ordenado_IS->setReadOnly(true);
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(10, 20, 141, 21));
        lineEdit_tempoMS = new QLineEdit(centralwidget);
        lineEdit_tempoMS->setObjectName(QString::fromUtf8("lineEdit_tempoMS"));
        lineEdit_tempoMS->setGeometry(QRect(800, 420, 121, 51));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(700, 390, 81, 41));
        textEdit_Ordenado_MS = new QTextEdit(centralwidget);
        textEdit_Ordenado_MS->setObjectName(QString::fromUtf8("textEdit_Ordenado_MS"));
        textEdit_Ordenado_MS->setGeometry(QRect(160, 410, 531, 61));
        textEdit_Ordenado_MS->setFont(font3);
        textEdit_Ordenado_MS->setReadOnly(true);
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(160, 60, 531, 61));
        textEdit_Conjunto->setFont(font3);
        textEdit_Conjunto->setReadOnly(true);
        label_COri_5 = new QLabel(centralwidget);
        label_COri_5->setObjectName(QString::fromUtf8("label_COri_5"));
        label_COri_5->setGeometry(QRect(10, 400, 131, 71));
        textEdit_Ordenado_BB = new QTextEdit(centralwidget);
        textEdit_Ordenado_BB->setObjectName(QString::fromUtf8("textEdit_Ordenado_BB"));
        textEdit_Ordenado_BB->setGeometry(QRect(160, 320, 531, 61));
        textEdit_Ordenado_BB->setFont(font3);
        textEdit_Ordenado_BB->setReadOnly(true);
        lineEdit_tempoBB = new QLineEdit(centralwidget);
        lineEdit_tempoBB->setObjectName(QString::fromUtf8("lineEdit_tempoBB"));
        lineEdit_tempoBB->setGeometry(QRect(800, 330, 121, 51));
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(10, 50, 111, 71));
        label_COri_3 = new QLabel(centralwidget);
        label_COri_3->setObjectName(QString::fromUtf8("label_COri_3"));
        label_COri_3->setGeometry(QRect(10, 200, 131, 71));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(820, 120, 81, 41));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(820, 480, 81, 41));
        lineEdit_tempoHS = new QLineEdit(centralwidget);
        lineEdit_tempoHS->setObjectName(QString::fromUtf8("lineEdit_tempoHS"));
        lineEdit_tempoHS->setGeometry(QRect(800, 510, 121, 51));
        label_COri_6 = new QLabel(centralwidget);
        label_COri_6->setObjectName(QString::fromUtf8("label_COri_6"));
        label_COri_6->setGeometry(QRect(10, 490, 131, 71));
        lineEdit_Exec_Vet_5 = new QLineEdit(centralwidget);
        lineEdit_Exec_Vet_5->setObjectName(QString::fromUtf8("lineEdit_Exec_Vet_5"));
        lineEdit_Exec_Vet_5->setGeometry(QRect(700, 510, 81, 51));
        textEdit_Ordenado_HS = new QTextEdit(centralwidget);
        textEdit_Ordenado_HS->setObjectName(QString::fromUtf8("textEdit_Ordenado_HS"));
        textEdit_Ordenado_HS->setGeometry(QRect(160, 500, 531, 61));
        textEdit_Ordenado_HS->setFont(font3);
        textEdit_Ordenado_HS->setReadOnly(true);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(700, 480, 81, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 760, 311, 81));
        label_3->setFont(font2);
        label_COri_11 = new QLabel(centralwidget);
        label_COri_11->setObjectName(QString::fromUtf8("label_COri_11"));
        label_COri_11->setGeometry(QRect(410, 660, 131, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 934, 21));
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
        label_12->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri_4->setText(QCoreApplication::translate("MainWindow", " Bubble Sort", nullptr));
        label_COri_2->setText(QCoreApplication::translate("MainWindow", "Selection Sort", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Atividade 10 Heap Sort", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Quantidade de elementos", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_COri_5->setText(QCoreApplication::translate("MainWindow", " Merge Sort", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Aleat\303\263rio", nullptr));
        label_COri_3->setText(QCoreApplication::translate("MainWindow", "Insertion Sort", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Tempo por ms", nullptr));
        label_COri_6->setText(QCoreApplication::translate("MainWindow", " Heap Sort", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "N Execu\303\247\303\265es", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        label_COri_11->setText(QCoreApplication::translate("MainWindow", " Heap Sort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
