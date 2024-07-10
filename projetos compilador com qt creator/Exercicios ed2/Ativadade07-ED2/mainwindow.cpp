#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditSize->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonMake_clicked()
{

    try {
        bool ok;
        clock_t t;
        int size = ui->lineEditSize->text().toInt(&ok);
        if(!ok)throw QString("Tamanho não pode ser uma letra ou estar vazio");

        array = new Sort(size);

        ui->textEditRand->setText(array->print());
        t = clock();
        array->selectionSort();
        t = clock() - t;
        ui->lineEditSSCount->setText(QString::number(array->getCount()));
        ui->lineEditSSTime->setText("seconds: "+QString::number((float)t/CLOCKS_PER_SEC));

        t = clock();
        array->insertionSort();
        t = clock() - t;
        ui->lineEditISCount->setText(QString::number(array->getCount()));
        ui->lineEditISTime->setText("seconds: "+QString::number((float)t/CLOCKS_PER_SEC));

        t = clock();
        array->bubbleSort();
        t = clock() - t;
        ui->lineEditBSCount->setText(QString::number(array->getCount()));
        ui->lineEditBSTime->setText("seconds: "+QString::number((float)t/CLOCKS_PER_SEC));

        ui->textEditOrder->setText(array->printSort(0));
        ui->textEditIOrder->setText(array->printSort(1));
        ui->textEditBOrder->setText(array->printSort(2));
    } catch (QString error) {
                QMessageBox::warning(this,"ERROR",error);
    }
}


void MainWindow::on_lineEditSize_returnPressed()
{
   ui->pushButtonMake->click();
}

