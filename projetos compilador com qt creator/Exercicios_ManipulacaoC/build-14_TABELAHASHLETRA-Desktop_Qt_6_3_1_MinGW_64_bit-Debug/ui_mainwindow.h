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
    QStackedWidget *stackedWidget_2;
    QWidget *page_0;
    QWidget *page_Nome_Matricula;
    QLabel *label_12;
    QLineEdit *lineEdit_Nome;
    QLabel *label_13;
    QLineEdit *lineEdit_Mat;
    QPushButton *pushButton_AlterarBS;
    QLabel *label_2;
    QPushButton *pushButton_InserirBS;
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
    QTableWidget *tableWidget;
    QLabel *label_6;
    QLineEdit *lineEditNomeDoArquivo;
    QLabel *label;
    QTextEdit *textEdit;
    QStackedWidget *stackedWidget_3;
    QWidget *page_2;
    QWidget *page_ativado;
    QLabel *label_14;
    QComboBox *comboBox_Dep;
    QLabel *label_15;
    QComboBox *comboBox_Tit;
    QLabel *label_16;
    QComboBox *comboBox_Tip;
    QLabel *label_7;
    QPushButton *pushButton_RemoverBS;
    QPushButton *pushButtonBuscarNomeArquivo;
    QPushButton *pushButton_EncontrarBS;
    QComboBox *comboBox_Letras;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1105, 710);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#333333;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(780, 390, 301, 91));
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        stackedWidget_2->addWidget(page_0);
        page_Nome_Matricula = new QWidget();
        page_Nome_Matricula->setObjectName(QString::fromUtf8("page_Nome_Matricula"));
        label_12 = new QLabel(page_Nome_Matricula);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 40, 261, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font.setPointSize(10);
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        lineEdit_Nome = new QLineEdit(page_Nome_Matricula);
        lineEdit_Nome->setObjectName(QString::fromUtf8("lineEdit_Nome"));
        lineEdit_Nome->setEnabled(true);
        lineEdit_Nome->setGeometry(QRect(0, 60, 301, 21));
        lineEdit_Nome->setFont(font);
        lineEdit_Nome->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        label_13 = new QLabel(page_Nome_Matricula);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 301, 16));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        lineEdit_Mat = new QLineEdit(page_Nome_Matricula);
        lineEdit_Mat->setObjectName(QString::fromUtf8("lineEdit_Mat"));
        lineEdit_Mat->setEnabled(true);
        lineEdit_Mat->setGeometry(QRect(0, 20, 301, 21));
        lineEdit_Mat->setFont(font);
        lineEdit_Mat->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget_2->addWidget(page_Nome_Matricula);
        pushButton_AlterarBS = new QPushButton(centralwidget);
        pushButton_AlterarBS->setObjectName(QString::fromUtf8("pushButton_AlterarBS"));
        pushButton_AlterarBS->setEnabled(false);
        pushButton_AlterarBS->setGeometry(QRect(940, 300, 141, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font1.setPointSize(11);
        font1.setItalic(true);
        pushButton_AlterarBS->setFont(font1);
        pushButton_AlterarBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_AlterarBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_AlterarBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Projetos do qt/icons/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_AlterarBS->setIcon(icon);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 70, 101, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color:#CCCCCC;\n"
""));
        pushButton_InserirBS = new QPushButton(centralwidget);
        pushButton_InserirBS->setObjectName(QString::fromUtf8("pushButton_InserirBS"));
        pushButton_InserirBS->setEnabled(false);
        pushButton_InserirBS->setGeometry(QRect(790, 300, 141, 81));
        pushButton_InserirBS->setFont(font1);
        pushButton_InserirBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_InserirBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_InserirBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Projetos do qt/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_InserirBS->setIcon(icon1);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(780, 600, 301, 91));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_inserir = new QWidget();
        page_inserir->setObjectName(QString::fromUtf8("page_inserir"));
        pushButton_Inserir = new QPushButton(page_inserir);
        pushButton_Inserir->setObjectName(QString::fromUtf8("pushButton_Inserir"));
        pushButton_Inserir->setGeometry(QRect(0, 10, 301, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(true);
        pushButton_Inserir->setFont(font2);
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
        pushButton_Alterar->setFont(font2);
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
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font3.setPointSize(12);
        font3.setItalic(true);
        pushButton_Remover->setFont(font3);
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
        pushButton_Encontrar->setFont(font3);
        pushButton_Encontrar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Encontrar->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget->addWidget(page_procurar);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 200, 701, 461));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font4.setPointSize(9);
        tableWidget->setFont(font4);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-10, -30, 171, 211));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/assinaturas-escolas-pucgoias.png")));
        label_6->setScaledContents(false);
        lineEditNomeDoArquivo = new QLineEdit(centralwidget);
        lineEditNomeDoArquivo->setObjectName(QString::fromUtf8("lineEditNomeDoArquivo"));
        lineEditNomeDoArquivo->setGeometry(QRect(380, 70, 401, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Cairo black")});
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setItalic(false);
        lineEditNomeDoArquivo->setFont(font5);
        lineEditNomeDoArquivo->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        lineEditNomeDoArquivo->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, -10, 611, 81));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 120, 281, 70));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        textEdit->setFont(font6);
        textEdit->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget_3 = new QStackedWidget(centralwidget);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(780, 479, 301, 131));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget_3->addWidget(page_2);
        page_ativado = new QWidget();
        page_ativado->setObjectName(QString::fromUtf8("page_ativado"));
        label_14 = new QLabel(page_ativado);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 0, 301, 16));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        comboBox_Dep = new QComboBox(page_ativado);
        comboBox_Dep->setObjectName(QString::fromUtf8("comboBox_Dep"));
        comboBox_Dep->setEnabled(true);
        comboBox_Dep->setGeometry(QRect(0, 20, 301, 16));
        comboBox_Dep->setFont(font);
        comboBox_Dep->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        label_15 = new QLabel(page_ativado);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 40, 301, 16));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        comboBox_Tit = new QComboBox(page_ativado);
        comboBox_Tit->setObjectName(QString::fromUtf8("comboBox_Tit"));
        comboBox_Tit->setEnabled(true);
        comboBox_Tit->setGeometry(QRect(0, 60, 301, 16));
        comboBox_Tit->setFont(font);
        comboBox_Tit->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        label_16 = new QLabel(page_ativado);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 80, 301, 16));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("color:#CCCCCC;\n"
""));
        comboBox_Tip = new QComboBox(page_ativado);
        comboBox_Tip->setObjectName(QString::fromUtf8("comboBox_Tip"));
        comboBox_Tip->setEnabled(true);
        comboBox_Tip->setGeometry(QRect(0, 100, 301, 16));
        comboBox_Tip->setFont(font);
        comboBox_Tip->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        stackedWidget_3->addWidget(page_ativado);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(900, 20, 201, 20));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font7.setPointSize(12);
        label_7->setFont(font7);
        label_7->setStyleSheet(QString::fromUtf8("color:#CCCCCC;"));
        pushButton_RemoverBS = new QPushButton(centralwidget);
        pushButton_RemoverBS->setObjectName(QString::fromUtf8("pushButton_RemoverBS"));
        pushButton_RemoverBS->setEnabled(false);
        pushButton_RemoverBS->setGeometry(QRect(940, 210, 141, 81));
        pushButton_RemoverBS->setFont(font1);
        pushButton_RemoverBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RemoverBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_RemoverBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Projetos do qt/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_RemoverBS->setIcon(icon2);
        pushButtonBuscarNomeArquivo = new QPushButton(centralwidget);
        pushButtonBuscarNomeArquivo->setObjectName(QString::fromUtf8("pushButtonBuscarNomeArquivo"));
        pushButtonBuscarNomeArquivo->setGeometry(QRect(790, 70, 111, 25));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setItalic(true);
        pushButtonBuscarNomeArquivo->setFont(font8);
        pushButtonBuscarNomeArquivo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonBuscarNomeArquivo->setLayoutDirection(Qt::LeftToRight);
        pushButtonBuscarNomeArquivo->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        pushButtonBuscarNomeArquivo->setCheckable(false);
        pushButton_EncontrarBS = new QPushButton(centralwidget);
        pushButton_EncontrarBS->setObjectName(QString::fromUtf8("pushButton_EncontrarBS"));
        pushButton_EncontrarBS->setEnabled(false);
        pushButton_EncontrarBS->setGeometry(QRect(790, 210, 141, 81));
        pushButton_EncontrarBS->setFont(font1);
        pushButton_EncontrarBS->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_EncontrarBS->setLayoutDirection(Qt::RightToLeft);
        pushButton_EncontrarBS->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Projetos do qt/icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_EncontrarBS->setIcon(icon3);
        comboBox_Letras = new QComboBox(centralwidget);
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->addItem(QString());
        comboBox_Letras->setObjectName(QString::fromUtf8("comboBox_Letras"));
        comboBox_Letras->setGeometry(QRect(490, 170, 71, 21));
        comboBox_Letras->setStyleSheet(QString::fromUtf8("background-color:#CCCCCC;\n"
"border-color:rgb(149, 0, 255);\n"
"color:#333333;\n"
"\n"
"border-radius:10px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 170, 41, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color:#CCCCCC;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1105, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget_2->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        pushButton_AlterarBS->setText(QCoreApplication::translate("MainWindow", "Altera\303\247\303\243o", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome do arquivo:", nullptr));
        pushButton_InserirBS->setText(QCoreApplication::translate("MainWindow", "Inser\303\247\303\243o", nullptr));
        pushButton_Inserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        pushButton_Alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        pushButton_Remover->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        pushButton_Encontrar->setText(QCoreApplication::translate("MainWindow", "Procurar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Dep", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Titulacao", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "T de Contrato", nullptr));
        label_6->setText(QString());
        lineEditNomeDoArquivo->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; font-style:italic; text-decoration: underline; color:#CCCCCC;\">Ex 14: TABELA HASH ED2</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Tipo de Contrato", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Brunno Pedrosa Mesquita", nullptr));
        pushButton_RemoverBS->setText(QCoreApplication::translate("MainWindow", "Remo\303\247\303\243o", nullptr));
        pushButtonBuscarNomeArquivo->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_EncontrarBS->setText(QCoreApplication::translate("MainWindow", "Procura", nullptr));
        comboBox_Letras->setItemText(0, QCoreApplication::translate("MainWindow", "A", nullptr));
        comboBox_Letras->setItemText(1, QCoreApplication::translate("MainWindow", "B", nullptr));
        comboBox_Letras->setItemText(2, QCoreApplication::translate("MainWindow", "C", nullptr));
        comboBox_Letras->setItemText(3, QCoreApplication::translate("MainWindow", "D", nullptr));
        comboBox_Letras->setItemText(4, QCoreApplication::translate("MainWindow", "E", nullptr));
        comboBox_Letras->setItemText(5, QCoreApplication::translate("MainWindow", "F", nullptr));
        comboBox_Letras->setItemText(6, QCoreApplication::translate("MainWindow", "G", nullptr));
        comboBox_Letras->setItemText(7, QCoreApplication::translate("MainWindow", "H", nullptr));
        comboBox_Letras->setItemText(8, QCoreApplication::translate("MainWindow", "I", nullptr));
        comboBox_Letras->setItemText(9, QCoreApplication::translate("MainWindow", "J", nullptr));
        comboBox_Letras->setItemText(10, QCoreApplication::translate("MainWindow", "K", nullptr));
        comboBox_Letras->setItemText(11, QCoreApplication::translate("MainWindow", "L", nullptr));
        comboBox_Letras->setItemText(12, QCoreApplication::translate("MainWindow", "M", nullptr));
        comboBox_Letras->setItemText(13, QCoreApplication::translate("MainWindow", "N", nullptr));
        comboBox_Letras->setItemText(14, QCoreApplication::translate("MainWindow", "O", nullptr));
        comboBox_Letras->setItemText(15, QCoreApplication::translate("MainWindow", "P", nullptr));
        comboBox_Letras->setItemText(16, QCoreApplication::translate("MainWindow", "Q", nullptr));
        comboBox_Letras->setItemText(17, QCoreApplication::translate("MainWindow", "R", nullptr));
        comboBox_Letras->setItemText(18, QCoreApplication::translate("MainWindow", "S", nullptr));
        comboBox_Letras->setItemText(19, QCoreApplication::translate("MainWindow", "T", nullptr));
        comboBox_Letras->setItemText(20, QCoreApplication::translate("MainWindow", "U", nullptr));
        comboBox_Letras->setItemText(21, QCoreApplication::translate("MainWindow", "V", nullptr));
        comboBox_Letras->setItemText(22, QCoreApplication::translate("MainWindow", "W", nullptr));
        comboBox_Letras->setItemText(23, QCoreApplication::translate("MainWindow", "X", nullptr));
        comboBox_Letras->setItemText(24, QCoreApplication::translate("MainWindow", "Y", nullptr));
        comboBox_Letras->setItemText(25, QCoreApplication::translate("MainWindow", "Z", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Letra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
