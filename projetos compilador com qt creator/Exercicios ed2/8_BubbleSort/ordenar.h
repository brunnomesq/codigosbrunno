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

    void selectionSort();
    void insertionSort();
    void bubbleSort();

    long long getN_exec() const;
    float getTempo() const;
};

}

#endif // ORDENAR_H
