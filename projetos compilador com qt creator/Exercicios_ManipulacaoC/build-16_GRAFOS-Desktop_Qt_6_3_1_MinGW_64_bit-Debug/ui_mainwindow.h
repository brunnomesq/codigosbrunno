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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButtonRemove;
    QLineEdit *lineEditPosition1;
    QLabel *label_3;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QPushButton *pushButtonAccess;
    QLineEdit *lineEditPosition2;
    QLineEdit *lineEditWeight;
    QPushButton *pushButtonCreate;
    QPushButton *pushButtonInsert;
    QLabel *label_4;
    QLineEdit *lineEdit_Partida;
    QPushButton *pushButtonUpdate;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *textEdit;
    QPushButton *pushButton_ponto;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1363, 868);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#D2B48C; "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 121, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(11);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        pushButtonRemove = new QPushButton(centralwidget);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(10, 310, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka")});
        font1.setPointSize(16);
        pushButtonRemove->setFont(font1);
        pushButtonRemove->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        lineEditPosition1 = new QLineEdit(centralwidget);
        lineEditPosition1->setObjectName(QString::fromUtf8("lineEditPosition1"));
        lineEditPosition1->setGeometry(QRect(10, 140, 61, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Source Code Pro")});
        font2.setPointSize(16);
        font2.setBold(false);
        lineEditPosition1->setFont(font2);
        lineEditPosition1->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 110, 81, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka")});
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(220, 10, 841, 641));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 71, 24));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        pushButtonAccess = new QPushButton(centralwidget);
        pushButtonAccess->setObjectName(QString::fromUtf8("pushButtonAccess"));
        pushButtonAccess->setGeometry(QRect(10, 370, 201, 41));
        pushButtonAccess->setFont(font1);
        pushButtonAccess->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        lineEditPosition2 = new QLineEdit(centralwidget);
        lineEditPosition2->setObjectName(QString::fromUtf8("lineEditPosition2"));
        lineEditPosition2->setGeometry(QRect(80, 140, 61, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Source Code Pro")});
        font4.setPointSize(16);
        lineEditPosition2->setFont(font4);
        lineEditPosition2->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        lineEditWeight = new QLineEdit(centralwidget);
        lineEditWeight->setObjectName(QString::fromUtf8("lineEditWeight"));
        lineEditWeight->setGeometry(QRect(150, 140, 61, 31));
        lineEditWeight->setFont(font4);
        lineEditWeight->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonCreate = new QPushButton(centralwidget);
        pushButtonCreate->setObjectName(QString::fromUtf8("pushButtonCreate"));
        pushButtonCreate->setGeometry(QRect(30, 0, 141, 31));
        pushButtonCreate->setFont(font1);
        pushButtonCreate->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonInsert = new QPushButton(centralwidget);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));
        pushButtonInsert->setGeometry(QRect(10, 190, 201, 41));
        pushButtonInsert->setFont(font1);
        pushButtonInsert->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 110, 61, 24));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEdit_Partida = new QLineEdit(centralwidget);
        lineEdit_Partida->setObjectName(QString::fromUtf8("lineEdit_Partida"));
        lineEdit_Partida->setGeometry(QRect(140, 40, 51, 31));
        lineEdit_Partida->setFont(font4);
        lineEdit_Partida->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(10, 250, 201, 41));
        pushButtonUpdate->setFont(font1);
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 460, 151, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sitka")});
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 490, 141, 20));
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(8, 520, 211, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Sitka")});
        font6.setPointSize(8);
        label_8->setFont(font6);
        label_8->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(8, 550, 201, 20));
        label_9->setFont(font5);
        label_9->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(1080, 10, 261, 641));
        QFont font7;
        font7.setPointSize(16);
        textEdit->setFont(font7);
        textEdit->setStyleSheet(QString::fromUtf8(""));
        pushButton_ponto = new QPushButton(centralwidget);
        pushButton_ponto->setObjectName(QString::fromUtf8("pushButton_ponto"));
        pushButton_ponto->setGeometry(QRect(10, 80, 121, 24));
        pushButton_ponto->setFont(font1);
        pushButton_ponto->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1363, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "Ponto de partida", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ponto 2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ponto 1", nullptr));
        pushButtonAccess->setText(QCoreApplication::translate("MainWindow", "Acessar", nullptr));
        pushButtonCreate->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Peso", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Custo Acumulado - CA;", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "V\303\251rtice Precedente - VP", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Quantidade de Arestas Visitadas - QAV;", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Situa\303\247\303\243o do V\303\251rtice - SV;", nullptr));
        pushButton_ponto->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
