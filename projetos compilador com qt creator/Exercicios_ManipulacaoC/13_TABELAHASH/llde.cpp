#include "llde.h"
#include <QDebug>
namespace brn{
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
/*QString LLDE::toStringInicioFim()const{
    QString saida="Dados da lista-> ";
    brn:: No *pAux = inicio;
    for(int pos=0;pos<quantidadeElementos;pos++){
        saida+= pAux->toString();
        pAux=pAux->getProximo();
    }
    return saida;
}
QString LLDE::toStringFimInicio()const{
    QString saida="Dados da lista-> ";
    brn:: No *pAux = fim;
    for(int pos=0;pos<quantidadeElementos;pos++){
        saida+= pAux->toString();
        pAux=pAux->getAnterior();
    }
    return saida;
}*/
Dados LLDE::acessarInicio()const{
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
void LLDE::inserirInicio(Dados dado){
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

Dados LLDE::acessarFim() const{
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
void LLDE::inserirFim(Dados dado){
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
void LLDE::inserirPosicao(Dados dado, int pos){
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
        brn::No *pAux = inicio;
        for(int pular=0;pular<pos;pular++){
            pAux=pAux->getProximo();  //0 1 novono 2
        }
        novoNo->setAnterior(pAux->getAnterior());
        novoNo->setProximo(pAux);
        pAux->getAnterior()->setProximo(novoNo);
        pAux->setAnterior(novoNo);

        //se a pular<pos-1 tem que usar isso aqui debaixo
        //novoNo->setAnterior(pAux);
        //novoNo->setProximo(pAux->getProximo());
        //novoNo->getAnterior()->setProximo(novoNo);
        //novoNo->getProximo()->setAnterior(novoNo);

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
    brn::No *pAux= inicio;
    for(int pular=0;pular<pos;pular++){
        pAux=pAux->getProximo();   //0 1 2 3
    }
    pAux->getAnterior()->setProximo(pAux->getProximo());
    pAux->getProximo()->setAnterior(pAux->getAnterior());
    delete pAux;
    quantidadeElementos--;
    //if (estaVAzia) LE
    //if (pos<0||pos>=quantidadeElementos) LE
    //if(pos==0)retirarInicio,return;
    //if(pos==QuantidadeElementos-1) retirarFinal, return;
    //percorrer a lista com repeater;
    //pAux.getAnterior.setProximo(pAux.getProximo);
    //pAux.getProximo.setAnterior(pAux.getAnterior);
    //delete pAux
    //quantidadeElementos--
}
Dados LLDE::acessarPosicao(int pos)const{
    if(estaVazia()){
        throw QString("Esta vazia");
    }
    //qDebug()<<"Posicao no acessar posicao" <<pos;
    //qDebug()<<"Quantidade de elementos que cabe nessa posicao"<<quantidadeElementos;
    //qDebug()<<"____________________";
    if(pos<0||pos>=quantidadeElementos){
        throw QString("Posicao invalida");
    }
    if(pos==quantidadeElementos-1){
        return fim->getDado();
    }
    brn::No *pAux=inicio;
    for(int pular=0;pular<pos;pular++){ //0 1 2
        pAux=pAux->getProximo();
    }
    return pAux->getDado();
    //if(estaVazia)LE
    //if (pos<0||pos>=quantidadeElementos) LE
    //if(pos==0) return inicio->getDado();
    //if(pos== quantidadeElementos - 1) return fim->getDado();
    //percorrer a lista ate a posicao que eu desejo
    //return pAux.getDado();

}
void LLDE::setPosicao(int pos, Dados dado){
    if(estaVazia()){
        throw QString("Esta vazia");
    }
    //qDebug()<<"Posicao no acessar posicao" <<pos;
    //qDebug()<<"Quantidade de elementos que cabe nessa posicao"<<quantidadeElementos;
    //qDebug()<<"____________________";
    if(pos<0||pos>=quantidadeElementos){
        throw QString("Posicao invalida");
    }
    if(pos==quantidadeElementos-1){
        fim->setDado(dado);
    }
    brn::No *pAux=inicio;
    for(int pular=0;pular<pos;pular++){ //0 1 2
        pAux=pAux->getProximo();
    }
    pAux->setDado(dado);
    //if(estaVazia)LE
    //if (pos<0||pos>=quantidadeElementos) LE
    //if(pos==0) return inicio->getDado();
    //if(pos== quantidadeElementos - 1) return fim->getDado();
    //percorrer a lista ate a posicao que eu desejo
    //return pAux.getDado();

}



}

