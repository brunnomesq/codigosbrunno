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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditSize;
    QPushButton *pushButtonMake;
    QLineEdit *lineEditSSTime;
    QTextEdit *textEditOrder;
    QTextEdit *textEditIOrder;
    QLineEdit *lineEditISTime;
    QTextEdit *textEditRand;
    QLineEdit *lineEditSSCount;
    QLineEdit *lineEditISCount;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditBSCount;
    QLineEdit *lineEditBSTime;
    QLabel *label_9;
    QTextEdit *textEditBOrder;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(797, 634);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 140, 161, 22));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(true);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 250, 181, 22));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 10, 231, 41));
        QFont font1;
        font1.setPointSize(21);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setStrikeOut(false);
        label_4->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 90, 231, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        lineEditSize = new QLineEdit(layoutWidget);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));

        horizontalLayout->addWidget(lineEditSize);

        pushButtonMake = new QPushButton(layoutWidget);
        pushButtonMake->setObjectName(QString::fromUtf8("pushButtonMake"));
        pushButtonMake->setFont(font2);

        horizontalLayout->addWidget(pushButtonMake);

        lineEditSSTime = new QLineEdit(centralwidget);
        lineEditSSTime->setObjectName(QString::fromUtf8("lineEditSSTime"));
        lineEditSSTime->setGeometry(QRect(540, 320, 113, 51));
        textEditOrder = new QTextEdit(centralwidget);
        textEditOrder->setObjectName(QString::fromUtf8("textEditOrder"));
        textEditOrder->setGeometry(QRect(70, 320, 461, 51));
        textEditIOrder = new QTextEdit(centralwidget);
        textEditIOrder->setObjectName(QString::fromUtf8("textEditIOrder"));
        textEditIOrder->setGeometry(QRect(70, 420, 461, 51));
        lineEditISTime = new QLineEdit(centralwidget);
        lineEditISTime->setObjectName(QString::fromUtf8("lineEditISTime"));
        lineEditISTime->setGeometry(QRect(540, 420, 113, 51));
        textEditRand = new QTextEdit(centralwidget);
        textEditRand->setObjectName(QString::fromUtf8("textEditRand"));
        textEditRand->setGeometry(QRect(70, 170, 451, 70));
        lineEditSSCount = new QLineEdit(centralwidget);
        lineEditSSCount->setObjectName(QString::fromUtf8("lineEditSSCount"));
        lineEditSSCount->setGeometry(QRect(660, 320, 113, 51));
        lineEditISCount = new QLineEdit(centralwidget);
        lineEditISCount->setObjectName(QString::fromUtf8("lineEditISCount"));
        lineEditISCount->setGeometry(QRect(660, 420, 113, 51));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(560, 270, 61, 41));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(670, 270, 91, 41));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 290, 121, 22));
        label_7->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 380, 121, 22));
        label_8->setFont(font);
        lineEditBSCount = new QLineEdit(centralwidget);
        lineEditBSCount->setObjectName(QString::fromUtf8("lineEditBSCount"));
        lineEditBSCount->setGeometry(QRect(660, 520, 113, 51));
        lineEditBSTime = new QLineEdit(centralwidget);
        lineEditBSTime->setObjectName(QString::fromUtf8("lineEditBSTime"));
        lineEditBSTime->setGeometry(QRect(540, 520, 113, 51));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 480, 121, 22));
        label_9->setFont(font);
        textEditBOrder = new QTextEdit(centralwidget);
        textEditBOrder->setObjectName(QString::fromUtf8("textEditBOrder"));
        textEditBOrder->setGeometry(QRect(70, 520, 461, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 20));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "dados vetor random:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "dados vetor ordenado:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Atividade-EDII", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tamanho:", nullptr));
        pushButtonMake->setText(QCoreApplication::translate("MainWindow", "Gerar", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Tempo:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Execucoes:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Selection Sort:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Insertion Sort:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Bubble Sort:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
