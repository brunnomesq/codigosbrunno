#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <QString>
namespace brn{
class Recursividade
{
private:
    int numero;
    int potencia;
    QString mostrarNumerosR(int aux, int mult, QString saida)const;
public:
    Recursividade();
    Recursividade(int num,int pot);
    int getNumero() const;
    void setNumero(int newNumero);
    QString mostrarNumeros()const;
    QString mostrarNumerosI()const;
    int getPotencia() const;
    void setPotencia(int newPotencia);
};
}
#endif // RECURSIVIDADE_H
