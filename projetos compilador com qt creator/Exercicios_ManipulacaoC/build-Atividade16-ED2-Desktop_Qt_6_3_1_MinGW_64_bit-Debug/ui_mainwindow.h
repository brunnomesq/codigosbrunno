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
#include <QtWidgets/QHBoxLayout>
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
    QPushButton *pushButton;
    QLineEdit *lineEditPosition1;
    QLineEdit *lineEditPosition2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditWeight;
    QPushButton *pushButtonInsert;
    QPushButton *pushButtonAccess;
    QPushButton *pushButtonRemove;
    QPushButton *pushButtonUpdate;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditSize;
    QPushButton *pushButtonCreate;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(942, 791);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 30, 541, 551));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 0, 80, 24));
        lineEditPosition1 = new QLineEdit(centralwidget);
        lineEditPosition1->setObjectName(QString::fromUtf8("lineEditPosition1"));
        lineEditPosition1->setGeometry(QRect(769, 100, 51, 24));
        lineEditPosition2 = new QLineEdit(centralwidget);
        lineEditPosition2->setObjectName(QString::fromUtf8("lineEditPosition2"));
        lineEditPosition2->setGeometry(QRect(830, 100, 51, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(780, 80, 31, 24));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(840, 80, 31, 24));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(800, 130, 51, 24));
        label_4->setFont(font);
        lineEditWeight = new QLineEdit(centralwidget);
        lineEditWeight->setObjectName(QString::fromUtf8("lineEditWeight"));
        lineEditWeight->setGeometry(QRect(800, 150, 51, 24));
        pushButtonInsert = new QPushButton(centralwidget);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));
        pushButtonInsert->setGeometry(QRect(670, 90, 80, 24));
        pushButtonAccess = new QPushButton(centralwidget);
        pushButtonAccess->setObjectName(QString::fromUtf8("pushButtonAccess"));
        pushButtonAccess->setGeometry(QRect(670, 180, 80, 24));
        pushButtonRemove = new QPushButton(centralwidget);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(670, 150, 80, 24));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(670, 120, 80, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(710, 40, 194, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEditSize = new QLineEdit(layoutWidget);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));

        horizontalLayout->addWidget(lineEditSize);

        pushButtonCreate = new QPushButton(layoutWidget);
        pushButtonCreate->setObjectName(QString::fromUtf8("pushButtonCreate"));

        horizontalLayout->addWidget(pushButtonCreate);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(560, 260, 351, 321));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 942, 21));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Redesenhar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "P1:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "P2:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Peso:", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("MainWindow", "inserir", nullptr));
        pushButtonAccess->setText(QCoreApplication::translate("MainWindow", "acessar", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("MainWindow", "remover", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "alterar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tamanho", nullptr));
        pushButtonCreate->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
