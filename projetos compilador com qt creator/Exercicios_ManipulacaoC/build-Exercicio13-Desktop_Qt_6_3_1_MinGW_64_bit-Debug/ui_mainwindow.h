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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_17;
    QPushButton *pushButton_Remover;
    QTableWidget *tableWidget;
    QLabel *label_18;
    QPushButton *pushButton_Inserir;
    QLabel *label_19;
    QPushButton *pushButton_Alterar;
    QComboBox *comboBox_Dep;
    QTextEdit *textEdit;
    QLabel *label_20;
    QLabel *label;
    QLabel *label_21;
    QLineEdit *lineEdit_Nome;
    QComboBox *comboBox_Tit;
    QComboBox *comboBox_Tip;
    QPushButton *pushButton_Encontrar;
    QLineEdit *lineEdit_Mat;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_Arquivo;
    QPushButton *pushButton_Pesquisar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1253, 742);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#3E2717;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(340, 50, 261, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sylfaen")});
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        pushButton_Remover = new QPushButton(centralwidget);
        pushButton_Remover->setObjectName(QString::fromUtf8("pushButton_Remover"));
        pushButton_Remover->setGeometry(QRect(530, 100, 171, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sylfaen")});
        font1.setPointSize(20);
        pushButton_Remover->setFont(font1);
        pushButton_Remover->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Remover->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
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
        tableWidget->setGeometry(QRect(310, 220, 831, 441));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sylfaen")});
        font2.setPointSize(9);
        tableWidget->setFont(font2);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(870, 0, 301, 16));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        pushButton_Inserir = new QPushButton(centralwidget);
        pushButton_Inserir->setObjectName(QString::fromUtf8("pushButton_Inserir"));
        pushButton_Inserir->setGeometry(QRect(750, 100, 181, 51));
        pushButton_Inserir->setFont(font1);
        pushButton_Inserir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Inserir->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(600, 0, 251, 16));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        pushButton_Alterar = new QPushButton(centralwidget);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(970, 100, 171, 51));
        pushButton_Alterar->setFont(font1);
        pushButton_Alterar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Alterar->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        comboBox_Dep = new QComboBox(centralwidget);
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->addItem(QString());
        comboBox_Dep->setObjectName(QString::fromUtf8("comboBox_Dep"));
        comboBox_Dep->setEnabled(true);
        comboBox_Dep->setGeometry(QRect(600, 20, 251, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sylfaen")});
        font3.setPointSize(12);
        comboBox_Dep->setFont(font3);
        comboBox_Dep->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 250, 251, 411));
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        textEdit->setReadOnly(true);
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(340, 0, 241, 16));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 220, 81, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sylfaen")});
        font4.setPointSize(22);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(600, 50, 301, 16));
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        lineEdit_Nome = new QLineEdit(centralwidget);
        lineEdit_Nome->setObjectName(QString::fromUtf8("lineEdit_Nome"));
        lineEdit_Nome->setEnabled(true);
        lineEdit_Nome->setGeometry(QRect(340, 70, 241, 21));
        lineEdit_Nome->setFont(font3);
        lineEdit_Nome->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        comboBox_Tit = new QComboBox(centralwidget);
        comboBox_Tit->addItem(QString());
        comboBox_Tit->addItem(QString());
        comboBox_Tit->addItem(QString());
        comboBox_Tit->addItem(QString());
        comboBox_Tit->addItem(QString());
        comboBox_Tit->setObjectName(QString::fromUtf8("comboBox_Tit"));
        comboBox_Tit->setEnabled(true);
        comboBox_Tit->setGeometry(QRect(600, 70, 251, 21));
        comboBox_Tit->setFont(font3);
        comboBox_Tit->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        comboBox_Tip = new QComboBox(centralwidget);
        comboBox_Tip->addItem(QString());
        comboBox_Tip->addItem(QString());
        comboBox_Tip->setObjectName(QString::fromUtf8("comboBox_Tip"));
        comboBox_Tip->setEnabled(true);
        comboBox_Tip->setGeometry(QRect(870, 20, 241, 21));
        comboBox_Tip->setFont(font3);
        comboBox_Tip->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        pushButton_Encontrar = new QPushButton(centralwidget);
        pushButton_Encontrar->setObjectName(QString::fromUtf8("pushButton_Encontrar"));
        pushButton_Encontrar->setGeometry(QRect(310, 100, 171, 51));
        pushButton_Encontrar->setFont(font1);
        pushButton_Encontrar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Encontrar->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        lineEdit_Mat = new QLineEdit(centralwidget);
        lineEdit_Mat->setObjectName(QString::fromUtf8("lineEdit_Mat"));
        lineEdit_Mat->setEnabled(true);
        lineEdit_Mat->setGeometry(QRect(340, 20, 241, 21));
        lineEdit_Mat->setFont(font3);
        lineEdit_Mat->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, -20, 181, 71));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sylfaen")});
        font5.setPointSize(14);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: #CCCCCC;"));
        label_2->setScaledContents(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 40, 181, 71));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: #CCCCCC;"));
        label_3->setScaledContents(false);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 100, 171, 61));
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("\n"
"color: #CCCCCC;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 220, 51, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 220, 261, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(620, 220, 261, 31));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(880, 220, 261, 31));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: #CCCCCC;"));
        label_8->setAlignment(Qt::AlignCenter);
        lineEdit_Arquivo = new QLineEdit(centralwidget);
        lineEdit_Arquivo->setObjectName(QString::fromUtf8("lineEdit_Arquivo"));
        lineEdit_Arquivo->setEnabled(true);
        lineEdit_Arquivo->setGeometry(QRect(430, 191, 711, 20));
        lineEdit_Arquivo->setFont(font3);
        lineEdit_Arquivo->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        pushButton_Pesquisar = new QPushButton(centralwidget);
        pushButton_Pesquisar->setObjectName(QString::fromUtf8("pushButton_Pesquisar"));
        pushButton_Pesquisar->setGeometry(QRect(310, 191, 121, 21));
        pushButton_Pesquisar->setFont(font2);
        pushButton_Pesquisar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Pesquisar->setStyleSheet(QString::fromUtf8("background-color: #7B5726;\n"
"color: #CCCCCC;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1253, 21));
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
        label_17->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        pushButton_Remover->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Tipo de Contrato", nullptr));
        pushButton_Inserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        pushButton_Alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        comboBox_Dep->setItemText(0, QCoreApplication::translate("MainWindow", "JUR", nullptr));
        comboBox_Dep->setItemText(1, QCoreApplication::translate("MainWindow", "ZOO", nullptr));
        comboBox_Dep->setItemText(2, QCoreApplication::translate("MainWindow", "SER", nullptr));
        comboBox_Dep->setItemText(3, QCoreApplication::translate("MainWindow", "PUC/IDIOMAS", nullptr));
        comboBox_Dep->setItemText(4, QCoreApplication::translate("MainWindow", "MAF", nullptr));
        comboBox_Dep->setItemText(5, QCoreApplication::translate("MainWindow", "PSI", nullptr));
        comboBox_Dep->setItemText(6, QCoreApplication::translate("MainWindow", "MED", nullptr));
        comboBox_Dep->setItemText(7, QCoreApplication::translate("MainWindow", "IGPA", nullptr));
        comboBox_Dep->setItemText(8, QCoreApplication::translate("MainWindow", "EDU", nullptr));
        comboBox_Dep->setItemText(9, QCoreApplication::translate("MainWindow", "LET", nullptr));
        comboBox_Dep->setItemText(10, QCoreApplication::translate("MainWindow", "HGS", nullptr));
        comboBox_Dep->setItemText(11, QCoreApplication::translate("MainWindow", "GABI/ITS", nullptr));
        comboBox_Dep->setItemText(12, QCoreApplication::translate("MainWindow", "FONO", nullptr));
        comboBox_Dep->setItemText(13, QCoreApplication::translate("MainWindow", "ECO", nullptr));
        comboBox_Dep->setItemText(14, QCoreApplication::translate("MainWindow", "ENG", nullptr));
        comboBox_Dep->setItemText(15, QCoreApplication::translate("MainWindow", "FIT", nullptr));
        comboBox_Dep->setItemText(16, QCoreApplication::translate("MainWindow", "DEF", nullptr));
        comboBox_Dep->setItemText(17, QCoreApplication::translate("MainWindow", "CON", nullptr));
        comboBox_Dep->setItemText(18, QCoreApplication::translate("MainWindow", "BIO", nullptr));
        comboBox_Dep->setItemText(19, QCoreApplication::translate("MainWindow", "CBB", nullptr));
        comboBox_Dep->setItemText(20, QCoreApplication::translate("MainWindow", "CBM", nullptr));
        comboBox_Dep->setItemText(21, QCoreApplication::translate("MainWindow", "ARQ", nullptr));
        comboBox_Dep->setItemText(22, QCoreApplication::translate("MainWindow", "ADM", nullptr));
        comboBox_Dep->setItemText(23, QCoreApplication::translate("MainWindow", "ADV", nullptr));

        label_20->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Dados", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
        comboBox_Tit->setItemText(0, QCoreApplication::translate("MainWindow", "Pos-Doutor(a)", nullptr));
        comboBox_Tit->setItemText(1, QCoreApplication::translate("MainWindow", "Mestre(a)", nullptr));
        comboBox_Tit->setItemText(2, QCoreApplication::translate("MainWindow", "Especialista", nullptr));
        comboBox_Tit->setItemText(3, QCoreApplication::translate("MainWindow", "Bacharelado(a)", nullptr));
        comboBox_Tit->setItemText(4, QCoreApplication::translate("MainWindow", "Doutor(a)", nullptr));

        comboBox_Tip->setItemText(0, QCoreApplication::translate("MainWindow", "Horista", nullptr));
        comboBox_Tip->setItemText(1, QCoreApplication::translate("MainWindow", "TI", nullptr));

        pushButton_Encontrar->setText(QCoreApplication::translate("MainWindow", "Procurar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "EXERCICIO 13", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TABELA HASH", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Professor Eugenio", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "POS", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "COLISAO 1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "COLISAO 2", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "COLISAO 3", nullptr));
        pushButton_Pesquisar->setText(QCoreApplication::translate("MainWindow", "Pesquisar por arquivo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
