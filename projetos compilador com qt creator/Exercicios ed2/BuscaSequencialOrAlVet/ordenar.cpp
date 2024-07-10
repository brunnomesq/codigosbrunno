#include "ordenar.h"
#include <QString>
#include <ctime>
namespace brn{
Ordenar::Ordenar(int tamanho):
    tamanho(0),
    array(0)
{
    if(tamanho<=0)throw QString("A quantidade nao pode ser menor ou igual a 0");
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

void Ordenar::gerador(){
    int seed = time(0);
    srand(seed);
    for(int i=0;i<getTamanho();i++){
        array[i]=rand() % 1001;
    }
}
QString Ordenar::toString(){
    QString vet_esc="| ";
    for(int i=0;i<getTamanho();i++){
       vet_esc+=QString::number(acessar(i))+" | ";
    }
    return vet_esc;
}
int Ordenar::buscaSequencial(int valor){
    for(int pos=0;pos<getTamanho();pos++){
        if(valor == array[pos]){
            return pos;
        }
    }
    return -1;
}

}
