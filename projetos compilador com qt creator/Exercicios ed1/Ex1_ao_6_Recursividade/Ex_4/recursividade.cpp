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
QString Recursividade::mostrarNumerosR(int aux,int soma,QString saida)const{
    if(aux<=numero){
        soma+=aux;
        return mostrarNumerosR(++aux,soma,saida);
    }
    saida+=QString::number(soma);
    return (saida+" }");
}
QString Recursividade::mostrarNumerosI()const{
    QString saida="{ ";
    int soma=0;
    for(int aux=0;aux<=numero;aux++){
        soma+=aux;
    }
    saida+=QString::number(soma);
    saida+=" }";
    return saida;
}
QString Recursividade::mostrarNumeros()const{
    return mostrarNumerosR(0,0,"{ ");
}
}
