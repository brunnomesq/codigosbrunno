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

void MainWindow::on_pushButtonCreate_clicked()
{
    try{
        bool ok;
        int tam = ui->lineEditSize->text().toInt(&ok);
        //if(graph) throw QString("Grafo ja criado");
        if(!ok) throw QString("entrada invalida");
      //  if(!graph){
            graph = new Grafico(tam);
            graphItem = new GraphPaint(graph,ui->graphicsView->size());
            change();
            ui->lineEditPosition1->setFocus();
            //coloquei aqui
            ui->tableWidget->setRowCount(tam);
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
                }
            //matrizchanged(-1,-1);



                //ate aqui
       // }else{
          //  throw QString("grafico ja foi criado");
       // }

    }catch(QString err){
       QMessageBox::warning(this,"ERROR",err);
    }
}
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
}
void MainWindow::on_pushButtonInsert_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1);
    int p2 = ui->lineEditPosition2->text().toInt(&ok2);
    int peso = ui->lineEditWeight->text().toInt();
    if(!ok1 || !ok2) throw QString("entrada invalida");
    graph->inserir(p1,p2,peso);
    change();
    matrizchanged(p1,p2);
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}
void MainWindow::on_pushButtonUpdate_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1);
    int p2 = ui->lineEditPosition2->text().toInt(&ok2);
    int peso = ui->lineEditWeight->text().toInt();
    if(!ok1 || !ok2) throw QString("entrada invalida");
    graph->alterar(p1,p2,peso);
    change();
    matrizchanged(p1,p2);
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_pushButtonRemove_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1);
    int p2 = ui->lineEditPosition2->text().toInt(&ok2);
    if(!ok1 || !ok2) throw QString("entrada invalida");
    graph->remover(p1,p2);
    change();
    matrizchanged(p1,p2);
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_pushButtonAccess_clicked()
{
    try{
    bool ok1,ok2;
    int p1 = ui->lineEditPosition1->text().toInt(&ok1);
    int p2 = ui->lineEditPosition2->text().toInt(&ok2);
    if(!ok1 || !ok2) throw QString("entrada invalida");
    QString number = QString::number(graph->acessar(p1,p2));
    ui->lineEditWeight->setText(number);
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}

