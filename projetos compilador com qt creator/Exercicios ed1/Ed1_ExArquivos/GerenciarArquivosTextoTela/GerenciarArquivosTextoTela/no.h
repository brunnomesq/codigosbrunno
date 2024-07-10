#ifndef NO_H
#define NO_H
#include<QString>
#include<piloto.h>
namespace ejm{
class No
{
    //Atributos
private:
    Piloto dado;
    No *proximo;
public:
    No();
    No(Piloto dado);
    Piloto getDado() const;
    void setDado(Piloto newDado);
    No *getProximo() const;
    void setProximo(No *newProximo);
    QString toString()const;
};
}

#endif // NO_H
