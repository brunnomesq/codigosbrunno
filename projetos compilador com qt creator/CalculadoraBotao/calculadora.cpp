#include "calculadora.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

void Calculadora::setAgrupNumber(QString num){
    if(agrupNumber=="0"){
        agrupNumber="";
    }
    agrupNumber=agrupNumber+num;
}
QString Calculadora::getAgrupNumber(){
    return agrupNumber;
}
void Calculadora::setDelete(int num){
    numeroDel=num/10;
    agrupNumber=QString::number(numeroDel);

}
int Calculadora::getDelete(){
    return numeroDel;
}

void Calculadora::setCE(QString n){
    agrupNumber=n;
}
void Calculadora::SetC(QString n){
    agrupNumber=n;
    sinal="";
    sinalI="";
    pnum=0;
    snum=0;
    capturaSinalP=0;
}


void Calculadora::setSinal(QString s){
    sinal=s;
}
void Calculadora::setAgrupSinal(double p){
    if(sinal=="+"){
        capturaSinalP=capturaSinalP+p;
    }else if(sinal=="-"){
        capturaSinalP=capturaSinalP-p;

    }else if(sinal=="x*"){
        capturaSinalP=1;
        capturaSinalP=capturaSinalP*p;

    }else if(sinal=="x"){

        capturaSinalP=capturaSinalP*p;

    }else if(sinal=="/*"){
        capturaSinalP=1;
        capturaSinalP=p/capturaSinalP;

    }else if(sinal=="/"){

        capturaSinalP=capturaSinalP/p;

    }
    capturaSinal=QString::number(capturaSinalP);
}
void Calculadora::setPSom(double pn){
    pnum=pn;
}
void Calculadora::setSSom(double sn){
    snum=sn;
}
void Calculadora::setIgual(QString si){
    sinalI=si;
    if(sinalI=="+"){
        capturaSinalPi=pnum+snum;
    }if(sinalI=="-"){
        capturaSinalPi=pnum-snum;
    }if(sinalI=="*"){
        capturaSinalPi=pnum*snum;
    }if(sinalI=="/"){
        capturaSinalPi=pnum/snum;
    }
    capturaSinali=QString::number(capturaSinalPi);
}
void Calculadora::setLigador(int l){
    ligador=l;
}
QString Calculadora::getAgrupSinal(){
    return capturaSinal;
}
double Calculadora::getAgrupSinalP(){
    return capturaSinalP;
}

QString Calculadora::getSinalIgual(){
    return sinalI;
}

int Calculadora::getLigador(){
    return ligador;
}
double Calculadora::getPSom(){
    return pnum;
}
double Calculadora::getcapturaSinalPi()
{
    return capturaSinalPi;
}
QString Calculadora::getcapturaSinali(){
    return capturaSinali;
}
