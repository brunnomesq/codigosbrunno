#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <recursividade.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Enviar_clicked()
{
    int numero=ui->lineEdit_num->text().toInt();
    int potencia=ui->lineEdit_pot->text().toInt();
    brn::Recursividade x(numero,potencia);
    QString saida=x.mostrarNumeros();
    ui->textEdit_Res->setText(saida);
}

