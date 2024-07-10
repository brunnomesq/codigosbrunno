#ifndef NO_H
#define NO_H
#include <QString>
class No
{
    //atributos
private:
    int dado;
    No *proximo;
    No *anterior;
public:
    No();
    No(int dado);

    int getDado() const;
    void setDado(int newDado);
    No *getProximo() const;
    void setProximo(No *newProximo);
    QString toString()const;

    No *getAnterior() const;
    void setAnterior(No *newAnterior);
};


#endif // NO_H
