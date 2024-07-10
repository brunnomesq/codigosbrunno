#ifndef BANCO_H
#define BANCO_H
#include "mainwindow.h"
#include "ui_mainwindow.h"

class Banco
{
public:
    void setDeposito(double valor);
    void setSaque(double valor);
    void setExtrato(QString valor);

    double getResultado();
    QString getExtrato();


private:
double valorNoBanco=0;
QString extrato="";
};

#endif // BANCO_H
