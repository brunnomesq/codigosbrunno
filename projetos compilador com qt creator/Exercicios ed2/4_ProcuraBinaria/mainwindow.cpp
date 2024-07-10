#include "mainwindow.h"
#include "ui_mainwindow.h"
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
        o->selectionSort();

        QString vet_esc=o->toString();
        ui->textEdit_Conjunto->setText(vet_esc);

        QString vet_esc2=o->toStringSS();
        ui->textEdit_Ordenado->setText(vet_esc2);

        ui->textEdit_Buscar->setEnabled(true);
        ui->lineEdit_Valor->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->lineEdit_Valor->clear();
        ui->textEdit_Buscar->clear();

        ui->textEdit_Buscar_Bin->setEnabled(true);
        ui->lineEdit_Valor_2->setEnabled(true);
        ui->pushButton_Buscar_2->setEnabled(true);
        ui->lineEdit_Valor_2->clear();
        ui->textEdit_Buscar_Bin->clear();

    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}

void MainWindow::on_pushButton_clicked()
{
    int valor=ui->lineEdit_Valor->text().toInt();
    int posicao=o->buscaSequencialSS(valor);
    QString pos_esc="";
    if(posicao!=-1){
        pos_esc="Esta na posicao "+QString::number(posicao);
    }else{
        pos_esc="Valor nao encontrado";
    }
    ui->textEdit_Buscar->setText(pos_esc);
}


void MainWindow::on_pushButton_Buscar_2_clicked()
{
    int valor=ui->lineEdit_Valor_2->text().toInt();
    int posicao=o->buscaBinaria(valor);
    QString pos_esc="";
    if(posicao!=-1){
        pos_esc="Esta na posicao "+QString::number(posicao);
    }else{
        pos_esc="Valor nao encontrado";
    }
    ui->textEdit_Buscar_Bin->setText(pos_esc);
}

