#include "recursividade.h"
namespace brn {
Recursividade::Recursividade():numero(0)
{
}
Recursividade::Recursividade(int num){
    setNumero(num);
}

int Recursividade::getNumero() const
{
    return numero;
}

void Recursividade::setNumero(int newNumero)
{
    numero = newNumero;
}
QString Recursividade::mostrarNumerosR(int aux, QString saida)const{
    if(aux!=0){
        saida+=QString::number(aux%2);
        return mostrarNumerosR(aux/2,saida);
    }
    else return (saida);
}
QString Recursividade::mostrarNumerosI()const{
    QString saida="";
    int aux=numero;
    while(aux!=0){
        saida+=QString::number(aux%2);
        aux=aux/2;
    }
    return saida;
}
QString Recursividade::mostrarNumeros()const{
    return mostrarNumerosR(numero,"");
}
}
