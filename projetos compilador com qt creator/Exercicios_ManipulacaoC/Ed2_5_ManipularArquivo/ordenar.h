#ifndef ORDENAR_H
#define ORDENAR_H
#include <QString>
#include <dados.h>
namespace brn{
class Ordenar
{
private:
    int tamanho;
    Dados *array;
public:
    Ordenar(int tamanho);
    ~Ordenar();
    int getTamanho() const;
    void gerador(Dados lista, int pos);

    int buscaSequencialN(QString nome);
    int buscaSequencialM(int matricula);

    int buscaBinariaN(QString nome);
    int buscaBinariaM(int matricula);

    Dados acessar(int pos);
    QString acessar2(int pos,int valor);

    int toString(QString opcao, QString texto);

    void selection_sort(int v1, int v2, int v3);


   /* void selectionSortMatricula();
    void selectionSortNome();
    void selectionSortDepartamento();
    void selectionSortTitulacao();
    void selectionSortTipoDeContrato();
    void selectionSortDepTitNome();
    void selectionSortDepTipNome();*/
};

}

#endif // ORDENAR_H
