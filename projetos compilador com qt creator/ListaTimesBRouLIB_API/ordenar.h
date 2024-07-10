#ifndef ORDENAR_H
#define ORDENAR_H
#include <QString>
#include <rodadavet.h>
class Ordenar
{
private:


    int tamanho;
    RodadaVet *array;

public:

    Ordenar(int tamanho);
    ~Ordenar();
    int getTamanho() const;

    void gerador(RodadaVet info, int pos);

    RodadaVet acessar(int pos);
    void selectionSort();
};


#endif // ORDENAR_H
