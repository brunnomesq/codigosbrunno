#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <QString>
namespace brn{
class Recursividade
{
private:
    QString mostrarNumerosR(int aux, double pi, double termo, QString saida)const;
public:
    Recursividade();
    QString mostrarNumeros()const;
    QString mostrarNumerosI();
};
}
#endif // RECURSIVIDADE_H
