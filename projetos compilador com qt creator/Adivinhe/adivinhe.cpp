#include "adivinhe.h"
#include <cstdlib>
#include <ctime>
#include "mainwindow.h"
#include "ui_mainwindow.h"

void Adivinhe::setNumero(int n){
    numero=n;
}
int Adivinhe::getNumero(){
    return numero;
}
void Adivinhe::setPontuacao(int n){
    pontuacao=pontuacao+n;
}
int Adivinhe::getPontuacao(){
    return pontuacao;
}
