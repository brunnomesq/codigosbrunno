#include "banco.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

void Banco::setDeposito(double valor){
    valorNoBanco=valorNoBanco+valor;
}
void Banco::setSaque(double valor){
    valorNoBanco=valorNoBanco-valor;
}

double Banco::getResultado(){
    return valorNoBanco;
}

void Banco::setExtrato(QString valor){
    extrato=extrato+ valor+"\n";
}

QString Banco::getExtrato(){
    return extrato;
}
