#include "recursividade.h"
namespace brn {
Recursividade::Recursividade():numero(0),numero2(0)
{
}
Recursividade::Recursividade(int num, int num2){
    setNumero(num);
    setNumero2(num2);
}

int Recursividade::getNumero() const
{
    return numero;
}

void Recursividade::setNumero(int newNumero)
{
    numero = newNumero;
}
int Recursividade::getNumero2() const
{
    return numero2;
}

void Recursividade::setNumero2(int newNumero2)
{
    numero2 = newNumero2;
}

QString Recursividade::mostrarNumerosR(int aux,int mult, QString saida)const{
    if(aux<=numero2){
        mult=mult+numero;
        saida=QString::number(mult);
        return mostrarNumerosR(++aux,mult,saida);
    }
    else return saida;
}
QString Recursividade::mostrarNumerosI()const{
    QString saida="";
    int mult=0;
    for(int aux=0;aux<=numero2;aux++){
        mult=mult+numero;
        saida=QString::number(mult);
    }

    return saida;
}
QString Recursividade::mostrarNumeros()const{
    return mostrarNumerosR(1,0,"");
}
}
