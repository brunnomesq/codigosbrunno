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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_7;
    QPushButton *pushButton_EncontrarBS;
    QPushButton *pushButton_RemoverBS;
    QStackedWidget *stackedWidget_3;
    QWidget *page_2;
    QWidget *page_ativado;
    QLabel *label_14;
    QComboBox *comboBox_Dep;
    QLabel *label_15;
    QComboBox *comboBox_Tit;
    QLabel *label_16;
    QComboBox *comboBox_Tip;
    QPushButton *pushButton_InserirBS;
    QLabel *label;
    QLineEdit *lineEditNomeDoArquivo;
    QPushButton *pushButtonBuscarNomeArquivo;
    QPushButton *pushButton_AlterarBS;
    QTableWidget *tableWidget;
    QLabel *label_6;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_inserir;
    QPushButton *pushButton_Inserir;
    QWidget *page_alterar;
    QPushButton *pushButton_Alterar;
    QWidget *page_remover;
    QPushButton *pushButton_Remover;
    QWidget *page_procurar;
    QPushButton *pushButton_Encontrar;
    QStackedWidget *stackedWidget_2;
    QWidget *page_0;
    QWidget *page_Nome_Matricula;
    QLabel *label_12;
    QLineEdit *lineEdit_Nome;
    QLabel *label_13;
    QLineEdit *lineEdit_Mat;
    QLabel *label_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1120, 711);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#333333;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(900, 40, 201, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font.setPointSize(12);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color:#CCCCCC;"));
        pushButton_EncontrarBS = new QPushButton(centralwidget);
        pushButton_EncontrarBS->setObjectName(QString::fromUtf8("pushButton_EncontrarBS"));
        pushButton_EncontrarBS->setEnabled(false);
        pushButton_EncontrarBS->setGeometry(QRect(810, 220, 141, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font1.setPointSize(11);
        font1.setItalic(true);
        pushButton_EncontrarBS->setFont(font1);
        pushButton_EncontrarBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_EncontrarBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_EncontrarBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Projetos do qt/icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_EncontrarBS->setIcon(icon);
        pushButton_RemoverBS = new QPushButton(centralwidget);
        pushButton_RemoverBS->setObjectName(QString::fromUtf8("pushButton_RemoverBS"));
        pushButton_RemoverBS->setEnabled(false);
        pushButton_RemoverBS->setGeometry(QRect(970, 220, 141, 81));
        pushButton_RemoverBS->setFont(font1);
        pushButton_RemoverBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RemoverBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_RemoverBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Projetos do qt/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_RemoverBS->setIcon(icon1);
        stackedWidget_3 = new QStackedWidget(centralwidget);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(810, 489, 301, 131));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget_3->addWidget(page_2);
        page_ativado = new QWidget();
        page_ativado->setObjectName(QString::fromUtf8("page_ativado"));
        label_14 = new QLabel(page_ativado);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 0, 301, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font2.setPointSize(10);
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        comboBox_Dep = new QComboBox(page_ativado);
        comboBox_Dep->setObjectName(QString::fromUtf8("comboBox_Dep"));
        comboBox_Dep->setEnabled(true);
        comboBox_Dep->setGeometry(QRect(0, 20, 301, 16));
        comboBox_Dep->setFont(font2);
        comboBox_Dep->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        label_15 = new QLabel(page_ativado);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 40, 301, 16));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        comboBox_Tit = new QComboBox(page_ativado);
        comboBox_Tit->setObjectName(QString::fromUtf8("comboBox_Tit"));
        comboBox_Tit->setEnabled(true);
        comboBox_Tit->setGeometry(QRect(0, 60, 301, 16));
        comboBox_Tit->setFont(font2);
        comboBox_Tit->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        label_16 = new QLabel(page_ativado);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 80, 301, 16));
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        comboBox_Tip = new QComboBox(page_ativado);
        comboBox_Tip->setObjectName(QString::fromUtf8("comboBox_Tip"));
        comboBox_Tip->setEnabled(true);
        comboBox_Tip->setGeometry(QRect(0, 100, 301, 16));
        comboBox_Tip->setFont(font2);
        comboBox_Tip->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget_3->addWidget(page_ativado);
        pushButton_InserirBS = new QPushButton(centralwidget);
        pushButton_InserirBS->setObjectName(QString::fromUtf8("pushButton_InserirBS"));
        pushButton_InserirBS->setEnabled(false);
        pushButton_InserirBS->setGeometry(QRect(810, 310, 141, 81));
        pushButton_InserirBS->setFont(font1);
        pushButton_InserirBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_InserirBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_InserirBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Projetos do qt/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_InserirBS->setIcon(icon2);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 611, 81));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        lineEditNomeDoArquivo = new QLineEdit(centralwidget);
        lineEditNomeDoArquivo->setObjectName(QString::fromUtf8("lineEditNomeDoArquivo"));
        lineEditNomeDoArquivo->setGeometry(QRect(380, 90, 401, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cairo black")});
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        lineEditNomeDoArquivo->setFont(font3);
        lineEditNomeDoArquivo->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        pushButtonBuscarNomeArquivo = new QPushButton(centralwidget);
        pushButtonBuscarNomeArquivo->setObjectName(QString::fromUtf8("pushButtonBuscarNomeArquivo"));
        pushButtonBuscarNomeArquivo->setGeometry(QRect(790, 90, 111, 25));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(true);
        pushButtonBuscarNomeArquivo->setFont(font4);
        pushButtonBuscarNomeArquivo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonBuscarNomeArquivo->setLayoutDirection(Qt::LeftToRight);
        pushButtonBuscarNomeArquivo->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        pushButtonBuscarNomeArquivo->setCheckable(false);
        pushButton_AlterarBS = new QPushButton(centralwidget);
        pushButton_AlterarBS->setObjectName(QString::fromUtf8("pushButton_AlterarBS"));
        pushButton_AlterarBS->setEnabled(false);
        pushButton_AlterarBS->setGeometry(QRect(970, 310, 141, 81));
        pushButton_AlterarBS->setFont(font1);
        pushButton_AlterarBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_AlterarBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_AlterarBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Projetos do qt/icons/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_AlterarBS->setIcon(icon3);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 220, 801, 461));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font5.setPointSize(9);
        tableWidget->setFont(font5);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-10, -10, 171, 211));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/assinaturas-escolas-pucgoias.png")));
        label_6->setScaledContents(false);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(810, 610, 301, 91));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_inserir = new QWidget();
        page_inserir->setObjectName(QString::fromUtf8("page_inserir"));
        pushButton_Inserir = new QPushButton(page_inserir);
        pushButton_Inserir->setObjectName(QString::fromUtf8("pushButton_Inserir"));
        pushButton_Inserir->setGeometry(QRect(0, 10, 301, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(true);
        pushButton_Inserir->setFont(font6);
        pushButton_Inserir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Inserir->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget->addWidget(page_inserir);
        page_alterar = new QWidget();
        page_alterar->setObjectName(QString::fromUtf8("page_alterar"));
        pushButton_Alterar = new QPushButton(page_alterar);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(0, 10, 301, 51));
        pushButton_Alterar->setFont(font6);
        pushButton_Alterar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Alterar->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget->addWidget(page_alterar);
        page_remover = new QWidget();
        page_remover->setObjectName(QString::fromUtf8("page_remover"));
        pushButton_Remover = new QPushButton(page_remover);
        pushButton_Remover->setObjectName(QString::fromUtf8("pushButton_Remover"));
        pushButton_Remover->setGeometry(QRect(0, 10, 301, 51));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font7.setPointSize(12);
        font7.setItalic(true);
        pushButton_Remover->setFont(font7);
        pushButton_Remover->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Remover->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget->addWidget(page_remover);
        page_procurar = new QWidget();
        page_procurar->setObjectName(QString::fromUtf8("page_procurar"));
        page_procurar->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_Encontrar = new QPushButton(page_procurar);
        pushButton_Encontrar->setObjectName(QString::fromUtf8("pushButton_Encontrar"));
        pushButton_Encontrar->setGeometry(QRect(0, 10, 301, 51));
        pushButton_Encontrar->setFont(font7);
        pushButton_Encontrar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Encontrar->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget->addWidget(page_procurar);
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(810, 400, 301, 91));
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        stackedWidget_2->addWidget(page_0);
        page_Nome_Matricula = new QWidget();
        page_Nome_Matricula->setObjectName(QString::fromUtf8("page_Nome_Matricula"));
        label_12 = new QLabel(page_Nome_Matricula);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 40, 261, 16));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        lineEdit_Nome = new QLineEdit(page_Nome_Matricula);
        lineEdit_Nome->setObjectName(QString::fromUtf8("lineEdit_Nome"));
        lineEdit_Nome->setEnabled(true);
        lineEdit_Nome->setGeometry(QRect(0, 60, 301, 21));
        lineEdit_Nome->setFont(font2);
        lineEdit_Nome->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        label_13 = new QLabel(page_Nome_Matricula);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 301, 16));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        lineEdit_Mat = new QLineEdit(page_Nome_Matricula);
        lineEdit_Mat->setObjectName(QString::fromUtf8("lineEdit_Mat"));
        lineEdit_Mat->setEnabled(true);
        lineEdit_Mat->setGeometry(QRect(0, 20, 301, 21));
        lineEdit_Mat->setFont(font2);
        lineEdit_Mat->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget_2->addWidget(page_Nome_Matricula);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 90, 101, 20));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color:#CCCCCC;\n"
""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 140, 281, 70));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        textEdit->setFont(font8);
        textEdit->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1120, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        pushButton_EncontrarBS->setText(QCoreApplication::translate("MainWindow", "Procura", nullptr));
        pushButton_RemoverBS->setText(QCoreApplication::translate("MainWindow", "Remo\303\247\303\243o", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Tipo de Contrato", nullptr));
        pushButton_InserirBS->setText(QCoreApplication::translate("MainWindow", "Inser\303\247\303\243o", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; font-style:italic; text-decoration: underline; color:#CCCCCC;\">Ex 12+1: TABELA HASH ED2</span></p></body></html>", nullptr));
        lineEditNomeDoArquivo->setText(QString());
        pushButtonBuscarNomeArquivo->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_AlterarBS->setText(QCoreApplication::translate("MainWindow", "Altera\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Pos", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Colis\303\243o 0", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Colis\303\243o 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Colis\303\243o 2", nullptr));
        label_6->setText(QString());
        pushButton_Inserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        pushButton_Alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        pushButton_Remover->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        pushButton_Encontrar->setText(QCoreApplication::translate("MainWindow", "Procurar", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome do arquivo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H