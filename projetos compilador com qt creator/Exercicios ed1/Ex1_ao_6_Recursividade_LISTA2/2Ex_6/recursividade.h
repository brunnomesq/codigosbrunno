#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <QString>
namespace brn{
class Recursividade
{
private:
    int numero;
    int numero2;
    QString mostrarNumerosR(int aux, int mult, QString saida)const;
public:
    Recursividade();
    Recursividade(int num, int num2);
    int getNumero() const;
    void setNumero(int newNumero);
    QString mostrarNumeros()const;
    QString mostrarNumerosI()const;
    int getNumero2() const;
    void setNumero2(int newNumero2);
};
}
#endif // RECURSIVIDADE_H
