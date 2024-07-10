#ifndef NO_H
#define NO_H
#include <QString>
#include <dados.h>
namespace brn{

class No
{
    //atributos
private:
    Dados dado;
    No *proximo;
    No *anterior;
public:
    No();
    No(Dados dado);

    Dados getDado() const;
    void setDado(Dados newDado);
    No *getProximo() const;
    void setProximo(No *newProximo);
    QString toString()const;

    No *getAnterior() const;
    void setAnterior(No *newAnterior);
};
}

#endif // NO_H
