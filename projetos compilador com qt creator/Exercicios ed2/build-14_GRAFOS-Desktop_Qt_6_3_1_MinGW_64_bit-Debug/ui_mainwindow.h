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
#include <QtWidgets/QGraphicsView>
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
    QPushButton *pushButtonUpdate;
    QGraphicsView *graphicsView;
    QPushButton *pushButtonAccess;
    QLabel *label_3;
    QLineEdit *lineEditPosition1;
    QLabel *label_2;
    QLineEdit *lineEditWeight;
    QPushButton *pushButtonInsert;
    QLabel *label_4;
    QLineEdit *lineEditPosition2;
    QPushButton *pushButtonRemove;
    QLabel *label;
    QLineEdit *lineEditSize;
    QPushButton *pushButtonCreate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1038, 533);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#D2B48C; "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(20, 280, 271, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(16);
        pushButtonUpdate->setFont(font);
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(320, 20, 661, 421));
        pushButtonAccess = new QPushButton(centralwidget);
        pushButtonAccess->setObjectName(QString::fromUtf8("pushButtonAccess"));
        pushButtonAccess->setGeometry(QRect(20, 400, 271, 41));
        pushButtonAccess->setFont(font);
        pushButtonAccess->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 140, 81, 24));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEditPosition1 = new QLineEdit(centralwidget);
        lineEditPosition1->setObjectName(QString::fromUtf8("lineEditPosition1"));
        lineEditPosition1->setGeometry(QRect(20, 170, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(16);
        font1.setBold(false);
        lineEditPosition1->setFont(font1);
        lineEditPosition1->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 140, 81, 24));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEditWeight = new QLineEdit(centralwidget);
        lineEditWeight->setObjectName(QString::fromUtf8("lineEditWeight"));
        lineEditWeight->setGeometry(QRect(220, 170, 61, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Source Code Pro")});
        font2.setPointSize(16);
        lineEditWeight->setFont(font2);
        lineEditWeight->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonInsert = new QPushButton(centralwidget);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));
        pushButtonInsert->setGeometry(QRect(20, 220, 271, 41));
        pushButtonInsert->setFont(font);
        pushButtonInsert->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 140, 61, 24));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEditPosition2 = new QLineEdit(centralwidget);
        lineEditPosition2->setObjectName(QString::fromUtf8("lineEditPosition2"));
        lineEditPosition2->setGeometry(QRect(110, 170, 81, 31));
        lineEditPosition2->setFont(font2);
        lineEditPosition2->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonRemove = new QPushButton(centralwidget);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(20, 340, 271, 41));
        pushButtonRemove->setFont(font);
        pushButtonRemove->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 101, 24));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEditSize = new QLineEdit(centralwidget);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));
        lineEditSize->setGeometry(QRect(130, 60, 81, 31));
        lineEditSize->setFont(font2);
        lineEditSize->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonCreate = new QPushButton(centralwidget);
        pushButtonCreate->setObjectName(QString::fromUtf8("pushButtonCreate"));
        pushButtonCreate->setGeometry(QRect(220, 60, 91, 31));
        pushButtonCreate->setFont(font);
        pushButtonCreate->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1038, 21));
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
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        pushButtonAccess->setText(QCoreApplication::translate("MainWindow", "Acessar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ponto 2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ponto 1", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Peso", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tamanho", nullptr));
        pushButtonCreate->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
