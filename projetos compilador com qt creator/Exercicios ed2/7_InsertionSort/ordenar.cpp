#include "ordenar.h"
#include <QString>
#include <ctime>
namespace brn{


long long Ordenar::getN_exec() const
{
    return n_exec;
}

Ordenar::Ordenar(int tamanho):
    tamanho(0),
    array(0),
    arraySS(0),
    arrayIS(0)
{
    if(tamanho<=0)throw QString("A quantidade nao pode ser menor ou igual a 0");
    try{
        array=new int [tamanho];
        arraySS=new int [tamanho];
        arrayIS=new int[tamanho];
        this->tamanho=tamanho;
        int seed = time(0);
        srand(seed);
        for(int i=0;i<getTamanho();i++){
            array[i]=rand() % 1001;
        }
        for(int i=0;i<tamanho;i++){
            arraySS[i]=array[i];
            arrayIS[i]=array[i];
        }
    }catch(std::bad_alloc&){
        throw QString ("Vetor nao pode ser criado");
    }
}
Ordenar::~Ordenar(){
    if(array) delete[] array;
    if(arraySS) delete [] arraySS;
    if(arrayIS) delete [] arrayIS;
}
int Ordenar::getTamanho() const{
    return tamanho;
}

void Ordenar::insertionSort(){

    if(!arrayIS) throw QString("a problem has acorrud");
    n_exec = 0;
    for (int pos = 1; pos < tamanho ; pos++) {
        int key = arrayIS[pos];
        int j = pos-1;
        while(key<arrayIS[j] && j>=0){
            arrayIS[j+1] = arrayIS[j];
            --j;
            n_exec++;
        }
        n_exec++;
        arrayIS[j+1]= key;
    }


}
void Ordenar::selectionSort(){
    n_exec=0;
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(arraySS[i]<arraySS[minimo]){
                minimo=i;
            }
            n_exec++;
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
QString Ordenar::toStringIS(){
    QString vet_esc="| ";
    for(int i=0;i<getTamanho();i++){
       vet_esc+=QString::number(arrayIS[i])+" | ";
    }
    return vet_esc;
}

}
