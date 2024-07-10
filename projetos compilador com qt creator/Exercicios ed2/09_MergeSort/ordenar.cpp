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
    arrayIS(0),
    arrayBB(0),
    arrayMS(0)
{
    if(tamanho<=0)throw QString("A quantidade nao pode ser menor ou igual a 0");
    try{
        array=new int [tamanho];
        arraySS=new int [tamanho];
        arrayIS=new int[tamanho];
        arrayBB=new int[tamanho];
        arrayMS=new int[tamanho];
        this->tamanho=tamanho;
        int seed = time(0);
        srand(seed);
        for(int i=0;i<getTamanho();i++){
            array[i]=rand() % 1001;
        }
        for(int i=0;i<tamanho;i++){
            arraySS[i]=array[i];
            arrayIS[i]=array[i];
            arrayBB[i]=array[i];
            arrayMS[i]=array[i];
        }
    }catch(std::bad_alloc&){
        throw QString ("Vetor nao pode ser criado");
    }
}
Ordenar::~Ordenar(){
    if(array) delete[] array;
    if(arraySS) delete [] arraySS;
    if(arrayIS) delete [] arrayIS;
    if(arrayBB) delete [] arrayBB;
    if(arrayMS) delete [] arrayMS;
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
void Ordenar::bubbleSort() {
    n_exec=0;
    for (int step = 0; step < (tamanho-1); ++step) {
  int swapped = 0;
     for (int i = 0; i < (tamanho-step-1); ++i) {
         if (arrayBB[i] > arrayBB[i + 1]) {
        int temp = arrayBB[i];
        arrayBB[i] = arrayBB[i + 1];
        arrayBB[i + 1] = temp;
         swapped = 1;
       }
         n_exec++;
     }
    if (swapped == 0) return;
   }
  }

void Ordenar::merge(int *arrayAux, int esquerda, int meio, int direita, long long &n_exec) {
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
     L[i] = arrayAux[esquerda + i];
    for (int j = 0; j < n2; j++)
     R[j] = arrayAux[meio + 1 + j];

    int i = 0;
    int j = 0;
    int k = esquerda;
    while (i < n1 && j < n2) {
     n_exec++;
     if (L[i] <= R[j]) {
     arrayAux[k] = L[i];
     i++;
     } else {
     arrayAux[k] = R[j];
     j++;
     }
     k++;
    }

    while (i < n1) {
     arrayAux[k] = L[i];
     i++;
     k++;
    }

    while (j < n2) {
     arrayAux[k] = R[j];
     j++;
     k++;
    }
}

void Ordenar::mergeSortAux(int *arrayAux, int esquerda, int direita, long long &n_exec) {
    if (esquerda >= direita)
     return;
    int m = esquerda + (direita - esquerda) / 2;
    mergeSortAux(arrayAux, esquerda, m, n_exec);
    mergeSortAux(arrayAux, m + 1, direita, n_exec);
    merge(arrayAux, esquerda, m, direita, n_exec);
}

void Ordenar::mergeSort()
{
    n_exec = 0;
    mergeSortAux(arrayMS, 0, tamanho - 1, n_exec);
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
QString Ordenar::toStringBB(){
    QString vet_esc="| ";
    for(int i=0;i<getTamanho();i++){
        vet_esc+=QString::number(arrayBB[i])+" | ";
    }
    return vet_esc;
}

QString Ordenar::toStringMS(){
    QString vet_esc="| ";
    for(int i=0;i<getTamanho();i++){
        vet_esc+=QString::number(arrayMS[i])+" | ";
    }
    return vet_esc;
}
}
