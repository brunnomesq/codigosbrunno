#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidgetDados->setColumnWidth(0,80);
    ui->tableWidgetDados->setColumnWidth(1,180);
    ui->tableWidgetDados->setColumnWidth(2,150);
    ui->tableWidgetDados->setColumnWidth(3,60);
    ui->tableWidgetDados->setColumnWidth(4,180);
    ui->tableWidgetDados->setColumnWidth(5,180);
    ui->tableWidgetDados->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButtonBuscarNomeArquivo_clicked()
{
    try {
        // nomeDoArquivoNoDisco - atributo da classe MainWindow
        //Buscando o arquivo no disco
        nomeDoArquivoNoDisco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        if(nomeDoArquivoNoDisco.isEmpty()) throw QString("Arquivo nao foi selecionado");
        ui->lineEditNomeDoArquivo->setText(nomeDoArquivoNoDisco);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}


void MainWindow::on_pushButtonMostrarDados_clicked()
{
    try {
        QString cbox=ui->comboBox->currentText();
        ejm::ManipularArquivo teste(nomeDoArquivoNoDisco);
        if(cbox=="Inserir Ordenado Crescente Pelo Codigo"){
            teste.buscarDadosNoArquivo(0);
        }else if(cbox=="Inserir Ordenado Decrescente Pelo Nome"){
            teste.buscarDadosNoArquivo(1);
        }
            listaDePilotos = teste.getColecaoDePilotosF1();
            int quantidade = listaDePilotos.getQuantidadeElementos();
            QString saida = "Quantidade de Dados: ";
            saida = QString::number(quantidade)+" elementos." ;
            QMessageBox::information(this,"DADOS",saida);

            ui->tableWidgetDados->setRowCount(0);
            for(int i=0; i<quantidade; i++){
                QTableWidgetItem *itemCodigo= new QTableWidgetItem(QString::number(listaDePilotos.acessarPosicao(i).getCodigo()));
                QTableWidgetItem *itemNome= new QTableWidgetItem(listaDePilotos.acessarPosicao(i).getNome());
                QTableWidgetItem *itemPais= new QTableWidgetItem(listaDePilotos.acessarPosicao(i).getPais());
                QTableWidgetItem *itemIdade= new QTableWidgetItem(QString::number(listaDePilotos.acessarPosicao(i).getIdade()));
                QTableWidgetItem *itemEquipe= new QTableWidgetItem(listaDePilotos.acessarPosicao(i).getEquipe());
                QTableWidgetItem *itemMotor= new QTableWidgetItem(listaDePilotos.acessarPosicao(i).getMotor());
                int linha=ui->tableWidgetDados->rowCount();
                ui->tableWidgetDados->insertRow(linha);
                ui->tableWidgetDados->setItem(linha,0,itemCodigo);
                ui->tableWidgetDados->setItem(linha,1,itemNome);
                ui->tableWidgetDados->setItem(linha,2,itemPais);
                ui->tableWidgetDados->setItem(linha,3,itemIdade);
                ui->tableWidgetDados->setItem(linha,4,itemEquipe);
                ui->tableWidgetDados->setItem(linha,5,itemMotor);
            }
        //ui->textEdit_Dados->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}

