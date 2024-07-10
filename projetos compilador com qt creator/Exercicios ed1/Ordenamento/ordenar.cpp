#include "ordenar.h"
#include "pilha.h"
#include <QString>
#include <QRandomGenerator>
namespace brn{
Ordenar::Ordenar(int tamanho):
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
Ordenar::~Ordenar(){
    if(array) delete[] array;
}
int Ordenar::getTamanho() const{
    return tamanho;
}
int Ordenar::acessar(int indice){
    return array[indice];
}

//Primeiro empilha o primeiro numero (10), em seguida faz uma verificação se o segundo numero é menor que o primeiro
//ele é menor(4), entao empilha no P1, ok vamos ao terceiro (9),  o terceiro é menor que o segundo (NAO), entao desempilha
//o segundo e empilha o segundo em outra pilha P2. o terceiro é maior que o primeiro? Nao, entao agora sim pode empilhar
// o terceiro elemento na pilha P1. Quando empilhar faz uma verificacao do P2 se ele esta vazio, se nao estiver é pra
//empilhar o que tem no p2 para o p1, caso empilha o segundo numero que esta na pilha p2 para a pilha p1, assim
//estara ordenada
QString Ordenar::setOrden(){
    int num=0;
    int num_p1=0;
    int num_p2=0;
    int tamanho=getTamanho();
    Pilha p1(tamanho);
    Pilha p2(tamanho);

    num=acessar(0);
    p1.empilhar(num);


    for(int i=1;i<tamanho;i++){
        num=acessar(i);
        num_p1=p1.acessar();
        if(num<=num_p1){
           p1.empilhar(num);           
        }else{
           while(num>num_p1){
               p2.empilhar(num_p1);
               p1.desempilhar();
               if(p1.estaVazia()){
                   num_p1=num;
               }else{
                   num_p1=p1.acessar();
               }
           }
           p1.empilhar(num);
           while(!p2.estaVazia()){
               num_p2=p2.acessar();
               p1.empilhar(num_p2);
               p2.desempilhar();
           }
        }
    }
    QString pilha_esc="";
    while(!p1.estaVazia()){
        pilha_esc+=QString::number(p1.acessar())+" ";
        p1.desempilhar();
    }
    return pilha_esc;
}

void Ordenar::gerador(){
    for(int i=0;i<getTamanho();i++){
       *(array+i)=QRandomGenerator::global()->bounded(1, 100);
    }
}

}
