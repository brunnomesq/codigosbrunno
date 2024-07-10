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

    QString setOrden();
    void gerador();

};

}

#endif // ORDENAR_H
