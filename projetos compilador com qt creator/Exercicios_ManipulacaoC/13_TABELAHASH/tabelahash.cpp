#include "tabelahash.h"
#include <QString>
#include <ctime>
#include <cmath>
#include <QDebug>
namespace brn{

TabelaHash::TabelaHash(int tamanho, int colisoes) : tamanho(tamanho), colisoes(colisoes) {
    if (tamanho <= 0) throw QString("A quantidade não pode ser menor ou igual a 0");
    if (colisoes< 0) throw QString("A colisão não pode ser menor que 0");
    try {
        tamanho = calcularNumeroPrimo(tamanho, colisoes);
        this->tamanho=tamanho;
        tabela = new LLDE*[tamanho]; // Inicializando array como uma nova LLDE
        for (int i = 0; i < tamanho; ++i)
        {
            tabela[i] = new LLDE();
        }


    } catch (std::bad_alloc &) {
        throw QString("Vetor não pode ser criado");
    }
}
TabelaHash::~TabelaHash(){
    if(tabela) delete[] tabela;
}
int TabelaHash::getTamanho() const{
    return tamanho;
}
int TabelaHash::getColisoes()const{
    return colisoes;
}
int TabelaHash::getTamanhoDasChaves(int pos) const{
    return tabela[pos]->getQuantidadeElementos();
}
Dados TabelaHash::getDados(int pos,int chave)const{
    return tabela[pos]->acessarPosicao(chave);
}
int TabelaHash::getChave(int matricula) {
    return matricula % tamanho;
}

int TabelaHash::getPosicaoNaChave(){
    return this->chave;
}
int TabelaHash::CalcularChave(int matricula){
    int posicao=matricula % tamanho;
    int tamanhoNaColisao= tabela[posicao]->getQuantidadeElementos();
    for(int chave=0;chave<tamanhoNaColisao;chave++){
        if(matricula == tabela[posicao]->acessarPosicao(chave).getMatricula()){
            return chave;
        }
    }
    return -1;

}
int TabelaHash::calcularNumeroPrimo(int numero,int colisoes){
    if (numero <= 0)
    {
        throw QString("Tamanho invalido");
    }
    if (colisoes == 0)
    {
        throw QString("Nao foi possivel dividir por 0");
    }
    int divisao = numero / colisoes;
    int primo = 0;
    for (int i = 2; i <= numero && primo < divisao; ++i)
    {
        bool div = false;
        for (int j = 2; j <= sqrt(i) && !div; ++j)
            if (i % j == 0)
                div = true;
        if (!div)
        {
            primo = i;
        }
    }
    return primo;
}

void TabelaHash::gerador(Dados lista, int pos){
    //array[pos]=lista;


    pos = pos%tamanho;

    if (pos >= tamanho){
        throw QString("Chave invalida");
    }
    tabela[pos]->inserirInicio(lista);

}

int TabelaHash::buscaSequencialN(QString nome){
    for(int pos=0;pos<getTamanho();pos++){

        int tamanhoNaColisao= tabela[pos]->getQuantidadeElementos();
        for(int chave=0;chave<tamanhoNaColisao;chave++){
            qDebug()<<nome<<tabela[pos]->acessarPosicao(chave).getNome();
            if(nome == tabela[pos]->acessarPosicao(chave).getNome()){
               this->chave=chave;
               return pos;
            }
        }
    }
    this->chave=-1;
    return -1;
}
int TabelaHash::buscaSequencialM(int matricula){
    int posicao = matricula % tamanho;

        int tamanhoNaColisao= tabela[posicao]->getQuantidadeElementos();
        //qDebug()<<"Posicao "<<pos<<" tamanho da colisao dessa posicao: "<<tamanhoNaColisao;
        for(int chave=0;chave<tamanhoNaColisao;chave++){
            qDebug()<<"Matricula: "<<matricula;

            if(matricula == tabela[posicao]->acessarPosicao(chave).getMatricula()){
                this->chave=chave;
                return posicao;
            }
        }

    this->chave=-1;
    return -1;
}


int TabelaHash::encontrarPos(QString opcao, QString texto, QString texto2) {
    int pos;
    int pos1;
    if (opcao == "Busca Nome") {
        QString nome=texto.toUpper();
        pos = buscaSequencialN(nome);

        return pos;
    } else if (opcao == "Busca Matricula") {
        int matricula = texto2.toInt(); // Converta a QString para um inteiro
        pos = buscaSequencialM(matricula);
        if(pos==-1){
            throw QString("Matricula Incorreta");
        }

        if(tabela[pos]->acessarPosicao(chave).getNome()==""){
           throw QString("A matricula está vazia");
         }
        return pos;
    }else if(opcao=="Busca Nome-Matricula"){
        QString nome=texto.toUpper();
        pos = buscaSequencialN(nome);

        int matricula = texto2.toInt(); // Converta a QString para um inteiro
        pos1 = buscaSequencialM(matricula);

        if(pos!=pos1){
            return -2;
        }
        return pos;
    }
    return -1;
}


void TabelaHash::remover(int matricula,QString nome){
    QString matriculaT=QString::number(matricula);
    int posicao=-1;

    if(matriculaT!="0"){
        posicao=encontrarPos("Busca Matricula","",QString::number(matricula));
    }
    else if(matriculaT=="0"){
        posicao=encontrarPos("Busca Nome",nome,"");
    }
    if(posicao!=-1){
        tabela[posicao]->retirarPosicao(chave);
    }else{
        throw QString("Matricula ou nome inválido");
    }



}
void TabelaHash::inserir(int matricula, QString nome, QString departamento, QString titulacao, QString tipo){
    Dados item(matricula,nome,departamento,titulacao,tipo);
    int matriculaAcessar=buscaSequencialM(matricula);
    if(matricula<=0||matricula>1000||nome==""){
        throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!\n");
    }
    if(matriculaAcessar==-1){
        int posicao=getChave(matricula);
        tabela[posicao]->inserirInicio(item);
    }else{
        throw QString("Essa matrícula já existe!");
    }

}
void TabelaHash::alterar(int matricula, QString nome, QString departamento, QString titulacao, QString tipo){
    Dados item(matricula,nome,departamento,titulacao,tipo);
    int matriculaAcessar=buscaSequencialM(matricula);
    if(matricula<=0||matricula>1000||nome==""){
        throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!\n");
    }
    if(matriculaAcessar!=-1){

        tabela[matriculaAcessar]->setPosicao(chave,item);

    }else{
        throw QString("A matricula não existe!");
    }
}
}
