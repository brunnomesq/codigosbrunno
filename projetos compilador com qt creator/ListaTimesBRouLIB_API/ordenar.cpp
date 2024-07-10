#include "ordenar.h"
#include <QString>
#include <ctime>

Ordenar::Ordenar(int tamanho):
    tamanho(0)
{
    if(tamanho<=0)throw QString("A quantidade nao pode ser menor ou igual a 0");
    try{
        array=new RodadaVet [tamanho];
        this->tamanho=tamanho;
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


void Ordenar::gerador(RodadaVet info, int pos){
    array[pos]=info;
}
RodadaVet Ordenar::acessar(int pos){
    return array[pos];
}
void Ordenar::selectionSort(){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(array[i].getRodada()<array[minimo].getRodada()){
                minimo=i;
            }
        }
        RodadaVet temp= array[pos];
        array[pos]=array[minimo];
        array[minimo]=temp;
    }
}



