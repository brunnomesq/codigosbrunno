#ifndef GRAFICO_H
#define GRAFICO_H
#include <QString>
class Grafico
{
public:
    Grafico(int tamanho);
    ~Grafico();

    void inserir(int position, int position2, int weight);
    int alterar(int position, int position2, int weight);
    int remover(int position, int position2);
    int acessar(int position, int position2);
    int getTamanho();

private:
    int tamanho;
    int **matriz = 0;
};


#endif // GRAFICO_H
