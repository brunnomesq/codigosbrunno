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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_Valor;
    QPushButton *button_empilhar;
    QPushButton *button_desimpilhar;
    QLabel *label_pilha;
    QPushButton *pushButton;
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
        lineEdit_Valor->setGeometry(QRect(50, 220, 61, 24));
        button_empilhar = new QPushButton(centralwidget);
        button_empilhar->setObjectName(QString::fromUtf8("button_empilhar"));
        button_empilhar->setGeometry(QRect(120, 220, 191, 24));
        button_desimpilhar = new QPushButton(centralwidget);
        button_desimpilhar->setObjectName(QString::fromUtf8("button_desimpilhar"));
        button_desimpilhar->setGeometry(QRect(50, 270, 261, 24));
        label_pilha = new QLabel(centralwidget);
        label_pilha->setObjectName(QString::fromUtf8("label_pilha"));
        label_pilha->setGeometry(QRect(60, 110, 641, 71));
        label_pilha->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 13, 151, 51));
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
        button_empilhar->setText(QCoreApplication::translate("MainWindow", "Empilhar este n\303\272mero", nullptr));
        button_desimpilhar->setText(QCoreApplication::translate("MainWindow", "Desimpilhar", nullptr));
        label_pilha->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Tamanho da Pilha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
