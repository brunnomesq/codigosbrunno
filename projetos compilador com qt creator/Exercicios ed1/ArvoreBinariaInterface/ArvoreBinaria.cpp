#include "ArvoreBinaria.h"

namespace ED1{
ArvoreBinaria::ArvoreBinaria():
    raiz(0)
{
}

ArvoreBinaria::~ArvoreBinaria()
{
    if(raiz != 0){
        delete raiz;
    }
}

void ArvoreBinaria::inserirRecursivo(No **raiz, int elemento){
    if(*raiz == 0){
        *raiz = new No(elemento);
    }else
        if(elemento < (*raiz)->getDado())
            inserirRecursivo(&(*raiz)->esquerda, elemento);
        else
            if(elemento > (*raiz)->getDado() )
                inserirRecursivo(&(*raiz)->direita, elemento);
            else throw QString("Elemento já Existe");
}

void ArvoreBinaria::emOrdem(No* raiz){
    if(raiz != 0){
        emOrdem(raiz->getEsquerda());
        saida+="\nElemento=>  "+QString::number(raiz->getDado());
        //std::cout<<std::endl<<"Elemento=>  "<<raiz->getDado();
        emOrdem(raiz->getDireita());
    }
}

int ArvoreBinaria::retornar_Maior(No **raiz){
    int valor;
    No *aux = 0;
    if((*raiz)->direita != 0) return (retornar_Maior(&(*raiz)->direita));
    else{
        aux = *raiz;
        valor = (*raiz)->getDado();
        *raiz = (*raiz)->esquerda;
        aux->esquerda = 0;
        aux->direita = 0;
        delete aux;
        return valor;
    }
}

void ArvoreBinaria::setSaida(const QString &newSaida)
{
    saida = newSaida;
}

QString ArvoreBinaria::getSaida()
{
    return saida;
}

void ArvoreBinaria::removerRecursivo(No **raiz, int elemento){
    No *aux = 0;
    if(*raiz != 0){
        if((*raiz)->getDado() == elemento){
            aux = *raiz;
            if((*raiz)->esquerda == 0){
                *raiz = (*raiz)->direita;
                aux->esquerda = 0;
                aux->direita = 0;
                delete aux;
            }else
                if((*raiz)->direita == 0){
                    *raiz = (*raiz)->esquerda;
                    aux->esquerda = 0;
                    aux->direita = 0;
                    delete aux;
                }else
                    {
                        (*raiz)->setDado(this->retornar_Maior(&(*raiz)->esquerda));
                    }
        }else
            {
                if((*raiz)->getDado() < elemento)
                    removerRecursivo(&(*raiz)->direita,elemento);
                else
                    if((*raiz)->getDado() > elemento)
                        removerRecursivo(&(*raiz)->esquerda,elemento);
        }

    }//ok
    else throw QString("Elemento não Existe");//ok
}

}
