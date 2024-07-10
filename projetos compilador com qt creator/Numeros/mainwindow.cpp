#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "numeros.h"
#include <QMessageBox>
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

Numeros c;

void MainWindow::on_pushButton_5_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_5; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(10,"*");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);

        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }


}


void MainWindow::on_pushButton_3_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_3; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(10,"/");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_2_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_2; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(10,"-");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(10,"+");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_4_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_4; // "myButton" é o objectName definido no Qt Designer
       int num=c.getNumero();
       if(num<=10){
           QMessageBox::critical(this,"ERRO","Voce perdeu!");
           close();
       }

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(10,"+");
        num=c.getNumero();

        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_8_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_8; // "myButton" é o objectName definido no Qt Designer
       int num=c.getNumero();
       if(num<=10){
           QMessageBox::critical(this,"ERRO","Voce perdeu!");
           close();
       }

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(10,"+");
        num=c.getNumero();

        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_7_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_7; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(100,"-");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_6_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_6; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(12,"*");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_9_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_9; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(5,"*");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_10_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_10; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(10,"*");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_11_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_11; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(25,"-");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_12_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_12; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(5,"/");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_14_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_14; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(2,"*");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_13_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_13; // "myButton" é o objectName definido no Qt Designer

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(5,"/");
        int num=c.getNumero();
        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}


void MainWindow::on_pushButton_15_clicked()
{
    // Localize o botão pelo seu nome de objeto
        QPushButton *buttonToRemove =ui->pushButton_15; // "myButton" é o objectName definido no Qt Designer
       int num=c.getNumero();
       if(num<=3){
           QMessageBox::critical(this,"ERRO","Voce perdeu!");
           close();
       }

        // Verifique se o botão foi encontrado e remova-o do layout e da memória
        if (buttonToRemove) {
            ui->verticalLayout->removeWidget(buttonToRemove); // Supondo que o botão esteja em um QVBoxLayout chamado "verticalLayout"
            delete buttonToRemove;
        }

        c.setNumero(3,"+");
        num=c.getNumero();

        QString num_esc=QString::number(num);
        ui->label->setText(num_esc);
        c.setGanhar(1);
        int ganha=c.getGanhar();
        if(ganha==15){
            QMessageBox::information(this,"Parabens","Voce ganhou!");
            close();
        }
}




