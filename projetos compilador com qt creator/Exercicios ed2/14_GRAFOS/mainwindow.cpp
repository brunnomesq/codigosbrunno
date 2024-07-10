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
        if(!ok) throw QString("entrada invalida");

            graph = new Grafico(tam);
            graphItem = new GraphPaint(graph,ui->graphicsView->size());
            change();
            ui->lineEditPosition1->setFocus();


    }catch(QString err){
       QMessageBox::warning(this,"ERROR",err);
    }
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
