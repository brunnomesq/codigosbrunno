#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
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

    ui->textEdit_Sai->setText(p.getSaida());
}


void MainWindow::on_pushButton_Abrir_clicked()
{
    try{
        QString arquivoEntradaNome = QDir::toNativeSeparators("C:/Users/brunn/Desktop/Exercicios_ManipulacaoC/TP2_Manipular/entrada.txt");
        QString arquivoSaidaNome = QDir::toNativeSeparators("C:/Users/brunn/Desktop/Exercicios_ManipulacaoC/TP2_Manipular/saida.txt");

        p.processFile(arquivoEntradaNome,arquivoSaidaNome);
        ui->textEdit_Ent->setText(p.getEntrada());
        ui->pushButton->setEnabled(true);
        }catch (QString &erro) {
            QMessageBox::information(this,"ARQUIVO NAO ENCONTRADO",erro);
        }
}

