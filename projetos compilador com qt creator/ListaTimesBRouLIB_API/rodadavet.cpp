#include "rodadavet.h"


int RodadaVet::getRodada() const
{
    return rodada;
}

void RodadaVet::setRodada(int newRodada)
{
    rodada = newRodada;
}

const QString &RodadaVet::getInfo() const
{
    return info;
}

RodadaVet::RodadaVet():rodada(0),info(""){}
RodadaVet::RodadaVet(int rodada, QString info):
    rodada(rodada),info(info)
{
}
