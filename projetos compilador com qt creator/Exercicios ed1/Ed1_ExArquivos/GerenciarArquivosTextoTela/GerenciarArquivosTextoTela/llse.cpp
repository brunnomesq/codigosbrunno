#include "llse.h"
namespace ejm{
int ListaLSE::getQuantidadeElementos() const
{
    return quantidadeElementos;
}

ListaLSE::ListaLSE():inicio(0), quantidadeElementos(0)
{
}
bool ListaLSE::estaVazia()const{
    return (quantidadeElementos==0);
}

QString ListaLSE::toString()const{
    /*if(estaVazia()){
        throw QString ("Está vazia!");
    }*/
    QString saida="Dados da lista-> ";
    ejm:: No *pAux = inicio;
    for(int pos=0;pos<quantidadeElementos;pos++){
        saida+= pAux->toString();
        pAux=pAux->getProximo();
    }
    return saida;
}
Piloto ListaLSE::acessarInicio()const{
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    return inicio->getDado();
}
void ListaLSE::inserirInicio(Piloto dado){
    try{
        No *novoNo=new No(dado);
        novoNo->setProximo(inicio); //coloca no proximo se ja tiver um inicio existente (se for 0 vira 0 msm)
        inicio=novoNo; //o inicio recebe o endereco do novoNo que é o primeiro
        quantidadeElementos++;
    }catch(std::bad_alloc &erro){
        throw QString("O novoNo não pode ser criado!");
    }

}
void ListaLSE::retirarInicio(){
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    ejm::No *pAux = inicio;
    inicio=inicio->getProximo();
    quantidadeElementos--;
    delete pAux;
}

Piloto ListaLSE::acessarFim() const{
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    ejm::No *pAux = inicio;
    while(pAux->getProximo() != 0){
        pAux=pAux->getProximo();
    }
    return pAux->getDado();
}
void ListaLSE::inserirFim(Piloto dado){
    try{
        No *novoNo=new No(dado);
        if(estaVazia()){
            inicio=novoNo;
            quantidadeElementos++;
            return;
        }
        ejm::No *pAux = inicio;
        while(pAux->getProximo() != 0){
            pAux=pAux->getProximo();
        }
        pAux->setProximo(novoNo);
        quantidadeElementos++;
    }catch(std::bad_alloc &erro){
        throw QString("O novoNo não pode ser criado!");
    }
}
void ListaLSE::retirarFim(){
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    if(quantidadeElementos==1){
        delete inicio;
        inicio=0;
        quantidadeElementos=0;
        return;
    }
    ejm::No *pAnt=0;
    ejm::No *pAux=inicio;
    while(pAux->getProximo() != 0){
        pAnt=pAux;
        pAux=pAux->getProximo();
    }
    pAnt->setProximo(0);
    quantidadeElementos--;
    delete pAux;
}

Piloto ListaLSE::acessarPosicao(int posicao) const{
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    if(posicao<0||posicao>=quantidadeElementos){
        throw QString ("Posicao invalida!");
    }
    ejm::No *pAux=inicio;
    for(int pular=0;pular<posicao;pular++){
        pAux=pAux->getProximo();
    }
    return pAux->getDado();
}

void ListaLSE::inserirPosicao(int posicao, Piloto dado){
    try{
        if(posicao<0||posicao>quantidadeElementos){
            throw QString ("Posicao invalida!");
        }
        if(posicao==0){
            inserirInicio(dado);
            return;
        }
        No *novoNo=new No(dado);
        ejm::No *pAux = inicio;
        for(int pular=0;pular<posicao-1;pular++){
            pAux=pAux->getProximo();
        }
        novoNo->setProximo(pAux->getProximo());
        pAux->setProximo(novoNo);
        quantidadeElementos++;
    }catch(std::bad_alloc &erro){
        throw QString("O novoNo não pode ser criado!");
    }
}

void ListaLSE::retirarPosicao(int posicao){
    if(estaVazia()){
        throw QString ("Está vazia!");
    }
    if(posicao>quantidadeElementos){
        throw QString ("Posicao invalida!");
    }
    if(posicao==0){
        retirarInicio();
        return;
    }
    ejm::No *pAnt=0;
    ejm::No *pAux= inicio;
    for(int pular=0;pular<posicao;pular++){
        pAnt=pAux;
        pAux=pAux->getProximo();
    }
    pAnt->setProximo(pAux->getProximo());
    quantidadeElementos--;
    delete pAux;
}

void ListaLSE::inserirOrdenadoC(Piloto dado){
    try{
        if(estaVazia()){
            inserirInicio(dado);
            return;
        }
        ejm::No *pAux = inicio;
        for(int pular=0;pular<quantidadeElementos;pular++){
            if(pAux->getDado().getCodigo() > dado.getCodigo()){
                inserirPosicao(pular,dado);
                return;
            }
            pAux=pAux->getProximo();
        }
        inserirFim(dado);
    }catch(std::bad_alloc &erro) {
        throw QString("O novoNo não pode ser criado!");
    }
}

void ListaLSE::inserirOrdenadoD(Piloto dado){
    try{
        if(estaVazia()){
            inserirInicio(dado);
            return;
        }
        ejm::No *pAux = inicio;
        for(int pular=0;pular<quantidadeElementos;pular++){
            if(pAux->getDado().getNome().toLower() < dado.getNome().toLower()){
                inserirPosicao(pular,dado);
                return;
            }
            pAux=pAux->getProximo();
        }
        inserirFim(dado);
    }catch(std::bad_alloc &erro) {
        throw QString("O novoNo não pode ser criado!");
    }
}


}
