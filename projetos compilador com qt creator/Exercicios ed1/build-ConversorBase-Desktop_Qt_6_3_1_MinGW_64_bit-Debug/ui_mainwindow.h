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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_Resposta;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Num;
    QComboBox *comboBox;
    QPushButton *pushButton_Executar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_Resposta = new QLabel(centralwidget);
        label_Resposta->setObjectName(QString::fromUtf8("label_Resposta"));
        label_Resposta->setGeometry(QRect(80, 180, 491, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        font.setPointSize(50);
        label_Resposta->setFont(font);
        label_Resposta->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 49, 31));
        QFont font1;
        font1.setUnderline(true);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 81, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 150, 191, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(14);
        font2.setBold(true);
        label_3->setFont(font2);
        lineEdit_Num = new QLineEdit(centralwidget);
        lineEdit_Num->setObjectName(QString::fromUtf8("lineEdit_Num"));
        lineEdit_Num->setGeometry(QRect(90, 43, 113, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 85, 111, 24));
        QFont font3;
        font3.setBold(false);
        font3.setUnderline(false);
        comboBox->setFont(font3);
        pushButton_Executar = new QPushButton(centralwidget);
        pushButton_Executar->setObjectName(QString::fromUtf8("pushButton_Executar"));
        pushButton_Executar->setGeometry(QRect(310, 40, 241, 71));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("PT Root UI Light")});
        font4.setPointSize(12);
        font4.setUnderline(true);
        pushButton_Executar->setFont(font4);
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
        label_Resposta->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BASE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "N\303\232MERO", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Resposta:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "16", nullptr));

        pushButton_Executar->setText(QCoreApplication::translate("MainWindow", "EXECUTAR (BASE 2)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
