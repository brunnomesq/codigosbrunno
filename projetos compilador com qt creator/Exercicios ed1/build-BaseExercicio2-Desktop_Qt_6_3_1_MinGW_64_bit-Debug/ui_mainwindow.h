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
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_Num;
    QPushButton *pushButton_Executar;
    QTextEdit *textEdit_Resultado;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(678, 433);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 201, 191, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(14);
        font.setBold(true);
        label_3->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 131, 49, 31));
        QFont font1;
        font1.setUnderline(true);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 91, 81, 31));
        label_2->setFont(font1);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 136, 111, 24));
        QFont font2;
        font2.setBold(false);
        font2.setUnderline(false);
        comboBox->setFont(font2);
        lineEdit_Num = new QLineEdit(centralwidget);
        lineEdit_Num->setObjectName(QString::fromUtf8("lineEdit_Num"));
        lineEdit_Num->setGeometry(QRect(110, 94, 113, 31));
        pushButton_Executar = new QPushButton(centralwidget);
        pushButton_Executar->setObjectName(QString::fromUtf8("pushButton_Executar"));
        pushButton_Executar->setGeometry(QRect(330, 91, 241, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("PT Root UI Light")});
        font3.setPointSize(12);
        font3.setUnderline(true);
        pushButton_Executar->setFont(font3);
        textEdit_Resultado = new QTextEdit(centralwidget);
        textEdit_Resultado->setObjectName(QString::fromUtf8("textEdit_Resultado"));
        textEdit_Resultado->setGeometry(QRect(100, 240, 391, 121));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Terminal")});
        font4.setPointSize(22);
        textEdit_Resultado->setFont(font4);
        textEdit_Resultado->viewport()->setProperty("cursor", QVariant(QCursor(Qt::UpArrowCursor)));
        textEdit_Resultado->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 661, 61));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("SimSun-ExtB")});
        font5.setPointSize(28);
        label_4->setFont(font5);
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 678, 21));
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
        label_3->setText(QCoreApplication::translate("MainWindow", "Resposta:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BASE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "N\303\232MERO", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "16", nullptr));

        pushButton_Executar->setText(QCoreApplication::translate("MainWindow", "EXECUTAR", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SISTEMA DE MUDAR BASE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
