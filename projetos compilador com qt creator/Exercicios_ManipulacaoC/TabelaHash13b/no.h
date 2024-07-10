#ifndef NO_H
#define NO_H
#include <QString>
#include <docentes.h>
namespace ed2{

class No
{
    //atributos
private:
    Docentes dado;
    No *proximo;
    No *anterior;
public:
    No();
    No(Docentes dado);

    Docentes getDado() const;
    void setDado(Docentes newDado);
    No *getProximo() const;
    void setProximo(No *newProximo);
    QString toString()const;

    No *getAnterior() const;
    void setAnterior(No *newAnterior);
};
}

#endif // NO_H
