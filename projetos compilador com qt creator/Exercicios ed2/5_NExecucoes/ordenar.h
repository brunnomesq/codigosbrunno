#ifndef ORDENAR_H
#define ORDENAR_H
#include <QString>
namespace brn{
class Ordenar
{
private:
    int tamanho;
    int *array;
    int *arraySS;
    int EXECUCOES;
public:
    Ordenar(int tamanho);
    ~Ordenar();
    int getTamanho() const;


    int buscaSequencial(int valor);
    int buscaSequencialSS(int valor);

    int buscaBinaria(int valor);

    void gerador();

    QString toString();
    QString toStringSS();

    void selectionSort();

    int getEXECUCOES() const;
};

}

#endif // ORDENAR_H
