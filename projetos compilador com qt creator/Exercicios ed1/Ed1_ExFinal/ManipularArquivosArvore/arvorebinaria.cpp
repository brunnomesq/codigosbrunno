#include "arvorebinaria.h"

namespace ED1{

ArvoreBinaria::ArvoreBinaria():
    raiz(0),

    saida("")
{
}

ArvoreBinaria::~ArvoreBinaria()
{
    if(raiz != 0){
        delete raiz;
    }
}
QString ArvoreBinaria::imprimir(){
    saida = "";
    emOrdem(raiz);
    return saida;
}
No* ArvoreBinaria::getRaiz()const{
    return raiz;
}
void ArvoreBinaria::setSaida(const QString &newSaida){
    saida=newSaida;
}
QString ArvoreBinaria::getSaida()const{
    return saida;
}


void ArvoreBinaria::inserirRecursivo(No **raiz, QString elemento){
    if(*raiz == 0){
        *raiz = new No(elemento);
    }else
        if(elemento < (*raiz)->getDado()) //esse menor aqui é pra definir ordem alfabetica. Se for menor tipo (b<c)
            //ai entra na condicao
            inserirRecursivo(&(*raiz)->esquerda, elemento);
        else//se for maior tipo (b>a) etnra aqui
            if(elemento > (*raiz)->getDado())
                inserirRecursivo(&(*raiz)->direita, elemento);
            //se for igualzinho ou seja a mesma palavra ela repetiu entao aumenta a frequencia
            else (*raiz)->setFrequencia((*raiz)->getFrequencia()+1);
}

void ArvoreBinaria::emOrdem(No* raiz){
    if(raiz != 0){
        emOrdem(raiz->getEsquerda());
        if(raiz->getFrequencia()==1){
            saida +="A palavra '"+ raiz->getDado() + "' apareceu " + QString::number(raiz->getFrequencia()) + " vez\n";
        }else{
            saida +="A palavra '"+ raiz->getDado() + "' apareceu " + QString::number(raiz->getFrequencia()) + " vezes\n";
        }

        emOrdem(raiz->getDireita());
    }
}


}
