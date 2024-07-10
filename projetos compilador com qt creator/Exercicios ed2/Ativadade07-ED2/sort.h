#ifndef SORT_H
#define SORT_H
#include<QString>

class Sort
{
public:
    Sort(int tamanho);
    ~Sort();

    QString print();
    QString printSort(int index);

    void selectionSort();
    void insertionSort();
    void bubbleSort();

    int search(int lost);
    int searchPlus(int lost);
    int binarieSearch(int lost);

    int getCount() const;

private:
    QString stringfy(int array[]);
    int *array;
    int *arraySSort;
    int *arrayISort;
    int *arrayBSort;
    int size;
    int count;
};

#endif // SORT_H
