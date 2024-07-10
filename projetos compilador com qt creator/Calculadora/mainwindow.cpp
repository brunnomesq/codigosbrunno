#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculadora.h"
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

void MainWindow::on_pushButton_Div_clicked()
{
    Calculadora div;
    double n1 = (ui->lineEdit_1->text().toDouble());
    double n2 = (ui->lineEdit_2->text().toDouble());
    div.setDivi(n1,n2);
    double resultado=div.getResultado();
    QString resultadoEscrito=QString::number(resultado);
    ui->label_Res->setText(resultadoEscrito);
    ui->label_sinal->setText("    /");
}


void MainWindow::on_pushButton_Mul_clicked()
{
    Calculadora mul;
    double n1 = (ui->lineEdit_1->text().toDouble());
    double n2 = (ui->lineEdit_2->text().toDouble());
    mul.setMult(n1,n2);
    double resultado=mul.getResultado();
    QString resultadoEscrito=QString::number(resultado);
    ui->label_Res->setText(resultadoEscrito);
    ui->label_sinal->setText("    x");
}

void MainWindow::on_pushButton_Sub_clicked()
{
    Calculadora sub;
    double n1 = (ui->lineEdit_1->text().toDouble());
    double n2 = (ui->lineEdit_2->text().toDouble());
    sub.setSubt(n1,n2);
    double resultado=sub.getResultado();
    QString resultadoEscrito=QString::number(resultado);
    ui->label_Res->setText(resultadoEscrito);
    ui->label_sinal->setText("    -");
}


void MainWindow::on_pushButton_Som_clicked()
{
    Calculadora som;
    double n1 = (ui->lineEdit_1->text().toDouble());
    double n2 = (ui->lineEdit_2->text().toDouble());
    som.setSoma(n1,n2);
    double resultado=som.getResultado();
    QString resultadoEscrito=QString::number(resultado);
    ui->label_Res->setText(resultadoEscrito);
    ui->label_sinal->setText("    +");

}


void MainWindow::on_pushButton_Elev_clicked()
{
    Calculadora ele;
    double n1 = (ui->lineEdit_1->text().toDouble());
    double n2 = (ui->lineEdit_2->text().toDouble());
    ele.setElev(n1,n2);
    double resultado=ele.getResultado();
    QString resultadoEscrito=QString::number(resultado);
    ui->label_Res->setText(resultadoEscrito);
    ui->label_sinal->setText("    ^");
}

