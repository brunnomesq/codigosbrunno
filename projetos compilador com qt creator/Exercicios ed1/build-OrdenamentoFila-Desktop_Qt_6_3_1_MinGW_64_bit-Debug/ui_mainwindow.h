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
    QLabel *label_COri;
    QPushButton *pushButton_Tamanho;
    QTextEdit *textEdit_Conjunto;
    QPushButton *pushButton_Ordenar;
    QLabel *label_Tam;
    QTextEdit *textEdit_Ordenado;
    QLineEdit *lineEdit_Tamanho;
    QLabel *label_COrd;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_COri = new QLabel(centralwidget);
        label_COri->setObjectName(QString::fromUtf8("label_COri"));
        label_COri->setGeometry(QRect(13, 86, 101, 41));
        pushButton_Tamanho = new QPushButton(centralwidget);
        pushButton_Tamanho->setObjectName(QString::fromUtf8("pushButton_Tamanho"));
        pushButton_Tamanho->setGeometry(QRect(203, 40, 61, 24));
        textEdit_Conjunto = new QTextEdit(centralwidget);
        textEdit_Conjunto->setObjectName(QString::fromUtf8("textEdit_Conjunto"));
        textEdit_Conjunto->setGeometry(QRect(116, 90, 561, 31));
        textEdit_Conjunto->setReadOnly(true);
        pushButton_Ordenar = new QPushButton(centralwidget);
        pushButton_Ordenar->setObjectName(QString::fromUtf8("pushButton_Ordenar"));
        pushButton_Ordenar->setEnabled(false);
        pushButton_Ordenar->setGeometry(QRect(12, 150, 101, 31));
        label_Tam = new QLabel(centralwidget);
        label_Tam->setObjectName(QString::fromUtf8("label_Tam"));
        label_Tam->setGeometry(QRect(53, 40, 71, 21));
        textEdit_Ordenado = new QTextEdit(centralwidget);
        textEdit_Ordenado->setObjectName(QString::fromUtf8("textEdit_Ordenado"));
        textEdit_Ordenado->setEnabled(false);
        textEdit_Ordenado->setGeometry(QRect(113, 204, 561, 31));
        textEdit_Ordenado->setReadOnly(true);
        lineEdit_Tamanho = new QLineEdit(centralwidget);
        lineEdit_Tamanho->setObjectName(QString::fromUtf8("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(113, 40, 71, 24));
        label_COrd = new QLabel(centralwidget);
        label_COrd->setObjectName(QString::fromUtf8("label_COrd"));
        label_COrd->setEnabled(false);
        label_COrd->setGeometry(QRect(0, 200, 111, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 20, 301, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(20);
        label->setFont(font);
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
        label_COri->setText(QCoreApplication::translate("MainWindow", "Conjunto Original", nullptr));
        pushButton_Tamanho->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        pushButton_Ordenar->setText(QCoreApplication::translate("MainWindow", "Ordenar", nullptr));
        label_Tam->setText(QCoreApplication::translate("MainWindow", "Tamanho", nullptr));
        label_COrd->setText(QCoreApplication::translate("MainWindow", "Conjunto Ordenado", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ORDENAMENTO POR FILA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
