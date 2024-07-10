#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <excecao.h>
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


void MainWindow::on_pushButton_clicked()
{
    Excecao el(-2);
    QString msg;
    try{
        el.setValor(3);
        msg="Valor: "+QString::number(el.getValor());
        ui->textEdit->setText(msg);
    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
    msg=msg+" Terminou tudo normal";
    ui->textEdit->setText(msg);

}

