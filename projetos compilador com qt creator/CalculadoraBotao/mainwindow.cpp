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
Calculadora c;

void MainWindow::on_pushButton_0_clicked()
{
    c.setAgrupNumber("0");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_1_clicked()
{
    c.setAgrupNumber("1");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_2_clicked()
{
    c.setAgrupNumber("2");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_3_clicked()
{
    c.setAgrupNumber("3");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_4_clicked()
{
    c.setAgrupNumber("4");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_5_clicked()
{
    c.setAgrupNumber("5");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_6_clicked()
{
    c.setAgrupNumber("6");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_7_clicked()
{
    c.setAgrupNumber("7");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_8_clicked()
{
    c.setAgrupNumber("8");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}
void MainWindow::on_pushButton_9_clicked()
{
    c.setAgrupNumber("9");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}

void MainWindow::on_pushButton_Dec_clicked()
{
    c.setAgrupNumber(".");
    QString NumeroAgrup=c.getAgrupNumber();
    ui->label_Res->setText(NumeroAgrup);
}

void MainWindow::on_pushButton_Del_clicked()
{
    QString NumeroAgrup=c.getAgrupNumber();
    int Numero=NumeroAgrup.toInt();
    c.setDelete(Numero);
    int NumeroDeletado=c.getDelete();
    QString NewNumeroAgrup=QString::number(NumeroDeletado);
    ui->label_Res->setText(NewNumeroAgrup);
}

void MainWindow::on_pushButton_Som_clicked()
{
    QString sinal="+";
    c.setSinal(sinal);

    double Captura=ui->label_Res->text().toDouble();
    c.setAgrupSinal(Captura);
    ui->label_Res2->setText(c.getAgrupSinal()+"+");

    double num=ui->label_Res->text().toDouble();
    c.setPSom(num);
    c.setCE("0");

    ui->label_Res->setText(c.getAgrupSinal());
    QString sinalProIgual="+";
    c.setIgual(sinalProIgual);
}
void MainWindow::on_pushButton_Sub_clicked()
{
    QString sinal="-";
    c.setSinal(sinal);

    double Captura=ui->label_Res->text().toDouble();
    c.setAgrupSinal(Captura);
    ui->label_Res2->setText(c.getAgrupSinal()+"-");

    double num=ui->label_Res->text().toDouble();
    c.setPSom(num);
    c.setCE("0");

    ui->label_Res->setText(c.getAgrupSinal());
    QString sinalProIgual="-";
    c.setIgual(sinalProIgual);
}
void MainWindow::on_pushButton_Mul_clicked()
{
    QString sinal;
    int ligador=c.getLigador();
    //esse ligador é pra multiplicacao nao multiplicar por 0 quando comecar, e sim por 1, mas antes eu mudei pra um sinal difrente
    if(ligador==0){
    sinal="x*";
    c.setSinal(sinal);
}else{
        sinal="x";
        c.setSinal(sinal);
    }
    double Captura=ui->label_Res->text().toDouble();
    c.setAgrupSinal(Captura);
    ui->label_Res2->setText(c.getAgrupSinal()+"x");

    double num=ui->label_Res->text().toDouble();
    c.setPSom(num);
    c.setCE("0");

    ui->label_Res->setText(c.getAgrupSinal());
    c.setLigador(1);
    QString sinalProIgual="x";
    c.setIgual(sinalProIgual);
}
void MainWindow::on_pushButton_Div_clicked()
{
    QString sinal;
    int ligador=c.getLigador();
    //esse ligador é pra divisao nao dividir por 0 quando comecar, e sim por 1, mas antes eu mudei pra um sinal difrente
    if(ligador==0){
    sinal="/*";
    c.setSinal(sinal);
    }else{
        sinal="/";
        c.setSinal(sinal);
    }
    double Captura=ui->label_Res->text().toDouble();
    c.setAgrupSinal(Captura);
    ui->label_Res2->setText(c.getAgrupSinal()+"/");

    double num=ui->label_Res->text().toDouble();
    c.setPSom(num);
    c.setCE("0");

    ui->label_Res->setText(c.getAgrupSinal());
    c.setLigador(1);
    QString sinalProIgual="/";
    c.setIgual(sinalProIgual);
}

void MainWindow::on_pushButton_Igu_clicked()
{
    double vnum;
    QString sinalIgu=c.getSinalIgual();
    double pnum=c.getPSom();
    double snum=ui->label_Res->text().toDouble();
    if(sinalIgu=="+"){
        vnum=pnum+snum;
    }
    if(sinalIgu=="-"){
        vnum=pnum-snum;
    }
    if(sinalIgu=="x"){
        vnum=pnum*snum;
    }
    if(sinalIgu=="/"){
        vnum=pnum/snum;
    }

    QString p1=QString::number(pnum);
    QString p2=QString::number(snum);
    ui->label_Res2->setText(p1+" "+sinalIgu+" "+p2+" = ");
    QString variavel= QString::number(vnum);
    ui->label_Res->setText(variavel);

}

void MainWindow::on_pushButton_CE_clicked()
{
    ui->label_Res->setText("0");
    c.setCE("0");
}

void MainWindow::on_pushButton_C_clicked()
{
    ui->label_Res->setText("0");
    c.setCE("0");
    ui->label_Res2->setText("");
    c.setLigador(0);
    c.SetC("0");
}




