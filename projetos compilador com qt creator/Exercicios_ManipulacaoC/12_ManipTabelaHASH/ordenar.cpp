#include "ordenar.h"
#include <QString>
#include <ctime>
namespace brn{
Ordenar::Ordenar(int tamanho) : tamanho(tamanho){
    if (tamanho <= 0) throw QString("A quantidade não pode ser menor ou igual a 0");
    try {
        array = new Dados[tamanho];
    } catch (std::bad_alloc &) {
        throw QString("Vetor não pode ser criado");
    }
}
Ordenar::~Ordenar(){
    if(array) delete[] array;
}
int Ordenar::getTamanho() const{
    return tamanho;
}

Dados Ordenar::acessar(int pos){
    return array[pos];
}

void Ordenar::gerador(Dados lista, int pos){
    array[pos]=lista;
}
void Ordenar::ajustarMatri(){
    for(int i=0;i<tamanho;i++){
        if(array[i].getMatricula()==0){
            array[i].setMatricula(i);//i+1
        }
    }
}
int Ordenar::buscaSequencialN(QString nome){
    for(int pos=0;pos<getTamanho();pos++){
        if(nome == array[pos].getNome()){
            return pos;
        }
    }
    return -1;
}
int Ordenar::buscaSequencialM(int matricula){
    for(int pos=0;pos<getTamanho();pos++){
        if(matricula == array[pos].getMatricula()){
            return pos;
        }
    }
    return -1;
}



int Ordenar::encontrar(QString opcao, QString texto, QString texto2) {
    int pos;
    int pos1;
    if (opcao == "Busca Nome") {
        QString nome=texto.toUpper();
        pos = buscaSequencialN(nome);
        return pos;
    } else if (opcao == "Busca Matricula") {
        int matricula = texto2.toInt(); // Converta a QString para um inteiro
        pos = buscaSequencialM(matricula);
        if(array[pos].getNome()==""&&array[pos].getDepartamento()==""&&array[pos].getTitulacao()==""
           &&array[pos].getTipo_de_contrato()==""){
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

void Ordenar::remover(int matricula,QString nome){
    if(nome!=""){
        matricula=encontrar("Busca Nome",nome,"");
    }
    if(matricula<=0){
        throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!\n");
    }

        array[matricula].setNome("");

        array[matricula].setDepartamento("");

        array[matricula].setTitulacao("");

        array[matricula].setTipo_de_contrato("");
}
void Ordenar::inserir(int matricula, QString nome, QString departamento, QString titulacao, QString tipo){

    if(matricula<=0){
        throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!");
    }
    if(array[matricula].getNome()==""){
        array[matricula].setNome(nome);
        array[matricula].setDepartamento(departamento);
        array[matricula].setTitulacao(titulacao);
        array[matricula].setTipo_de_contrato(tipo);
    }else{
        throw QString ("O campo deve estar vazio para inserir!");
    }
}
void Ordenar::alterar(int matricula, QString nome, QString departamento, QString titulacao, QString tipo){

    if(matricula<=0||matricula>1000){
        throw QString("O campo da matricula está incorreto ou vazio!");
    }

    if(array[matricula].getNome()!=""){
        array[matricula].setNome(nome);
        array[matricula].setDepartamento(departamento);
        array[matricula].setTitulacao(titulacao);
        array[matricula].setTipo_de_contrato(tipo);

    }else{
        throw QString ("O campo deve conter algo para alterar!");
    }
}
}
