#include "funcoes.h"
#include <QString>
#include <ctime>
#include <cmath>
#include <QDebug>
namespace ed2 {
    Funcoes::Funcoes(int tamanho, int colisoes) : tamanho(tamanho), colisoes(colisoes) {
        if (tamanho <= 0) throw QString("A quantidade não pode ser menor ou igual a 0");
        if (colisoes < 0) throw QString("A colisão não pode ser menor que 0");
        try {
            this->tamanho=tamanho;
            tabela = new LLDE*[tamanho];
            for (int i = 0; i < tamanho; ++i)
            {
                tabela[i] = new LLDE();
            }
        } catch (std::bad_alloc &) {
            throw QString("Vetor não pode ser criado");
        }
    }

    Funcoes::~Funcoes() {
        if (tabela) delete[] tabela;
    }

    int Funcoes::obterTamanho() const {
        return tamanho;
    }

    int Funcoes::obterColisoes() const {
        return colisoes;
    }

    int Funcoes::obterTamanhoDasChaves(int pos) const {
        return tabela[pos]->getQuantidadeElementos();
    }

    Docentes Funcoes::obterDados(int pos, int chave) const {
        return tabela[pos]->acessarPosicao(chave);
    }

    int Funcoes::obterChave(int matricula) {
        return matricula % tamanho;
    }

    int Funcoes::obterPosicaoNaChave() {
        return this->chave;
    }



    void Funcoes::gerar(Docentes lista, QString nome) {
        //qDebug()<<"Entrou aqui!";
        QChar Pletra=nome.at(0);
        char asciiValue = Pletra.toLatin1();
        int valorAscii=asciiValue;
        tabela[valorAscii-65]->inserirFim(lista);
        //qDebug()<<lista.getNome()<<" na letra "<<nome.at(0);
    }

    int Funcoes::buscarSequencialNome(QString nome, int ASCII) {
        int tamanhoNaColisao= tabela[ASCII-65]->getQuantidadeElementos();
        for(int chave=0;chave<tamanhoNaColisao;chave++){
            //qDebug()<<nome<<tabela[ASCII-65]->acessarPosicao(chave).getNome();
            if(nome == tabela[ASCII-65]->acessarPosicao(chave).getNome()){
               this->chave=chave;
               return chave;
            }
        }
    this->chave=-1;
    return -1;
    }

    int Funcoes::buscarSequencialMatricula(int matricula, int ASCII) {
        int tamanhoNaColisao= tabela[ASCII-65]->getQuantidadeElementos();
        for(int chave=0;chave<tamanhoNaColisao;chave++){
            if(matricula == tabela[ASCII-65]->acessarPosicao(chave).getMatricula()){
                this->chave=chave;
                return chave;
            }
        }

    this->chave=-1;
    return -1;
    }
    int Funcoes::buscaLetra(int matricula){
        for(int i=0;i<26;i++){
           int tamanhoNaColisao= tabela[i]->getQuantidadeElementos();
           for(int chave=0;chave<tamanhoNaColisao;chave++){
               if(matricula == tabela[i]->acessarPosicao(chave).getMatricula()){
                   return i+65;
               }
           }
        }
        return -1;
    }
    int Funcoes::encontrarPosicao(QString opcao, QString texto, QString texto2,QString letra) {
        int pos;
        int pos1;
        QChar Pletra=letra.at(0);
        char asciiValue = Pletra.toLatin1();
        int valorAscii=asciiValue;
        if (opcao == "Busca Nome") {
            QString nome=texto.toUpper();
            pos = buscarSequencialNome(nome,valorAscii);

            return pos;
        } else if (opcao == "Busca Matricula") {
            int matricula = texto2.toInt(); // Converta a QString para um inteiro
            pos = buscarSequencialMatricula(matricula,valorAscii);
            if(pos==-1){
                throw QString("Matricula Incorreta");
            }
            if(tabela[valorAscii-65]->acessarPosicao(pos).getNome()==""){
               throw QString("A matricula está vazia");
            }
            return pos;
        }else if(opcao=="Busca Nome-Matricula"){
            QString nome=texto.toUpper();
            pos = buscarSequencialNome(nome,valorAscii);

            int matricula = texto2.toInt(); // Converta a QString para um inteiro
            pos1 = buscarSequencialMatricula(matricula,valorAscii);

            if(pos!=pos1){
                return -2;
            }
            return pos;
        }
        return -1;
    }

    void Funcoes::remover(int matricula, QString nome, QString letra) {
        QString matriculaT=QString::number(matricula);
        //QString letraNome=nome.toUpper().at(0);
        QChar Pletra=letra.toUpper().at(0);
        char asciiValue = Pletra.toLatin1();
        int valorAscii=asciiValue;
        int posicao=-1;

        if(matriculaT!="0"){
            posicao=encontrarPosicao("Busca Matricula","",QString::number(matricula),letra);
        }
        else if(matriculaT=="0"){
            posicao=encontrarPosicao("Busca Nome",nome,"",letra);
        }
        if(posicao!=-1){
            tabela[valorAscii-65]->retirarPosicao(posicao);
        }else{
            throw QString("Matricula ou nome inválido");
        }

    }

    void Funcoes::inserir(int matricula, QString nome, QString departamento, QString titulacao, QString tipo, QString letra) {
        nome=nome.toUpper();
        Docentes item(matricula,nome,departamento,titulacao,tipo);
        QChar Pletra=letra.at(0);
        char asciiValue = Pletra.toLatin1();
        int valorAscii=asciiValue;
        int matriculaAcessar=buscarSequencialMatricula(matricula,valorAscii);
        if(matricula<=0||matricula>1000||nome==""){
            throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!\n");
        }
        if(matriculaAcessar==-1){
            tabela[valorAscii-65]->inserirInicio(item);
        }else{
            throw QString("Essa matrícula já existe!");
        }
    }

    void Funcoes::alterar(int matricula, QString nome, QString departamento, QString titulacao, QString tipo, QString letra) {
        nome=nome.toUpper();
        Docentes item(matricula,nome,departamento,titulacao,tipo);
        QChar Pletra=letra.at(0);
        char asciiValue = Pletra.toLatin1();
        int valorAscii=asciiValue;
        int matriculaAcessar=buscarSequencialMatricula(matricula,valorAscii);
        if(matricula<=0||matricula>1000||nome==""){
            throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!\n");
        }
        if(matriculaAcessar!=-1){
            tabela[valorAscii-65]->setPosicao(matriculaAcessar,item);
        }else{
            throw QString("A matricula não existe!");
        }
    }
}
