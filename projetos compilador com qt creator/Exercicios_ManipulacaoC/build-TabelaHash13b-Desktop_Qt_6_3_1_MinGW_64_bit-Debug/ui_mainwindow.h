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
    QLabel *label_16;
    QPushButton *pushButton_Remover;
    QLabel *label_12;
    QLabel *label_14;
    QPushButton *pushButton_Alterar;
    QComboBox *comboBox_Tip;
    QPushButton *pushButton_Encontrar;
    QComboBox *comboBox_Dep;
    QLabel *label_3;
    QLineEdit *lineEdit_Mat;
    QLabel *label_15;
    QComboBox *comboBox_Letras;
    QLabel *label;
    QPushButton *pushButton_Inserir;
    QLineEdit *lineEdit_Nome;
    QTextEdit *textEdit;
    QLabel *label_13;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QComboBox *comboBox_Tit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1254, 753);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 390, 301, 16));
        label_16->setStyleSheet(QString::fromUtf8(""));
        pushButton_Remover = new QPushButton(centralwidget);
        pushButton_Remover->setObjectName(QString::fromUtf8("pushButton_Remover"));
        pushButton_Remover->setGeometry(QRect(0, 620, 301, 51));
        pushButton_Remover->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Remover->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 240, 261, 16));
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 310, 301, 16));
        label_14->setStyleSheet(QString::fromUtf8(""));
        pushButton_Alterar = new QPushButton(centralwidget);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(0, 560, 301, 51));
        pushButton_Alterar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Alterar->setStyleSheet(QString::fromUtf8(""));
        comboBox_Tip = new QComboBox(centralwidget);
        comboBox_Tip->setObjectName(QString::fromUtf8("comboBox_Tip"));
        comboBox_Tip->setEnabled(true);
        comboBox_Tip->setGeometry(QRect(0, 410, 301, 16));
        comboBox_Tip->setStyleSheet(QString::fromUtf8(""));
        pushButton_Encontrar = new QPushButton(centralwidget);
        pushButton_Encontrar->setObjectName(QString::fromUtf8("pushButton_Encontrar"));
        pushButton_Encontrar->setGeometry(QRect(0, 500, 301, 51));
        pushButton_Encontrar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Encontrar->setStyleSheet(QString::fromUtf8(""));
        comboBox_Dep = new QComboBox(centralwidget);
        comboBox_Dep->setObjectName(QString::fromUtf8("comboBox_Dep"));
        comboBox_Dep->setEnabled(true);
        comboBox_Dep->setGeometry(QRect(0, 330, 301, 16));
        comboBox_Dep->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 120, 49, 21));
        lineEdit_Mat = new QLineEdit(centralwidget);
        lineEdit_Mat->setObjectName(QString::fromUtf8("lineEdit_Mat"));
        lineEdit_Mat->setEnabled(true);
        lineEdit_Mat->setGeometry(QRect(0, 210, 301, 21));
        lineEdit_Mat->setStyleSheet(QString::fromUtf8(""));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 350, 301, 16));
        label_15->setStyleSheet(QString::fromUtf8(""));
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
        comboBox_Letras->setGeometry(QRect(330, 120, 111, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 49, 16));
        pushButton_Inserir = new QPushButton(centralwidget);
        pushButton_Inserir->setObjectName(QString::fromUtf8("pushButton_Inserir"));
        pushButton_Inserir->setGeometry(QRect(0, 440, 301, 51));
        pushButton_Inserir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Inserir->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Nome = new QLineEdit(centralwidget);
        lineEdit_Nome->setObjectName(QString::fromUtf8("lineEdit_Nome"));
        lineEdit_Nome->setEnabled(true);
        lineEdit_Nome->setGeometry(QRect(0, 270, 301, 21));
        lineEdit_Nome->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 20, 311, 151));
        textEdit->setStyleSheet(QString::fromUtf8(""));
        textEdit->setReadOnly(true);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 190, 301, 16));
        label_13->setStyleSheet(QString::fromUtf8(""));
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
        tableWidget->setGeometry(QRect(330, 150, 801, 521));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 0, 521, 61));
        QFont font;
        font.setPointSize(28);
        label_2->setFont(font);
        comboBox_Tit = new QComboBox(centralwidget);
        comboBox_Tit->setObjectName(QString::fromUtf8("comboBox_Tit"));
        comboBox_Tit->setEnabled(true);
        comboBox_Tit->setGeometry(QRect(0, 370, 301, 16));
        comboBox_Tit->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1254, 21));
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
        label_16->setText(QCoreApplication::translate("MainWindow", "Tipo de Contrato", nullptr));
        pushButton_Remover->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        pushButton_Alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        pushButton_Encontrar->setText(QCoreApplication::translate("MainWindow", "Procurar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Letra", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
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

        label->setText(QCoreApplication::translate("MainWindow", "Dados", nullptr));
        pushButton_Inserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Dep", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Titulacao", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Tipo", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Exercicio tabela hash docentes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
