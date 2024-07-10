#include "no.h"

namespace les{
int No::getRepeticoes() const
{
    return repeticoes;
}

void No::setRepeticoes(int newRepeticoes)
{
    repeticoes = newRepeticoes;
}

No::No(QString dado):
    dado(dado),
    repeticoes(1),
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
