#ifndef GRAFICO_H
#define GRAFICO_H
#include <QString>
#include <llde.h>
#include <list>
#include <vector>
class Grafico
{
public:
    Grafico(int tamanho);

    void inserir(int i, int j, int peso);
    int alterar(int i, int j, int novoPeso);
    int remover(int i, int j);
    int acessar(int i, int j);
    int getTamanho();

private:
    int tamanho;
    std::vector<std::list<std::pair<int,int>>> lista;
};


#endif // GRAFICO_H
