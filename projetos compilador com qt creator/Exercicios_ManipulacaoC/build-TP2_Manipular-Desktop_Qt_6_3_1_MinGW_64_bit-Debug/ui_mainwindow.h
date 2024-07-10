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
    QTextEdit *textEdit_Ent;
    QLabel *label;
    QTextEdit *textEdit_Sai;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_Abrir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(731, 448);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit_Ent = new QTextEdit(centralwidget);
        textEdit_Ent->setObjectName(QString::fromUtf8("textEdit_Ent"));
        textEdit_Ent->setGeometry(QRect(30, 120, 201, 261));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 100, 91, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Medium Cond")});
        font.setPointSize(16);
        label->setFont(font);
        textEdit_Sai = new QTextEdit(centralwidget);
        textEdit_Sai->setObjectName(QString::fromUtf8("textEdit_Sai"));
        textEdit_Sai->setGeometry(QRect(480, 120, 201, 261));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 100, 71, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 0, 401, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Hotel De Paris")});
        font1.setPointSize(26);
        label_3->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(320, 130, 91, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 190, 51, 16));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 220, 51, 16));
        label_5->setFont(font);
        pushButton_Abrir = new QPushButton(centralwidget);
        pushButton_Abrir->setObjectName(QString::fromUtf8("pushButton_Abrir"));
        pushButton_Abrir->setGeometry(QRect(320, 70, 91, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 731, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "entrada.txt", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "saida.txt", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Manipulacao de arquivos", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "A -> a", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "a -> A", nullptr));
        pushButton_Abrir->setText(QCoreApplication::translate("MainWindow", "Abrir Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
