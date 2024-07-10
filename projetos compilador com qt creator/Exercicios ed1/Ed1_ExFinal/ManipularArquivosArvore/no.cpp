#include "no.h"

namespace ED1{
int No::getFrequencia() const
{
    return frequencia;
}

void No::setFrequencia(int newFrequencia)
{
    frequencia = newFrequencia;
}

No::No(QString dado):
    dado(dado),
    frequencia(1),
    direita(0),
    esquerda(0)
{
}

No::~No()
{
    std::cout<<"Metodo Destrutor do No Elemento = "<<this->dado.toStdString()<<std::endl;
    if(this->esquerda != 0) delete this->esquerda;
    if(this->direita != 0)  delete this->direita;
}

}
