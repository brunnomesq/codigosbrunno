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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QPushButton *pushButtonMostrarDados;
    QLineEdit *lineEditNomeDoArquivo;
    QLabel *label;
    QPushButton *pushButtonBuscarNomeArquivo;
    QLabel *label_2;
    QLabel *label_4;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1027, 778);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonMostrarDados = new QPushButton(centralwidget);
        pushButtonMostrarDados->setObjectName(QString::fromUtf8("pushButtonMostrarDados"));
        pushButtonMostrarDados->setGeometry(QRect(630, 90, 191, 45));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setUnderline(false);
        pushButtonMostrarDados->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/inserir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMostrarDados->setIcon(icon);
        pushButtonMostrarDados->setIconSize(QSize(30, 30));
        lineEditNomeDoArquivo = new QLineEdit(centralwidget);
        lineEditNomeDoArquivo->setObjectName(QString::fromUtf8("lineEditNomeDoArquivo"));
        lineEditNomeDoArquivo->setGeometry(QRect(105, 60, 611, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(11);
        font1.setBold(false);
        lineEditNomeDoArquivo->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, -20, 621, 91));
        pushButtonBuscarNomeArquivo = new QPushButton(centralwidget);
        pushButtonBuscarNomeArquivo->setObjectName(QString::fromUtf8("pushButtonBuscarNomeArquivo"));
        pushButtonBuscarNomeArquivo->setGeometry(QRect(720, 60, 101, 25));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setBold(false);
        pushButtonBuscarNomeArquivo->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Downloads/pesquisa.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBuscarNomeArquivo->setIcon(icon1);
        pushButtonBuscarNomeArquivo->setCheckable(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 60, 101, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 130, 101, 16));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 150, 901, 391));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1027, 21));
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
        pushButtonMostrarDados->setText(QCoreApplication::translate("MainWindow", "MOSTRAR DADOS", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; font-style:italic; text-decoration: underline; color:#0433ff;\">SISTEMA DA F\303\223RMULA UM</span></p></body></html>", nullptr));
        pushButtonBuscarNomeArquivo->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome do arquivo:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Dados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
