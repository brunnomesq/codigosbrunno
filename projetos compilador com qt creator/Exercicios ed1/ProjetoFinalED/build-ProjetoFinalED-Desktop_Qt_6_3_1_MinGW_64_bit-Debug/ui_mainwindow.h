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
    QLabel *label;
    QPushButton *pushButtonBuscarNomeArquivo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditNomeDoArquivo;
    QTextEdit *textEdit;
    QPushButton *pushButtonMostrarDados;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(831, 834);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #fec7d7"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 20, 222, 38));
        label->setStyleSheet(QString::fromUtf8("font: 10000 20pt \"Arial Black\";\n"
"color: #0e172c;"));
        pushButtonBuscarNomeArquivo = new QPushButton(centralwidget);
        pushButtonBuscarNomeArquivo->setObjectName(QString::fromUtf8("pushButtonBuscarNomeArquivo"));
        pushButtonBuscarNomeArquivo->setGeometry(QRect(690, 115, 91, 25));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        pushButtonBuscarNomeArquivo->setFont(font);
        pushButtonBuscarNomeArquivo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonBuscarNomeArquivo->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Arial Black\";\n"
"background-color: #0e172c;\n"
"color: #F8F7F3;\n"
"border-radius: 12px;\n"
"\n"
""));
        pushButtonBuscarNomeArquivo->setIconSize(QSize(20, 20));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(160, 110, 511, 35));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 5, 0, 5);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("font: 900 13pt \"Arial Black\";\n"
"color: #0e172c;"));

        horizontalLayout_2->addWidget(label_3);

        lineEditNomeDoArquivo = new QLineEdit(horizontalLayoutWidget);
        lineEditNomeDoArquivo->setObjectName(QString::fromUtf8("lineEditNomeDoArquivo"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setItalic(false);
        lineEditNomeDoArquivo->setFont(font2);
        lineEditNomeDoArquivo->setStyleSheet(QString::fromUtf8("background-color: #d9d4e7;\n"
"border-radius: 2px;\n"
"font: 900 8pt \"Arial Black\";\n"
"color: #373636;"));

        horizontalLayout_2->addWidget(lineEditNomeDoArquivo);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(183, 215, 551, 321));
        textEdit->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: #a786df;\n"
"border-width:2px;\n"
"border-color:rgb(149, 0, 255);\n"
"color: rgb(255, 255, 255);"));
        pushButtonMostrarDados = new QPushButton(centralwidget);
        pushButtonMostrarDados->setObjectName(QString::fromUtf8("pushButtonMostrarDados"));
        pushButtonMostrarDados->setGeometry(QRect(610, 160, 171, 17));
        pushButtonMostrarDados->setFont(font);
        pushButtonMostrarDados->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Arial Black\";\n"
"background-color: #0e172c;\n"
"color: #F8F7F3;\n"
"border-radius: 12px;\n"
""));
        pushButtonMostrarDados->setIconSize(QSize(20, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 831, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "ARVORE LISTA", nullptr));
        pushButtonBuscarNomeArquivo->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\342\200\242 Nome do Arquivo:", nullptr));
        lineEditNomeDoArquivo->setText(QString());
        pushButtonMostrarDados->setText(QCoreApplication::translate("MainWindow", "  MOSTRAR DADOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
