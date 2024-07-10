#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButtonBuscarNomeArquivo_clicked()
{
    try {
        nomeDoArquivoNoDisco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.txt)");
        if(nomeDoArquivoNoDisco.isEmpty()) throw QString("Arquivo nao foi selecionado");
        ui->lineEditNomeDoArquivo->setText(nomeDoArquivoNoDisco);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}


void MainWindow::on_pushButtonMostrarDados_clicked()
{
    try {
        les::ManipularArquivo Arquivo(nomeDoArquivoNoDisco);
        Arquivo.inserirPalavrasArvore();
        Arvore = Arquivo.getArvoreDePalavras();
        ui->textEdit->setText(Arvore->imprimir());

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}

