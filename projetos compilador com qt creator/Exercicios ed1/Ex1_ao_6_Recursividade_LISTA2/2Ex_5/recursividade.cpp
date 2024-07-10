#include "recursividade.h"
namespace brn {
Recursividade::Recursividade():numero(0),potencia(0)
{
}
Recursividade::Recursividade(int num, int pot){
    setNumero(num);
    setPotencia(pot);
}

int Recursividade::getNumero() const
{
    return numero;
}

void Recursividade::setNumero(int newNumero)
{
    numero = newNumero;
}
int Recursividade::getPotencia() const
{
    return potencia;
}

void Recursividade::setPotencia(int newPotencia)
{
    potencia = newPotencia;
}

QString Recursividade::mostrarNumerosR(int aux,int mult, QString saida)const{
    if(aux<=potencia){
        mult=mult*numero;
        saida=QString::number(mult);
        return mostrarNumerosR(++aux,mult,saida);
    }
    if(potencia==0){
        return "1";
    }
    else return saida;
}
QString Recursividade::mostrarNumerosI()const{
    QString saida="";
    int mult=1;
    if(potencia==0){
        return "1";
    }
    for(int aux=0;aux<=potencia;aux++){
        mult=mult*numero;
        saida=QString::number(mult);
    }

    return saida;
}
QString Recursividade::mostrarNumeros()const{
    return mostrarNumerosR(1,1,"");
}
}
