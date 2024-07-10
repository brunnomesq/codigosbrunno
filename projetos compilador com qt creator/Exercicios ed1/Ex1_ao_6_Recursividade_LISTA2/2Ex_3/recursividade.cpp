#include "recursividade.h"
#include <QRandomGenerator>
namespace brn {
Recursividade::Recursividade(int tamanho):
    tamanho(0),
    array(0)
{
    if(tamanho<=0)throw QString("O tamanho nao pode ser menor ou igual a 0");
    try{
        array=new int [tamanho];
        this->tamanho=tamanho;
        gerador();
    }catch(std::bad_alloc&){
        throw QString ("Vetor nao pode ser criado");
    }
}
Recursividade::~Recursividade(){
    if(array) delete[] array;
}
int Recursividade::getTamanho() const{
    return tamanho;
}
int Recursividade::acessar(int indice){
    return array[indice];
}
void Recursividade::gerador(){
    for(int i=0;i<getTamanho();i++){
       *(array+i)=QRandomGenerator::global()->bounded(1, 100);
    }
}
QString Recursividade::mostrarNumerosR(int aux, int nMenor,QString saida){
    if(aux<=tamanho){
        if(nMenor>=acessar(aux)){
            nMenor=acessar(aux);
        }
        return mostrarNumerosR(++aux,nMenor,saida);
    }
    saida+=QString::number(nMenor);
    return (saida+" }");
}
QString Recursividade::mostrarNumerosI(){
    QString saida="{ ";
    int nMenor=acessar(0);
    for(int aux=0;aux<=tamanho;aux++){
        if(nMenor>=acessar(aux)){
            nMenor=acessar(aux);
        }
    }
    saida+=QString::number(nMenor);
    saida+=" }";
    return saida;
}
QString Recursividade::mostrarNumeros() {
    return mostrarNumerosR(0,acessar(0),"{ ");
}
}
