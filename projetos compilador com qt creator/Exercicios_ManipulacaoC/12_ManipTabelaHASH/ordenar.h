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
    void ajustarMatri();

    int buscaSequencialN(QString nome);
    int buscaSequencialM(int matricula);

    Dados acessar(int pos);

    int encontrar(QString opcao, QString texto, QString texto2);

    void remover(int matricula, QString nome);
    void inserir(int matricula, QString nome,QString departamento, QString titulacao, QString tipo);
    void alterar(int matricula, QString nome,QString departamento, QString titulacao, QString tipo);

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
