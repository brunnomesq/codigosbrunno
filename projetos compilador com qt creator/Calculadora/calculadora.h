#ifndef CALCULADORA_H
#define CALCULADORA_H

#include "mainwindow.h"
#include "ui_mainwindow.h"

class Calculadora
{
public:
    void setSoma(double n1, double n2);
    void setSubt(double n1, double n2);
    void setMult(double n1, double n2);
    void setDivi(double n1, double n2);
    void setElev(double n1, double n2);

    double getResultado();

    double resultado;
};

#endif // CALCULADORA_H
