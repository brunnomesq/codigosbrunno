#ifndef VETOR_H
#define VETOR_H
#include <QString>
namespace brn{
class Vetor
{
private:
    int tamanho;
    int *array;
public:
    Vetor(int tamanho);
    ~Vetor();
    int getTamanho() const;
    int acessar(int indice);

    QString setOrden();
    void gerador();

};

}

#endif // VETOR_H
