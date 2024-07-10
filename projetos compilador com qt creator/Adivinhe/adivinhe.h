#ifndef ADIVINHE_H
#define ADIVINHE_H
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
class Adivinhe
{
public:
    void setNumero(int n);
    int getNumero();
    void setPontuacao(int n);
    int getPontuacao();
private:
    int numero=0;
    int pontuacao;

};

#endif // ADIVINHE_H
