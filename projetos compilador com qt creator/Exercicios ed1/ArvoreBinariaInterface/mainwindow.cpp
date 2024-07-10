#include "mainwindow.h"
#include "ui_mainwindow.h"
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


void MainWindow::on_pushButton_Ins_clicked()
{
    try{
        int num=ui->lineEdit_Ins->text().toInt();
        teste.inserir(num);
        teste.imprimir();
        ui->textEdit->setText(teste.getSaida());
        teste.setSaida("");
    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}


void MainWindow::on_pushButton_Rem_clicked()
{
    try{
        int num=ui->lineEdit_Rem->text().toInt();
        teste.remover(num);
        teste.imprimir();
        ui->textEdit->setText(teste.getSaida());
        teste.setSaida("");
    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}

