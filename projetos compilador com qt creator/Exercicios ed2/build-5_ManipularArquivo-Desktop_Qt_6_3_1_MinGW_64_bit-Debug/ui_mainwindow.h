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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *pushButtonBuscarNomeArquivo;
    QPushButton *pushButtonMostrarDados;
    QTableWidget *tableWidget;
    QLineEdit *lineEditNomeDoArquivo;
    QComboBox *comboBox_BS;
    QLineEdit *lineEdit_BS;
    QPushButton *pushButton_EncontrarBS;
    QTextEdit *textEdit_ResulBS;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1103, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 80, 101, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(830, 30, 111, 121));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../../3 SEMESTRE/ED 1 (3 SEMESTRE)/Downloads/WhatsApp Image 2023-09-23 at 17.26.09.jpeg")));
        label_5->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 671, 91));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 101, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(220, 110, 191, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 211, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        label_3->setFont(font);
        pushButtonBuscarNomeArquivo = new QPushButton(centralwidget);
        pushButtonBuscarNomeArquivo->setObjectName(QString::fromUtf8("pushButtonBuscarNomeArquivo"));
        pushButtonBuscarNomeArquivo->setGeometry(QRect(520, 80, 101, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(false);
        pushButtonBuscarNomeArquivo->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../3 SEMESTRE/ED 1 (3 SEMESTRE)/Downloads/pesquisa.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBuscarNomeArquivo->setIcon(icon);
        pushButtonBuscarNomeArquivo->setCheckable(false);
        pushButtonMostrarDados = new QPushButton(centralwidget);
        pushButtonMostrarDados->setObjectName(QString::fromUtf8("pushButtonMostrarDados"));
        pushButtonMostrarDados->setGeometry(QRect(540, 120, 191, 45));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setUnderline(false);
        pushButtonMostrarDados->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../3 SEMESTRE/ED 1 (3 SEMESTRE)/Downloads/inserir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMostrarDados->setIcon(icon1);
        pushButtonMostrarDados->setIconSize(QSize(30, 30));
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
        tableWidget->setGeometry(QRect(30, 170, 701, 381));
        lineEditNomeDoArquivo = new QLineEdit(centralwidget);
        lineEditNomeDoArquivo->setObjectName(QString::fromUtf8("lineEditNomeDoArquivo"));
        lineEditNomeDoArquivo->setGeometry(QRect(110, 80, 401, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font3.setPointSize(11);
        font3.setBold(false);
        lineEditNomeDoArquivo->setFont(font3);
        comboBox_BS = new QComboBox(centralwidget);
        comboBox_BS->addItem(QString());
        comboBox_BS->addItem(QString());
        comboBox_BS->addItem(QString());
        comboBox_BS->addItem(QString());
        comboBox_BS->setObjectName(QString::fromUtf8("comboBox_BS"));
        comboBox_BS->setEnabled(false);
        comboBox_BS->setGeometry(QRect(780, 170, 301, 24));
        lineEdit_BS = new QLineEdit(centralwidget);
        lineEdit_BS->setObjectName(QString::fromUtf8("lineEdit_BS"));
        lineEdit_BS->setEnabled(false);
        lineEdit_BS->setGeometry(QRect(780, 220, 301, 24));
        pushButton_EncontrarBS = new QPushButton(centralwidget);
        pushButton_EncontrarBS->setObjectName(QString::fromUtf8("pushButton_EncontrarBS"));
        pushButton_EncontrarBS->setEnabled(false);
        pushButton_EncontrarBS->setGeometry(QRect(780, 260, 301, 41));
        textEdit_ResulBS = new QTextEdit(centralwidget);
        textEdit_ResulBS->setObjectName(QString::fromUtf8("textEdit_ResulBS"));
        textEdit_ResulBS->setGeometry(QRect(780, 330, 301, 91));
        textEdit_ResulBS->setReadOnly(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(780, 310, 61, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1103, 21));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome do arquivo:", nullptr));
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; font-style:italic; text-decoration: underline; color:#0433ff;\">Ex 5: Manipular Arquivo PUC</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Dados dos pilotos", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Nome", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Departamento-Nome", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Titulacao-Nome", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Tipo de contrato-Nome", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Departamento-Titulacao-Nome", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Departamento-Tipo de contrato-Nome", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Forma de Ordena\303\247\303\243o: ", nullptr));
        pushButtonBuscarNomeArquivo->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        pushButtonMostrarDados->setText(QCoreApplication::translate("MainWindow", "MOSTRAR DADOS", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Dep", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Tipo de Contrato", nullptr));
        comboBox_BS->setItemText(0, QCoreApplication::translate("MainWindow", "Busca Sequencial-Nome", nullptr));
        comboBox_BS->setItemText(1, QCoreApplication::translate("MainWindow", "Busca Sequencial-Matricula", nullptr));
        comboBox_BS->setItemText(2, QCoreApplication::translate("MainWindow", "Busca Binaria-Nome", nullptr));
        comboBox_BS->setItemText(3, QCoreApplication::translate("MainWindow", "Busca Binaria-Matricula", nullptr));

        pushButton_EncontrarBS->setText(QCoreApplication::translate("MainWindow", "Encontrar na Grid", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Resultado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
