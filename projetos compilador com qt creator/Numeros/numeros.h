#ifndef NUMEROS_H
#define NUMEROS_H
#include "mainwindow.h"
#include "ui_mainwindow.h"

class Numeros
{
public:
    void setNumero(int n,QString si);
    void setGanhar(int n);
    int getGanhar();
    int getNumero();
    int numero=0;
    int ganhar=0;
private:
};

#endif // NUMEROS_H
