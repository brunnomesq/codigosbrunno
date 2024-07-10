#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <ordenar.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete o;
}

float MainWindow::millisecondsToFloat(qint64 milliseconds){
    return static_cast<float>(milliseconds);
}

void MainWindow::on_pushButton_Tamanho_clicked()
{
    try{
        int tamanho=ui->lineEdit_Tamanho->text().toInt();

        this->o=new brn::Ordenar(tamanho);

        QString vet_esc=o->toString();
        ui->textEdit_Conjunto->setText(vet_esc);


        //selection sort
        QElapsedTimer timer;
        timer.start();
        o->selectionSort();
        qint64 selectionSortTime=timer.elapsed();

        vet_esc=o->toStringSS();
        ui->textEdit_Ordenado->setText(vet_esc);

        QString n_exec=QString::number(o->getN_exec());
        ui->lineEdit_Exec_Vet->setText(n_exec);

        QString tempo=QString::number(millisecondsToFloat(selectionSortTime));
        ui->lineEdit_tempoSS->setText(tempo+"ms");


        //insertionSort
        timer.restart();
        o->insertionSort();
        qint64 insertionSortTime=timer.elapsed();
        vet_esc=o->toStringIS();
        ui->textEdit_Ordenado_IS->setText(vet_esc);

        n_exec=QString::number(o->getN_exec());
        ui->lineEdit_Exec_Vet_2->setText(n_exec);

        tempo=QString::number(millisecondsToFloat(insertionSortTime));
        ui->lineEdit_tempoIS->setText(tempo+"ms");

        //bubblesort
        timer.restart();
        o->bubbleSort();
        qint64 bubbleSortTime=timer.elapsed();
        vet_esc=o->toStringBB();
        ui->textEdit_Ordenado_BB->setText(vet_esc);

        n_exec=QString::number(o->getN_exec());
        ui->lineEdit_Exec_Vet_3->setText(n_exec);

        tempo=QString::number(millisecondsToFloat(bubbleSortTime));
        ui->lineEdit_tempoBB->setText(tempo+"ms");

        //mergesort
        timer.restart();
        o->mergeSort();
        qint64 mergeSortTime=timer.elapsed();
        vet_esc=o->toStringMS();
        ui->textEdit_Ordenado_MS->setText(vet_esc);

        n_exec=QString::number(o->getN_exec());
        ui->lineEdit_Exec_Vet_4->setText(n_exec);

        tempo=QString::number(millisecondsToFloat(mergeSortTime));
        ui->lineEdit_tempoMS->setText(tempo+"ms");


    }catch(QString &mensagem){
        QMessageBox::warning(this, "Erro", mensagem);
    }
}



