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
#include <QtWidgets/QComboBox>
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
    QTextEdit *textEdit;
    QLineEdit *lineEditInserir;
    QPushButton *pushButton_Ins;
    QLabel *label;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_Imp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 190, 731, 201));
        textEdit->setReadOnly(true);
        lineEditInserir = new QLineEdit(centralwidget);
        lineEditInserir->setObjectName(QString::fromUtf8("lineEditInserir"));
        lineEditInserir->setGeometry(QRect(90, 160, 71, 24));
        pushButton_Ins = new QPushButton(centralwidget);
        pushButton_Ins->setObjectName(QString::fromUtf8("pushButton_Ins"));
        pushButton_Ins->setGeometry(QRect(170, 160, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 160, 31, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 231, 61));
        QFont font;
        font.setPointSize(24);
        label_3->setFont(font);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(400, 160, 151, 24));
        pushButton_Imp = new QPushButton(centralwidget);
        pushButton_Imp->setObjectName(QString::fromUtf8("pushButton_Imp"));
        pushButton_Imp->setEnabled(false);
        pushButton_Imp->setGeometry(QRect(560, 160, 80, 24));
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
        pushButton_Ins->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Valor:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Inserir um valor", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Pr\303\251-Fixado \303\240 esquerda", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Central \303\240 esquerda", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "P\303\263s-Fixado \303\240 esquerda", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Pr\303\251-Fixado \303\240 direita", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Central \303\240 direita", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "P\303\263s-Fixado \303\240 direita", nullptr));

        pushButton_Imp->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
