#include "arvorebinaria.h"

namespace les{
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


void ArvoreBinaria::inserirRecursivo(No **raiz, QString elemento){
    if(*raiz == 0){
        *raiz = new No(elemento);
    }else
        if(elemento < (*raiz)->getDado())
            inserirRecursivo(&(*raiz)->esquerda, elemento);
        else
            if(elemento > (*raiz)->getDado() )
                inserirRecursivo(&(*raiz)->direita, elemento);
            else (*raiz)->setRepeticoes((*raiz)->getRepeticoes()+1);
}

void ArvoreBinaria::emOrdem(No* raiz){
    if(raiz != 0){
        emOrdem(raiz->getEsquerda());
        saida += "▹ Palavra: " + raiz->getDado() + " ▸  Repeticoes: " + QString::number(raiz->getRepeticoes()) + "\n";
        emOrdem(raiz->getDireita());
    }
}

QString ArvoreBinaria::retornar_Maior(No **raiz){
    QString valor;
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

void ArvoreBinaria::removerRecursivo(No **raiz, QString elemento){
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
