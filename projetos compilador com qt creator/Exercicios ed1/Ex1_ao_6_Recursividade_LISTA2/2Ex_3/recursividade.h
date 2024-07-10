#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <QString>
namespace brn{
class Recursividade
{
private:
    int tamanho;
    int *array;
    QString mostrarNumerosR(int aux, int nMenor, QString saida);
public:
    ~Recursividade();
    Recursividade(int tamanho);
    QString mostrarNumeros();
    QString mostrarNumerosI();

    int getTamanho() const;
    int acessar(int indice);

    QString setOrden();
    void gerador();
};
}
#endif // RECURSIVIDADE_H
