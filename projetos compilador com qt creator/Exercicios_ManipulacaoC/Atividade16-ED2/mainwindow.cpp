#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditSize->setFocus();
    ui->pushButtonCreate->click();
    ui->lineEditSize->setText(QString::number(graph->getsize()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete graph;
}


void MainWindow::on_pushButton_clicked()
{
    graphItem->updatePositions();
    QGraphicsScene *scene = new QGraphicsScene();
    scene->addItem(graphItem);
    ui->graphicsView->setScene(scene) ;
}


void MainWindow::on_pushButtonCreate_clicked()
{
    try{
        bool ok;
        //int s = ui->lineEditSize->text().toInt(&ok);
        //if(!ok) throw QString("invalid input. Must be a integer greater than 0");
        if(!graph){
            graph = new Graph();
            graphItem = new GraphPaint(graph,ui->graphicsView->size());
            ui->pushButton->click();
            ui->lineEditPosition1->setFocus();
        }else{
            throw QString("graph allready created");
        }

    }catch(QString err){
       QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_lineEditSize_returnPressed()
{
    ui->pushButtonCreate->click();
}


void MainWindow::on_pushButtonInsert_clicked()
{
    try{
    bool ok1,ok2;
    int position1 = ui->lineEditPosition1->text().toInt(&ok1);
    int position2 = ui->lineEditPosition2->text().toInt(&ok2);
    int weight = ui->lineEditWeight->text().toInt();
    if(!ok1 || !ok2) throw QString("invalid input must be an interger greater than 0");
    graph->insert(position1,position2,weight);
    ui->pushButton->click();
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}
void MainWindow::on_pushButtonUpdate_clicked()
{
    try{
    bool ok1,ok2;
    int position1 = ui->lineEditPosition1->text().toInt(&ok1);
    int position2 = ui->lineEditPosition2->text().toInt(&ok2);
    int weight = ui->lineEditWeight->text().toInt();
    if(!ok1 || !ok2) throw QString("invalid input must be an interger greater than 0");
    graph->update(position1,position2,weight);
    ui->pushButton->click();
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_pushButtonRemove_clicked()
{
    try{
    bool ok1,ok2;
    int position1 = ui->lineEditPosition1->text().toInt(&ok1);
    int position2 = ui->lineEditPosition2->text().toInt(&ok2);
    if(!ok1 || !ok2) throw QString("invalid input must be an interger greater than 0");
    graph->remove(position1,position2);
    ui->pushButton->click();
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_pushButtonAccess_clicked()
{
    try{
    bool ok1,ok2;
    int position1 = ui->lineEditPosition1->text().toInt(&ok1);
    int position2 = ui->lineEditPosition2->text().toInt(&ok2);
    if(!ok1 || !ok2) throw QString("invalid input must be an interger greater than 0");
    QString number = QString::number(graph->access(position1,position2));
    ui->lineEditWeight->setText(number);
    }catch(QString err){
    QMessageBox::warning(this,"ERROR",err);
    }
}


void MainWindow::on_lineEditPosition1_returnPressed()
{
    ui->lineEditPosition2->setFocus();
}

