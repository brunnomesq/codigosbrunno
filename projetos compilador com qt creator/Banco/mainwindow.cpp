#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "banco.h"
#include <QMessageBox>
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

Banco v;
void MainWindow::on_pushButton_Dep_clicked()
{
    double valor= (ui->lineEdit_Dep->text().toDouble());
    //isso de qstring valor é pros extratos
    QString valorQ="+R$"+(ui->lineEdit_Dep->text());
    v.setExtrato(valorQ);

    v.setDeposito(valor);
    double valorR=v.getResultado();
    QString resultadoEscrito=QString::number(valorR);
    ui->label_Valor->setText(resultadoEscrito);
    ui->lineEdit_Dep->clear();
}


void MainWindow::on_pushButton_Saq_clicked()
{
    //esse valor antes é pra ver quanto tem de saldo antes do saque
    double valorAntes=v.getResultado();
    double valor= (ui->lineEdit_Saq->text().toDouble());
    if(valor>valorAntes){
        QMessageBox::critical(this,"ERRO","O valor que deseja sacar é maior que a quantia disponivel!");
        valor=0;
        ui->lineEdit_Saq->setText("0");
    }
    //isso de qstring valor é pros extratos
    QString valorQ="-R$"+(ui->lineEdit_Saq->text());
    v.setExtrato(valorQ);


    v.setSaque(valor);
    double valorR=v.getResultado();

    QString resultadoEscrito=QString::number(valorR);
    ui->label_Valor->setText(resultadoEscrito);
    ui->lineEdit_Saq->clear();
}


void MainWindow::on_pushButton_clicked()
{
    QString extra=v.getExtrato();
    ui->label_Ext->setText(extra);
}

