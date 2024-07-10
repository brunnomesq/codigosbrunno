#include "no.h"
namespace ed2{
Docentes No::getDado() const
{
    return dado;
}

void No::setDado(Docentes newDado)
{
    dado = newDado;
}

No *No::getProximo() const
{
    return proximo;
}

void No::setProximo(No *newProximo)
{
    proximo = newProximo;
}
No *No::getAnterior() const
{
    return anterior;
}

void No::setAnterior(No *newAnterior)
{
    anterior = newAnterior;
}
No::No():
    proximo(0)
{
}
No::No(Docentes dado):
    dado(dado),proximo(0)
{
}
/*QString No::toString()const{
    return "| "+QString::number(dado) + " |-> ";
}*/

}

