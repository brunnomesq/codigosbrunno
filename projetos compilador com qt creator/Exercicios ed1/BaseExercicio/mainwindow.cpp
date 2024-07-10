#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <base.h>
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
//O QUE FAZER
// restricao pra colocar numero (maior que 0 e nao pode ser flaot nem letra)
//escolher a base 2 divide por 2 e pega o resto (vai fazer ate o numero virar 0)
//a resposta é sempre na ordem inversa
//o primeiro numero do resto insere na pilha, o segundo na pilha e etc
//basta usar um metodo na divisao de 2, 8, 16




void MainWindow::on_pushButton_Executar_clicked()
{
    try{

    int valor=(ui->lineEdit_Num->text().toInt());
    this->b=new brn::Base(valor);

    int bas= ui->comboBox->currentText().toInt();
    b->setBase(bas);

    QString num_esc="";
    num_esc=b->baseAlterar();

    ui->textEdit_Resultado->setText(QString::number(valor)+ " na base 10\n"+ num_esc+" na base "+QString::number(bas));

    }catch(QString mensagem){

        QMessageBox::warning(this, "Erro", mensagem);//usei um qmessagebox para aparecer no codigo
        ui->textEdit_Resultado->clear();
    }
}




