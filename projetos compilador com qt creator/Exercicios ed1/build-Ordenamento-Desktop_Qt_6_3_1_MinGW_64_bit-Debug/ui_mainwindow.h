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
    QLabel *label_Tam;
    QPushButton *pushButton_Tamanho;
    QLabel *label_COri;
    QTextEdit *textEdit_Conjunto;
    QPushButton *pushButton_Ordenar;
    QTextEdit *textEdit_Ordenado;
    QLabel *label_COrd;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 351);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(120, 40, 71, 24));
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(60, 40, 71, 21));
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(210, 40, 61, 24));
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(20, 86, 101, 41));
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(123, 90, 561, 31));
        textEdit_Conjunto->setReadOnly(true);
        pushButton_Ordenar = new QPushButton(centralwidget);
        pushButton_Ordenar->setObjectName(QString::fromUtf8("pushButton_Ordenar"));
        pushButton_Ordenar->setEnabled(false);
        pushButton_Ordenar->setGeometry(QRect(19, 150, 101, 31));
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setEnabled(false);
        textEdit_Ordenado->setGeometry(QRect(120, 204, 561, 31));
        textEdit_Ordenado->setReadOnly(true);
        label_COrd = new QLabel(centralwidget);
        label_COrd->setObjectName(QString::fromUtf8("label_COrd"));
        label_COrd->setEnabled(false);
        label_COrd->setGeometry(QRect(7, 200, 111, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 704, 21));
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
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Tamanho", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Original", nullptr));
        pushButton_Ordenar->setText(QCoreApplication::translate("MainWindow", "Ordenar", nullptr));
        label_COrd->setText(QCoreApplication::translate("MainWindow", "Conjunto Ordenado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
