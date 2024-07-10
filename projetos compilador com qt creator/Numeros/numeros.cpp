#include "numeros.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

void Numeros::setNumero(int n, QString si){
    if(si=="+"){
        numero=numero+n;
    }else if(si=="-"){
        numero=numero-n;
    }else if(si=="*"){
        numero=numero*n;
    }else if(si=="/"){
        numero=numero/n;
    }
}
int Numeros::getNumero(){
    return numero;
}
void Numeros::setGanhar(int n){
    ganhar=ganhar+n;
}
int Numeros::getGanhar(){
    return ganhar;
}
