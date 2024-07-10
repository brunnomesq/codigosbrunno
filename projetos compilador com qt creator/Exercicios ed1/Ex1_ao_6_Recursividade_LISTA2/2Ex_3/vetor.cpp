#include "vetor.h"
#include <QString>
#include <QRandomGenerator>
namespace brn{
Vetor::Vetor(int tamanho):
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
Vetor::~Vetor(){
    if(array) delete[] array;
}
int Vetor::getTamanho() const{
    return tamanho;
}
int Vetor::acessar(int indice){
    return array[indice];
}


void Vetor::gerador(){
    for(int i=0;i<getTamanho();i++){
       *(array+i)=QRandomGenerator::global()->bounded(1, 100);
    }
}

}
