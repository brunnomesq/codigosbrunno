#include "llde.h"
#include <QDebug>
namespace ed2{
int LLDE::getQuantidadeElementos() const
{
    return quantidadeElementos;
}

LLDE::LLDE():inicio(0),quantidadeElementos(0),fim(0)
{
}
bool LLDE::estaVazia()const{
    return (quantidadeElementos==0);
}

Docentes LLDE::acessarInicio()const{
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    return inicio->getDado();
}
void LLDE::retirarInicio(){
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    if(quantidadeElementos==1){
        delete inicio;
        inicio=0;
        fim=0;
        quantidadeElementos=0;
        return;
    }
    inicio=inicio->getProximo();
    delete inicio->getAnterior();
    inicio->setAnterior(0);
    quantidadeElementos--;

}
void LLDE::inserirInicio(Docentes dado){
    try{
        No *novoNo=new No(dado);
        if(estaVazia()){
            quantidadeElementos++;
            inicio=novoNo;
            fim=novoNo;
            return;
        }
        novoNo->setProximo(inicio);
        inicio->setAnterior(novoNo);
        inicio=novoNo;
        quantidadeElementos++;
    }catch(std::bad_alloc &erro){
        throw QString("O novoNo não pode ser criado!");
        }
}

Docentes LLDE::acessarFim() const{
    if(estaVazia()){
        throw QString ("Esta vazia");
    }
    return fim->getDado();
}
void LLDE::retirarFim(){
    if(estaVazia()){
        throw QString ("Esta vazia");
    }
    if(quantidadeElementos==1){
        delete fim;
        fim=0;
        inicio=0;
        quantidadeElementos=0;
        return;
    }
    fim=fim->getAnterior();
    delete fim->getProximo();
    fim->setProximo(0);
    quantidadeElementos--;

}
void LLDE::inserirFim(Docentes dado){
    try{
        No *novoNo=new No(dado);
        if(estaVazia()){
            quantidadeElementos++;
            inicio=novoNo;
            fim=novoNo;
            return;
        }
        novoNo->setAnterior(fim);
        fim->setProximo(novoNo);
        fim=novoNo;
        quantidadeElementos++;
    }catch(std::bad_alloc &erro){
        throw QString("O novoNo não pode ser criado!");
        }
}
void LLDE::inserirPosicao(Docentes dado, int pos){
    try{
        if(pos<0||pos>quantidadeElementos){
            throw QString("Posicao invalida!");
        }
        if(pos==0){
            inserirInicio(dado);
            return;
        }
        if(pos==quantidadeElementos){
            inserirFim(dado);
            return;
        }
        No *novoNo=new No(dado);
        ed2::No *pAux = inicio;
        for(int pular=0;pular<pos;pular++){
            pAux=pAux->getProximo();
        }
        novoNo->setAnterior(pAux->getAnterior());
        novoNo->setProximo(pAux);
        pAux->getAnterior()->setProximo(novoNo);
        pAux->setAnterior(novoNo);


        quantidadeElementos++;
    }catch(std::bad_alloc &erro){
        throw QString("O novoNo não pode ser criado!");
    }
}
void LLDE::retirarPosicao(int pos){
    if(estaVazia()){
        throw QString("Esta vazia!");
    }
    if(pos<0||pos>=quantidadeElementos){
        throw QString("Posicao invalida!");
    }
    if(pos==0){
        retirarInicio();
        return;
    }
    if(pos==quantidadeElementos-1){
        retirarFim();
        return;
    }
    ed2::No *pAux= inicio;
    for(int pular=0;pular<pos;pular++){
        pAux=pAux->getProximo();
    }
    pAux->getAnterior()->setProximo(pAux->getProximo());
    pAux->getProximo()->setAnterior(pAux->getAnterior());
    delete pAux;
    quantidadeElementos--;

}
Docentes LLDE::acessarPosicao(int pos)const{
    if(estaVazia()){
        throw QString("Esta vazia");
    }

    if(pos<0||pos>=quantidadeElementos){
        throw QString("Posicao invalida");
    }
    if(pos==quantidadeElementos-1){
        return fim->getDado();
    }
    ed2::No *pAux=inicio;
    for(int pular=0;pular<pos;pular++){
        pAux=pAux->getProximo();
    }
    return pAux->getDado();


}
void LLDE::setPosicao(int pos, Docentes dado){
    if(estaVazia()){
        throw QString("Esta vazia");
    }

    if(pos<0||pos>=quantidadeElementos){
        throw QString("Posicao invalida");
    }
    if(pos==quantidadeElementos-1){
        fim->setDado(dado);
    }
    ed2::No *pAux=inicio;
    for(int pular=0;pular<pos;pular++){
        pAux=pAux->getProximo();
    }
    pAux->setDado(dado);


}



}

