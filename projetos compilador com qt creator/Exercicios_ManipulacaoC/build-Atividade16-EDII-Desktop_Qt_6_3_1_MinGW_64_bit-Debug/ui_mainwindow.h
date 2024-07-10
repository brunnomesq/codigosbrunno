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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_tamanho_grafo;
    QPushButton *pushButton_criar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_vertice1;
    QLabel *label_3;
    QLineEdit *lineEdit_vertice2;
    QLabel *label_4;
    QLineEdit *lineEdit_peso;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_inserir;
    QPushButton *pushButton_alterar;
    QPushButton *pushButton_excluir;
    QPushButton *pushButton_abrir_arquivo;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_vertice_caminho;
    QPushButton *pushButton_encontrar_caminho;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 620);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 131, 791, 441));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 450, 95));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_tamanho_grafo = new QLineEdit(layoutWidget);
        lineEdit_tamanho_grafo->setObjectName(QString::fromUtf8("lineEdit_tamanho_grafo"));

        horizontalLayout->addWidget(lineEdit_tamanho_grafo);

        pushButton_criar = new QPushButton(layoutWidget);
        pushButton_criar->setObjectName(QString::fromUtf8("pushButton_criar"));

        horizontalLayout->addWidget(pushButton_criar);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_vertice1 = new QLineEdit(layoutWidget);
        lineEdit_vertice1->setObjectName(QString::fromUtf8("lineEdit_vertice1"));

        horizontalLayout_2->addWidget(lineEdit_vertice1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_vertice2 = new QLineEdit(layoutWidget);
        lineEdit_vertice2->setObjectName(QString::fromUtf8("lineEdit_vertice2"));

        horizontalLayout_2->addWidget(lineEdit_vertice2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_peso = new QLineEdit(layoutWidget);
        lineEdit_peso->setObjectName(QString::fromUtf8("lineEdit_peso"));

        gridLayout->addWidget(lineEdit_peso, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_inserir = new QPushButton(layoutWidget);
        pushButton_inserir->setObjectName(QString::fromUtf8("pushButton_inserir"));

        horizontalLayout_3->addWidget(pushButton_inserir);

        pushButton_alterar = new QPushButton(layoutWidget);
        pushButton_alterar->setObjectName(QString::fromUtf8("pushButton_alterar"));

        horizontalLayout_3->addWidget(pushButton_alterar);

        pushButton_excluir = new QPushButton(layoutWidget);
        pushButton_excluir->setObjectName(QString::fromUtf8("pushButton_excluir"));

        horizontalLayout_3->addWidget(pushButton_excluir);


        gridLayout->addLayout(horizontalLayout_3, 2, 2, 1, 1);

        pushButton_abrir_arquivo = new QPushButton(centralwidget);
        pushButton_abrir_arquivo->setObjectName(QString::fromUtf8("pushButton_abrir_arquivo"));
        pushButton_abrir_arquivo->setGeometry(QRect(690, 40, 101, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 100, 441, 27));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_vertice_caminho = new QLineEdit(widget);
        lineEdit_vertice_caminho->setObjectName(QString::fromUtf8("lineEdit_vertice_caminho"));

        horizontalLayout_4->addWidget(lineEdit_vertice_caminho);

        pushButton_encontrar_caminho = new QPushButton(widget);
        pushButton_encontrar_caminho->setObjectName(QString::fromUtf8("pushButton_encontrar_caminho"));

        horizontalLayout_4->addWidget(pushButton_encontrar_caminho);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Atividade 16", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tamanho Grafo", nullptr));
        pushButton_criar->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vertice 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Vertice 2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Peso: ", nullptr));
        pushButton_inserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        pushButton_alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        pushButton_excluir->setText(QCoreApplication::translate("MainWindow", "Excluir", nullptr));
        pushButton_abrir_arquivo->setText(QCoreApplication::translate("MainWindow", "Abrir arquivo", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Encontrar caminho a partir de:", nullptr));
        pushButton_encontrar_caminho->setText(QCoreApplication::translate("MainWindow", "Encontrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
