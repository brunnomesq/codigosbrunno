#ifndef ORDENAR_H
#define ORDENAR_H
#include <QString>
namespace brn{
class Ordenar
{
private:
    int tamanho;
    int *array;
public:
    Ordenar(int tamanho);
    ~Ordenar();
    int getTamanho() const;
    int acessar(int indice);
    int buscaSequencial(int valor);
    void gerador();
    QString toString();
};

}

#endif // ORDENAR_H