#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <pilha.h>
#include <QInputDialog>
#include <iostream>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      pi(nullptr)  //precisa inicializar o objeto

{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pi;    //ja que usou new no ponteiro tem que deletar
}
void MainWindow::on_pushButton_clicked()
{
    try{
    int tamanho=QInputDialog::getInt(this, "Tamanho", "Tamanho da pilha:");
    pi=new brn::Pilha(tamanho);  //tem que fazer desse jeito construtor no qt
    }catch(const QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}
int valor=0;
void MainWindow::on_button_empilhar_clicked()
{
    try{
    valor=(ui->lineEdit_Valor->text().toInt());
    pi->empilhar(valor);
    int* p=pi->getVet();
    int topo=pi->getTopo();

    QString num_esc="";
    for(int pos=0;pos<=topo;pos++){
            int num=0;
            num=*p;
            num_esc=QString::number(num)+" "+num_esc;
            p++;
        }
    ui->label_pilha->setText(num_esc);
    }catch(const QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}


void MainWindow::on_button_desimpilhar_clicked()
{
    try{
    pi->desempilhar();
    int* p=pi->getVet();
    int topo=pi->getTopo();

    QString num_esc="";
    for(int pos=0;pos<=topo;pos++){
            int num=0;
            num=*p;
            num_esc=QString::number(num)+" "+num_esc;
            p++;
        }
    ui->label_pilha->setText(num_esc);
    }catch(const QString &mensagem){
        QMessageBox::warning(this,"Erro",mensagem);
    }
}





