#ifndef EXCECAO_H
#define EXCECAO_H

#include <QString>
class Excecao
{
private:
    int valor;
public:
    Excecao(int a);
    int getValor(){return valor;}
    void setValor(int x);
};

#endif // EXCECAO_H
