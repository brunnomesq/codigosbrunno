#ifndef CALCULADORA_H
#define CALCULADORA_H

#include "mainwindow.h"
#include "ui_mainwindow.h"


class Calculadora
{
public:

    void setAgrupNumber(QString num);
    void setDelete(int num);
    void setCE(QString n);
    void SetC(QString n);
    void setSinal(QString s);
    void setAgrupSinal(double p);
    void setLigador(int l);

    void setPSom(double pn);
    void setSSom(double sn);
    void setIgual(QString si);

    QString getAgrupNumber();
    int getDelete();
    QString getAgrupSinal();
    double getAgrupSinalP();
    int getLigador();
    double getPSom();
    int ligador=0;
    double getcapturaSinalPi();
    QString getcapturaSinali();
    QString getSinalIgual();

private:
    QString sinalI;
    QString agrupNumber="";
    int numeroDel;
    double pnum,snum;
    QString sinal;
    QString capturaSinal,capturaSinali;
    double capturaSinalP,capturaSinalPi;

};

#endif // CALCULADORA_H
