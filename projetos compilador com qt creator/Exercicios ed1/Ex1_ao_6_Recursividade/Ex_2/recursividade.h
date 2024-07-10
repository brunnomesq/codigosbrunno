#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <QString>
namespace brn{
class Recursividade
{
private:
    int numero;
    QString mostrarNumerosR(int aux,QString saida)const;
public:
    Recursividade();
    Recursividade(int num);
    int getNumero() const;
    void setNumero(int newNumero);
    QString mostrarNumeros()const;
    QString mostrarNumerosI()const;
};
}
#endif // RECURSIVIDADE_H
