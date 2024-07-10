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
QString Recursividade::mostrarNumerosR(int aux,QString saida)const{
    if(aux>=1){
        saida+=QString::number(aux);
        saida+=" ";
        return mostrarNumerosR(--aux,saida);
    }
    else return (saida+" }");
}
QString Recursividade::mostrarNumerosI()const{
    QString saida="{ ";
    for(int aux=numero;aux<=1;aux--){
        saida+=QString::number(aux);
        saida+=" ";
    }
    saida+=" }";
    return saida;
}
QString Recursividade::mostrarNumeros()const{
    return mostrarNumerosR(numero,"{ ");
}
}