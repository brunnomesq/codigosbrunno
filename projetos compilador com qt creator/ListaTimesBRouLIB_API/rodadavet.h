#ifndef RODADAVET_H
#define RODADAVET_H
#include <QString>

class RodadaVet
{
private:
    int rodada;
    QString info;
public:
    RodadaVet();
    RodadaVet(int rodada, QString info);
    int getRodada() const;
    void setRodada(int newRodada);
    const QString &getInfo() const;
};

#endif // RODADAVET_H
