#include "calculadora.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"



void Calculadora::setSoma(double n1, double n2){
    resultado=n1+n2;
}
void Calculadora::setSubt(double n1, double n2){
    resultado=n1-n2;
}
void Calculadora::setMult(double n1, double n2){
    resultado=n1*n2;
}
void Calculadora::setDivi(double n1, double n2){
    resultado=n1/n2;
}
void Calculadora::setElev(double n1, double n2){
    resultado=1;
    for(int i=0;i<n2;i++){
        resultado=resultado*n1;
    }
}

double Calculadora::getResultado(){
    return resultado;
}


//DEU TUDO CERTO PORRAAAAAA
