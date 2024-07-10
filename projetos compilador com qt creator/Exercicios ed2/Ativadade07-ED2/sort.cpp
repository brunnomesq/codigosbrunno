#include "sort.h"

Sort::Sort(int tamanho):
    array(0),
    arraySSort(0),
    arrayISort(0),
    arrayBSort(0),
    size(0)
{
    if(0>=tamanho) throw QString("tamanho tem que ser maior que 0");
        this->size=tamanho;
    try {
        array = new int[size];
        arraySSort = new int [size];
        arrayISort = new int [size];
        arrayBSort = new int [size];

        srand((unsigned)time(NULL));
        for(int i = 0;i<size;i++){
            array[i]= (rand()%1001);
            arraySSort[i] = array[i];
            arrayISort[i] = array[i];
            arrayBSort[i] = array[i];
        }
    } catch (std::bad_alloc erro) {
        throw QString("Bad alloc");
    }
}

QString Sort::print(){
    QString exit;
      if(!array)throw QString("empty array");
      for(int i = 0 ;i<size;i++){
          exit+= QString::number(array[i])+'|';
      }
      return exit;
}

QString Sort::printSort(int index){
      switch (index) {
      case 0:
          return stringfy(arraySSort);
          break;
      case 1:
          return stringfy(arrayISort);
          break;
      case 2:
          return stringfy(arrayBSort);
          break;
      default:
          return stringfy(array);
          break;
      }
}
QString Sort::stringfy(int array[]){
      QString exit;
      if(!array)throw QString("empty array");
      for(int i = 0 ;i<size;i++){
          exit+= QString::number(array[i])+'|';
      }
      return exit;
}

int Sort::getCount() const
{
      return count;
}
void Sort::selectionSort(){
    if(!array)throw QString("empty array");
    count = 0;
    int minor;
    for(int i =0;i<size;i++){
        for(int j =i+1 ;j<size;j++){
            if(arraySSort[i]>arraySSort[j]){
                minor = arraySSort[j];
                arraySSort[j]=arraySSort[i];
                arraySSort[i]=minor;
            }
            count++;
        }
    }
}
void Sort::insertionSort(){
    if(!arrayISort) throw QString("a problem has acorrud");
    count = 0;
    for (int step = 1; step < size ; step++) {
        int key = arrayISort[step];
        int j = step-1;
        while(key<arrayISort[j] && j>=0){
            arrayISort[j+1] = arrayISort[j];
            --j;
            count++;
        }
        count++;
        arrayISort[j+1]= key;
    }
}
void Sort::bubbleSort(){
    if(!arrayBSort) throw QString("empty array");
    count = 0;
    for(int i=0;i<size-i;i++){
        bool switched = 0;
        for(int j = 0;j<size; j++){
            if(arrayBSort[i]<arrayBSort[j]){
                int smaller = arrayBSort[j];
                arrayBSort[j]=arrayBSort[i];
                arrayBSort[i]= smaller;
                switched = 1;
            }
            count ++;
        }
        if(!switched) return;
    }
}
int Sort::search(int lost){
    if(!array)throw QString("empty array");
    int i =0;
       for(i=0;i<size;i++){
           if(arraySSort[i]==lost){
               return i;
           }
       }
       return -1;
}

int Sort::searchPlus(int lost){
    if(!array)throw QString("empty array");
    int i =0;

       for(i=0;i<size;i++){
           if(arraySSort[i]==lost){
               return i;
           }
           if(arraySSort[i+1]>lost){
               return -1;
           }
       }
       return -1;
}

int Sort::binarieSearch(int lost){
    if(!array)throw QString("empty array");

    int start = 0;
    int end = size-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arraySSort[mid]==lost) return mid;
        if(arraySSort[mid]<lost) start = mid+1;
        else end = mid-1;
    }
    return -1;
}

Sort::~Sort(){
      if(array) delete []array;
}

