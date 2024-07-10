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
    QString vet_esc=o->toString();
    ui->textEdit_Conjunto->setText(vet_esc);

    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}



