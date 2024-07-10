#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QMessageBox>
#include <ordenar.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete o;
}


void MainWindow::on_pushButton_Tamanho_clicked()
{
    try{
    int tamanho=ui->lineEdit_Tamanho->text().toInt();

    this->o=new brn::Ordenar(tamanho);
    QString conjunto_esc="";
    for(int i=0;i<tamanho;i++){
       conjunto_esc+=QString::number(o->acessar(i))+" ";
    }
    ui->textEdit_Conjunto->setText(conjunto_esc);

    ui->pushButton_Ordenar->setEnabled(true);
    ui->label_COrd->setEnabled(true);
    ui->textEdit_Ordenado->setEnabled(true);
    ui->textEdit_Ordenado->clear();

    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}


void MainWindow::on_pushButton_Ordenar_clicked()
{
    QString num_esc=o->setOrden();
    ui->textEdit_Ordenado->setText(num_esc);
    ui->pushButton_Ordenar->setEnabled(false);
}

