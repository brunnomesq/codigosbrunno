#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include "adivinhe.h"
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
//int MainWindow::rollDice()
//{
    //isso aqui é se eu quisesse fazer por exemplo uma funcao sem precisar clicar em algo
    //return QRandomGenerator::global()->bounded(1, 7);
//}
Adivinhe c;
void MainWindow::on_pushButton_sortear_clicked()
{
    //forma melhor de random
    int tamanho=QRandomGenerator::global()->bounded(100, 1000);
    int numero=QRandomGenerator::global()->bounded(1, tamanho);
    c.setNumero(numero);
    QString dica=QString::number(tamanho);
    ui->label_dica->setText("Vai até o numero "+dica);

}


void MainWindow::on_pushButton_Adivinha_clicked()
{
    int numero=c.getNumero();
    bool isNumeroValido;
    QString numero_Ad=ui->lineEdit->text();
    int numero_adivinhado=numero_Ad.toInt(&isNumeroValido);
    if(numero_Ad.isEmpty()){
         QMessageBox::critical(this,"ERRO","O campo nao pode ficar vazio!");
     }else if(!isNumeroValido){
        QMessageBox::critical(this,"ERRO","O campo deve conter somente numeros!");
    }else{
        if(numero==numero_adivinhado){
            QMessageBox::information(this, "Parabéns", "Você acertou!");
            c.setPontuacao(1);
            QString ponto=QString::number(c.getPontuacao());
            ui->label_ponto->setText(ponto);
            c.setNumero(10210313);
        }
        else if(numero==10210313||numero==0){
            ui->label_MaOuMe->setText("Voce tem que sortear um numero!");
        }
        else if(numero_adivinhado<numero){
            ui->label_MaOuMe->setText("O numero tem que ser maior!");
        }
        else if(numero_adivinhado>numero){
            ui->label_MaOuMe->setText("O numero tem que ser menor!");
        }
    }
}

