#include "ordenar.h"
#include <QString>
#include <ctime>
namespace brn{
Ordenar::Ordenar(int tamanho):
    tamanho(0),
    array(0),
    arraySS(0)
{
    if(tamanho<=0)throw QString("A quantidade nao pode ser menor ou igual a 0");
    try{
        array=new int [tamanho];
        arraySS=new int [tamanho];
        this->tamanho=tamanho;
        gerador();
        for(int i=0;i<tamanho;i++){
            arraySS[i]=array[i];
        }
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


void Ordenar::gerador(){
    int seed = time(0);
    srand(seed);
    for(int i=0;i<getTamanho();i++){
        array[i]=rand() % 1001;
    }
}
int Ordenar::buscaSequencial(int valor){
    for(int pos=0;pos<getTamanho();pos++){
        if(valor == array[pos]){
            return pos;
        }
    }
    return -1;
}
int Ordenar::buscaSequencialSS(int valor){
    for(int pos=0;pos<getTamanho();pos++){
        if(valor == arraySS[pos]){
            return pos;
        }
        if(arraySS[pos+1]>valor){
            return -1;
        }
    }
    return -1;
}
int Ordenar::buscaBinaria(int valor){
    int menor = 0;
    int maior = tamanho -1;
    while (menor <= maior) {
        int meio = (menor + maior) / 2;
        if (arraySS[meio] == valor){
             return meio;
        }
        if (arraySS[meio] < valor){
            menor = meio + 1;
        }
        else{
            maior = meio - 1;
        }
     }
     return -1;
}
void Ordenar::selectionSort(){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(arraySS[i]<arraySS[minimo]){
                minimo=i;
            }
        }
        int temp= arraySS[pos];
        arraySS[pos]=arraySS[minimo];
        arraySS[minimo]=temp;
    }
}
QString Ordenar::toString(){
    QString vet_esc="| ";
    for(int i=0;i<getTamanho();i++){
       vet_esc+=QString::number(array[i])+" | ";
    }
    return vet_esc;
}
QString Ordenar::toStringSS(){
    QString vet_esc="| ";
    for(int i=0;i<getTamanho();i++){
       vet_esc+=QString::number(arraySS[i])+" | ";
    }
    return vet_esc;
}

}
