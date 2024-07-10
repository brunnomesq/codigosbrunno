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
    delete graph;
}

void MainWindow::change(){
    graphItem->updatePositions();
    QGraphicsScene *scene = new QGraphicsScene();
    scene->addItem(graphItem);
    ui->graphicsView->setScene(scene) ;
}
void MainWindow::buscarDados(QString nomeDoArquivo){
    try {
            // criando um arquivo de entrada
            std::ifstream arquivo;
            // abrindo um arquivo de entrada
            arquivo.open(nomeDoArquivo.toStdString().c_str());
            // verificando erro de abertura do arquivo de entrada
            if (!arquivo.is_open()) throw QString("ERRO Arquivo nao pode ser aberto");
            // Lendo dados do arquivo texto
            std::string linha;
            // Lendo a primeira linha para obter o número de vértices
            getline(arquivo, linha);
            QString texto = QString::fromStdString(linha);
            QStringList strList = texto.split(' ');
            if (strList.size() != 3 || strList[0] != "Vertices" || strList[1] != "-") {
                throw QString("Formato da primeira linha inválido");
            }
            int numVertices = strList[2].toInt();
            int tam=numVertices;
           // ui->lineEditSize->setText(QString::number(tam));

            graph = new Grafico(tam);
            graphItem = new GraphPaint(graph,ui->graphicsView->size());
            change();
            ui->lineEditPosition1->setFocus();

            /*ui->tableWidget->setRowCount(tam);
            ui->tableWidget->setColumnCount(tam);
            QStringList rowHeaders;
            QStringList columnHeaders;
                for (int i = 0; i < tam; ++i) {
                    rowHeaders << QString::number(i);
                    }
                for (int j = 0; j < tam; ++j) {
                    columnHeaders << QString::number(j);
                    }
            ui->tableWidget->setVerticalHeaderLabels(rowHeaders);
            ui->tableWidget->setHorizontalHeaderLabels(columnHeaders);
                for (int col = 0; col < tam; ++col) {
                        ui->tableWidget->setColumnWidth(col, 20);
                    }*/


            // Lendo as demais linhas para obter as arestas e seus pesos
            while (getline(arquivo, linha)) {
                texto = QString::fromStdString(linha);
                QStringList arestas = texto.split(';');
                for (const QString& aresta : arestas) {
                    QString arestaModificavel = aresta;
                    QStringList valores = arestaModificavel.remove('(').remove(')').split(',');
                    if (valores.size() != 3) {
                        throw QString("Formato de aresta inválido");
                    }
                    int vertice1 = valores[0].toInt()-1;
                    int vertice2 = valores[1].toInt()-1;
                    int peso = valores[2].toInt();

                    graph->inserir(vertice1,vertice2,peso);
                }
            }

            arquivo.close();
        } catch (QString &erro) {
            throw erro;
        }
}
void MainWindow::alterarText(){
    QString texto=graphItem->getInfoCaminho();

    ui->textEdit->setText(texto);
}
void MainWindow::on_pushButtonCreate_clicked()
{
    try{
        //bool ok;
        //int tam = ui->lineEditSize->text().toInt(&ok);
        QString nomeDoArquivoNoDisco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        if(nomeDoArquivoNoDisco.isEmpty()){
           throw QString("Arquivo nao foi selecionado");
        }
        QFile arquivo(nomeDoArquivoNoDisco);
        if (!arquivo.open(QIODevice::ReadOnly)) {
                    throw QString("Erro ao abrir o arquivo");
        }
        arquivo.close();
        //if(!ok) throw QString("entrada invalida");
        buscarDados(nomeDoArquivoNoDisco);
        int ponto;
        if(ui->lineEdit_Partida->text()==""){
            ponto=0;
        }else{
            ponto=ui->lineEdit_Partida->text().toInt()-1;
        }
        graphItem->calcularCaminho(ponto);
        alterarText();

    }catch(QString err){
       QMessageBox::warning(this,"ERROR",err);
    }
}
/*
void MainWindow::matrizchanged(int r, int c){
    QString number = QString::number(graph->acessar(r,c));
    QString number2=QString::number(graph->acessar(c,r));
    if(number=="-1"){
        number="";
    }
    if(number2=="-1"){
        number2="";
    }
    QTableWidgetItem* newItem = new QTableWidgetItem(number);
    QTableWidgetItem* newItem2 = new QTableWidgetItem(number2);
    ui->tableWidget->setItem(r, c, newItem);
    ui->tableWidget->setItem(c, r, newItem2);
}*/
void MainWindow::on_pushButtonInsert_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1)-1;
    int p2 = ui->lineEditPosition2->text().toInt(&ok2)-1;
    int peso = ui->lineEditWeight->text().toInt();
    if(!ok1 || !ok2) throw QString("entrada invalida");
    graph->inserir(p1,p2,peso);
    change();
    //matrizchanged(p1,p2);
    int ponto;
    if(ui->lineEdit_Partida->text()==""){
        ponto=1;
    }else{
        ponto=ui->lineEdit_Partida->text().toInt();
    }
    graphItem->calcularCaminho(ponto);
    alterarText();
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}
void MainWindow::on_pushButtonUpdate_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1)-1;
    int p2 = ui->lineEditPosition2->text().toInt(&ok2)-1;
    int peso = ui->lineEditWeight->text().toInt();
    if(!ok1 || !ok2) throw QString("entrada invalida");
    graph->alterar(p1,p2,peso);
    change();
    //matrizchanged(p1,p2);
    int ponto;
    if(ui->lineEdit_Partida->text()==""){
        ponto=1;
    }else{
        ponto=ui->lineEdit_Partida->text().toInt();
    }
    graphItem->calcularCaminho(ponto);
    alterarText();
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_pushButtonRemove_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1)-1;
    int p2 = ui->lineEditPosition2->text().toInt(&ok2)-1;
    if(!ok1 || !ok2) throw QString("entrada invalida");
    graph->remover(p1,p2);
    change();
    //matrizchanged(p1,p2);
    int ponto;
    if(ui->lineEdit_Partida->text()==""){
        ponto=1;
    }else{
        ponto=ui->lineEdit_Partida->text().toInt();
    }
    graphItem->calcularCaminho(ponto);
    alterarText();
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_pushButtonAccess_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1)-1;
    int p2 = ui->lineEditPosition2->text().toInt(&ok2)-1;
    if(!ok1 || !ok2) throw QString("entrada invalida");
    QString number = QString::number(graph->acessar(p1,p2));
    ui->lineEditWeight->setText(number);
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_pushButton_ponto_clicked()
{
    int ponto;
    if(ui->lineEdit_Partida->text()==""){
        ponto=1;
    }else{
        ponto=ui->lineEdit_Partida->text().toInt()-1;
    }
    graphItem->calcularCaminho(ponto);
}

