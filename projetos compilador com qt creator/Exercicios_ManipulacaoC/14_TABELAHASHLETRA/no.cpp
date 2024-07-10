#include "no.h"
namespace brn{
Dados No::getDado() const
{
    return dado;
}

void No::setDado(Dados newDado)
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
No::No(Dados dado):
    dado(dado),proximo(0)
{
}
/*QString No::toString()const{
    return "| "+QString::number(dado) + " |-> ";
}*/

}

