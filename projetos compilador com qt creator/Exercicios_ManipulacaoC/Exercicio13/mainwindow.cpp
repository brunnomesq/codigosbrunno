#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0,50);
    ui->tableWidget->setColumnWidth(1,254);
    ui->tableWidget->setColumnWidth(2,254);
    ui->tableWidget->setColumnWidth(3,254);    
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_Pesquisar_clicked()
{
    try {

        nomeArquivo = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        if(nomeArquivo.isEmpty()){
           throw QString("Arquivo nao foi selecionado");
        }
        QFile arquivo(nomeArquivo);
        if (!arquivo.open(QIODevice::ReadOnly)) {
                    throw QString("Erro ao abrir o arquivo");
        }
        size=1001;
        collisions=3;

        arquivo.close();
        ui->lineEdit_Arquivo->setText(nomeArquivo);
        ui->textEdit->clear();
            arquivoN=new ed::Manipular(nomeArquivo,size,collisions);
            arquivoN->leituraDeDados();

            lista = arquivoN->getDadosProfessor();

            if (lista->getSize()<= 0) {
                throw QString("Nenhum dado encontrado no arquivo.");
            }
           // qDebug()<<totalProfessores;
           // qDebug()<<listaDeProfessores->getDados(0,0).getNome();
           update();

            // Oculta as linhas e colunas de grade que contam
            ui->tableWidget->verticalHeader()->setVisible(false);

    } catch (QString &erro) {
            QString mensagem = "<span style='color:#CCCCCC; font-family:Franklin Gothic Demi; font-size:12pt;'><b>" + erro + "</b></span>"; // Define a cor, a fonte e o tamanho
            QMessageBox messageBox;
            messageBox.setTextFormat(Qt::RichText); // Define o formato do texto como RichText (HTML)
            messageBox.critical(this, "Erro", mensagem);
    }
}

void MainWindow::update(){
    ui->tableWidget->setRowCount(0);
    int contador=0;
    for (int i = 0; i < lista->getSize(); i++) {
        if(lista->getKeySize(i)>0){
            QTableWidgetItem *itemPosicao = new QTableWidgetItem(QString::number(i));
            int linha=ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setRowHeight(contador,100);
            ui->tableWidget->setItem(contador, 0, itemPosicao);
            int tamanhoC=lista->getKeySize(i);
            for(int c=0; c<tamanhoC;c++){
                QTableWidgetItem *item = new QTableWidgetItem(lista->getDados(i,c).toString());
                ui->tableWidget->setItem(contador, c+1, item);
            }
            contador++;
        }

    }
}
void MainWindow::on_pushButton_Encontrar_clicked()
{
    try{
    if(size==0){
        throw QString("O arquivo ainda não foi aberto!");
    }
    QString texto2;
    texto2=ui->lineEdit_Mat->text();

    int posicao=lista->encontrarPos(texto2);//pode dar erro conferir depois
    int chave=lista->getPositionInKey();
    if (posicao==-1){
        throw QString("Posicao não encontrada!");
    }else if(posicao==-2){
        throw QString("Posicao não encontrada ou a Matricula não é a mesma do Nome.");
    }
    ui->textEdit->setText("<font color=\"orange\">MATRICULA ENCONTRADA</font>\n"+lista->getDados(posicao,chave).toString()+"\nPosicao na tabela: "+QString::number(posicao));
    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }

}

void MainWindow::on_pushButton_Remover_clicked()
{
    try{
        if(size==0){
            throw QString("O arquivo ainda não foi aberto!");
        }
    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1
    if(matricula==-1||matricula==0){
            throw QString("O campo da matricula não pode estar vazios!");
        }
    int posicao=matricula % lista->getSize();
    lista->remover(matricula);
    update();
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("<font color=\"orange\">MATRICULA </font>\n"+QString::number(matricula)+"<font color=\"orange\"> REMOVIDA NA POSICAO</font>\n"+QString::number(posicao));

    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }


}


void MainWindow::on_pushButton_Inserir_clicked()
{

    try{
        if(size==0){
            throw QString("O arquivo ainda não foi aberto!");
        }
    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1
    QString nome= ui->lineEdit_Nome->text();
    QString departamento=ui->comboBox_Dep->currentText();
    QString titulacao=ui->comboBox_Tit->currentText();
    QString tipo=ui->comboBox_Tip->currentText();
    if(matricula==-1){
            throw QString("O campo da matricula não pode estar vazio!");
        }

    lista->inserir(matricula,nome,departamento,titulacao,tipo);
    update();

    int posicao=matricula % lista->getSize();

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("<font color=\"orange\">MATRICULA </font>\n"+QString::number(matricula)+"<font color=\"orange\"> INSERIDA NA POSICAO</font>\n"+QString::number(posicao));


    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }

}

void MainWindow::on_pushButton_Alterar_clicked()
{
    try{
        if(size==0){
            throw QString("O arquivo ainda não foi aberto!");
        }
    int matricula=ui->lineEdit_Mat->text().toInt();
    QString nome= ui->lineEdit_Nome->text();
    QString departamento=ui->comboBox_Dep->currentText();
    QString titulacao=ui->comboBox_Tit->currentText();
    QString tipo=ui->comboBox_Tip->currentText();
    if(matricula==-1){
            throw QString("O campo da matricula não pode estar vazio!");
        }
    lista->alterar(matricula,nome,departamento,titulacao,tipo);
    update();

    int posicao=matricula % lista->getSize();
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("<font color=\"orange\">MATRICULA </font>\n"+QString::number(matricula)+"<font color=\"orange\"> ALTERADA NA POSICAO</font>\n"+QString::number(posicao));
    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}








