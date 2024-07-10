#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <recursividade.h>
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


void MainWindow::on_pushButton_Tamanho_clicked()
{
    try{
    int tamanho=ui->lineEdit_Tamanho->text().toInt();
    this->x=new brn::Recursividade(tamanho);
    QString conjunto_esc="";
    for(int i=0;i<tamanho;i++){
       conjunto_esc+=QString::number(x->acessar(i))+" ";
    }
    ui->textEdit_Conjunto->setText(conjunto_esc);
    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}

void MainWindow::on_textEdit_Conjunto_textChanged()
{
    QString saida=x->mostrarNumeros();
    ui->textEdit_Menor->setText(saida);
}

