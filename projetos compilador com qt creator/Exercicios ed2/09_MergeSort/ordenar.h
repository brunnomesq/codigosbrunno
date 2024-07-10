#ifndef ORDENAR_H
#define ORDENAR_H
#include <QString>
#include <QTime>
namespace brn{
class Ordenar
{
private:
    int tamanho;
    int *array;
    int *arraySS;
    int *arrayIS;
    int *arrayBB;
    int *arrayMS;
    long long n_exec;
    float tempo=0;
public:
    Ordenar(int tamanho);
    ~Ordenar();
    int getTamanho() const;


    QString toString();
    QString toStringSS();
    QString toStringIS();
    QString toStringBB();
    QString toStringMS();

    void selectionSort();
    void insertionSort();
    void bubbleSort();
    void mergeSort();
    void merge(int *arrayAux, int esquerda, int meio, int direita, long long &n_exec);
    void mergeSortAux(int *arrayAux, int esquerda, int direita, long long  &n_exec);

    long long getN_exec() const;
    float getTempo() const;
};

}

#endif // ORDENAR_H
