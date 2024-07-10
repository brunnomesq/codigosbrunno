#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnWidth(0,110);
    ui->tableWidget->setColumnWidth(1,270);
    ui->tableWidget->setColumnWidth(2,50);
    ui->tableWidget->setColumnWidth(3,160);
    ui->tableWidget->setColumnWidth(4,100);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->lineEdit_BS->setPlaceholderText("Nome Completo");
    ui->comboBox_BS->setCurrentIndex(0);
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
        if(nomeDoArquivoNoDisco.isEmpty()){
           throw QString("Arquivo nao foi selecionado");
        }
        QFile arquivo(nomeDoArquivoNoDisco);
        if (!arquivo.open(QIODevice::ReadOnly)) {
                    throw QString("Erro ao abrir o arquivo");
        }
        QTextStream stream(&arquivo);
        tamanho = 0;
        while (!stream.atEnd()) {
              stream.readLine(); // Lê uma linha do arquivo
              tamanho++;
        }
        tamanho=tamanho;
                // Fechando o arquivo
        arquivo.close();
        ui->lineEditNomeDoArquivo->setText(nomeDoArquivoNoDisco);
        ui->comboBox_BS->setEnabled(false);
        ui->lineEdit_BS->setEnabled(false);
        ui->pushButton_EncontrarBS->setEnabled(false);

        ui->lineEdit_BS->clear();

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}


void MainWindow::on_pushButtonMostrarDados_clicked(){
    try {
            QString cbox=ui->comboBox->currentText();
            teste=new brn::ManipularArquivo(nomeDoArquivoNoDisco,tamanho);
            //teste->pegarTamanho(tamanho);
            teste->buscarDadosNoArquivo();

            listaDeProfessores = teste->getColecaoDeProfessor();


            int totalProfessores = listaDeProfessores->getTamanho();
            if (totalProfessores <= 0) {
                throw QString("Nenhum dado encontrado no arquivo.");
            }

            if(cbox=="Matricula"){
                listaDeProfessores->selection_sort(0,0,0);
            }else if (cbox=="Nome"){
                listaDeProfessores->selection_sort(1,0,0);
            }else if(cbox=="Departamento-Nome"){
                listaDeProfessores->selection_sort(2,1,0);
            }else if(cbox=="Titulacao-Nome"){
                listaDeProfessores->selection_sort(3,1,0);
            }else if(cbox=="Tipo de contrato-Nome"){
                listaDeProfessores->selection_sort(4,1,0);
            }else if(cbox=="Departamento-Titulacao-Nome"){
                listaDeProfessores->selection_sort(2,3,1);
            }else if(cbox=="Departamento-Tipo de contrato-Nome"){
                listaDeProfessores->selection_sort(2,4,1);
            }
            ui->tableWidget->setRowCount(0);
            for (int i = 0; i < totalProfessores; i++) {
               QTableWidgetItem *itemMatricula = new QTableWidgetItem(QString::number(listaDeProfessores->acessar(i).getMatricula()));
                QTableWidgetItem *itemNome = new QTableWidgetItem(listaDeProfessores->acessar(i).getNome());
                QTableWidgetItem *itemDepartamento = new QTableWidgetItem(listaDeProfessores->acessar(i).getDepartamento());
                QTableWidgetItem *itemTitulacao = new QTableWidgetItem(listaDeProfessores->acessar(i).getTitulacao());
                QTableWidgetItem *itemTipoDeContrato = new QTableWidgetItem(listaDeProfessores->acessar(i).getTipo_de_contrato());
                int linha=ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(linha);
                ui->tableWidget->setItem(i, 0, itemMatricula);
                ui->tableWidget->setItem(i, 1, itemNome);
                ui->tableWidget->setItem(i, 2, itemDepartamento);
                ui->tableWidget->setItem(i, 3, itemTitulacao);
                ui->tableWidget->setItem(i, 4, itemTipoDeContrato);
            }
            ui->comboBox_BS->setEnabled(true);
            ui->lineEdit_BS->setEnabled(true);
            ui->pushButton_EncontrarBS->setEnabled(true);
        } catch (QString &erro) {
            QMessageBox::critical(this, "Erro", erro);
        }
}


void MainWindow::on_pushButton_EncontrarBS_clicked()
{
    QString texto=ui->lineEdit_BS->text();
    QString opcao=ui->comboBox_BS->currentText();
    int posicao=listaDeProfessores->toString(opcao,texto);

    if(posicao!=-1){

        ui->comboBox_BS->setEnabled(true);
        ui->lineEdit_BS->setEnabled(true);
        ui->pushButton_EncontrarBS->setEnabled(true);
        texto="O dado indicado existe e está na posição: "+QString::number(posicao)+" como vetor;"+
               "\nNa posicao "+QString::number(posicao+1)+" da tabela"+
            "\nMatricula: "+QString::number(listaDeProfessores->acessar(posicao).getMatricula())+
            "\nNome: "+listaDeProfessores->acessar(posicao).getNome()+
            "\nDepartamento: "+listaDeProfessores->acessar(posicao).getDepartamento()+
            "\nTitulação: "+listaDeProfessores->acessar(posicao).getTitulacao()+
            "\nTipo De Contrato: "+listaDeProfessores->acessar(posicao).getTipo_de_contrato();
        QTableWidgetItem *item = ui->tableWidget->item(posicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
                if (item) {
                    ui->tableWidget->scrollToItem(item);

                    QColor corAmarelaSuave(255, 255, 153); // RGB: 255, 255, 153
                    for (int coluna = 0; coluna < ui->tableWidget->columnCount(); ++coluna) {
                         ui->tableWidget->item(posicao, coluna)->setBackground(corAmarelaSuave);
                    }
                }
    }else{
        texto="Posicao não encontrada!";
    }
    ui->textEdit_ResulBS->setText(texto);
}


void MainWindow::on_comboBox_BS_currentTextChanged()
{
    ui->lineEdit_BS->clear();
    ui->textEdit_ResulBS->clear();
    QString opcao=ui->comboBox_BS->currentText();
        if(opcao=="Busca Sequencial-Nome"||opcao=="Busca Binaria-Nome"){
            ui->lineEdit_BS->setPlaceholderText("Nome Completo");
        }else{
            ui->lineEdit_BS->setPlaceholderText("Matricula Completa");
        }
}

