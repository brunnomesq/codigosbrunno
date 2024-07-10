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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonRemove;
    QLineEdit *lineEditPosition1;
    QLineEdit *lineEditWeight;
    QLabel *label_3;
    QLineEdit *lineEditPosition2;
    QLabel *label;
    QLineEdit *lineEditSize;
    QPushButton *pushButtonAccess;
    QPushButton *pushButtonCreate;
    QPushButton *pushButtonInsert;
    QLabel *label_4;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1365, 716);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#D2B48C; "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(210, 10, 781, 641));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(0, 250, 201, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(16);
        pushButtonUpdate->setFont(font);
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonRemove = new QPushButton(centralwidget);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(0, 310, 201, 41));
        pushButtonRemove->setFont(font);
        pushButtonRemove->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        lineEditPosition1 = new QLineEdit(centralwidget);
        lineEditPosition1->setObjectName(QString::fromUtf8("lineEditPosition1"));
        lineEditPosition1->setGeometry(QRect(0, 140, 61, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(16);
        font1.setBold(false);
        lineEditPosition1->setFont(font1);
        lineEditPosition1->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        lineEditWeight = new QLineEdit(centralwidget);
        lineEditWeight->setObjectName(QString::fromUtf8("lineEditWeight"));
        lineEditWeight->setGeometry(QRect(140, 140, 61, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Source Code Pro")});
        font2.setPointSize(16);
        lineEditWeight->setFont(font2);
        lineEditWeight->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 110, 81, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka")});
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEditPosition2 = new QLineEdit(centralwidget);
        lineEditPosition2->setObjectName(QString::fromUtf8("lineEditPosition2"));
        lineEditPosition2->setGeometry(QRect(70, 140, 61, 31));
        lineEditPosition2->setFont(font2);
        lineEditPosition2->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 30, 101, 24));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka")});
        font4.setPointSize(11);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEditSize = new QLineEdit(centralwidget);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));
        lineEditSize->setGeometry(QRect(80, 30, 51, 31));
        lineEditSize->setFont(font2);
        lineEditSize->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonAccess = new QPushButton(centralwidget);
        pushButtonAccess->setObjectName(QString::fromUtf8("pushButtonAccess"));
        pushButtonAccess->setGeometry(QRect(0, 370, 201, 41));
        pushButtonAccess->setFont(font);
        pushButtonAccess->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonCreate = new QPushButton(centralwidget);
        pushButtonCreate->setObjectName(QString::fromUtf8("pushButtonCreate"));
        pushButtonCreate->setGeometry(QRect(140, 30, 61, 31));
        pushButtonCreate->setFont(font);
        pushButtonCreate->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonInsert = new QPushButton(centralwidget);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));
        pushButtonInsert->setGeometry(QRect(0, 190, 201, 41));
        pushButtonInsert->setFont(font);
        pushButtonInsert->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 110, 61, 24));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 110, 71, 24));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(1010, 170, 331, 291));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1070, 140, 211, 24));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1365, 21));
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
        pushButtonRemove->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ponto 2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tamanho", nullptr));
        pushButtonAccess->setText(QCoreApplication::translate("MainWindow", "Acessar", nullptr));
        pushButtonCreate->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Peso", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ponto 1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Matriz n\303\243o direcional tabela", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
