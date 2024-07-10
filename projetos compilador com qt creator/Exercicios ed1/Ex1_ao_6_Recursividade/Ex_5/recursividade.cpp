#include "recursividade.h"
namespace brn {
Recursividade::Recursividade()
{
}

QString Recursividade::mostrarNumerosR(int aux, double pi, double termo, QString saida)const{
    if(termo>= 0.001){
            if(aux%2==0) {
                pi = pi + termo;
                } else {
                pi = pi - termo;
                }
        aux++;
        termo = 4.0 / ((2 * aux) + 1);
        return mostrarNumerosR(aux,pi,termo,saida);
    }
    saida+=QString::number(pi);
    return (saida+" }");
}
QString Recursividade::mostrarNumerosI(){
    QString saida="{ ";
    double termo=0;
    double pi=0;
    for(int aux=0;termo>=0.001;aux++){
        if(aux%2==0){
            pi=pi+termo;
        }else{
            pi=pi-termo;
        }
        termo=4.0/((2*aux)+1);
    }
    saida+=QString::number(pi);
    return (saida + " }");
}
QString Recursividade::mostrarNumeros()const{
    return mostrarNumerosR(0,0.0,4.0,"{ ");
}
}
