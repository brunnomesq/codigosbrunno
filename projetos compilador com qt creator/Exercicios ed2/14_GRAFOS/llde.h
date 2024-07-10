#ifndef LLDE_H
#define LLDE_H
#include <no.h>
#include <QString>
class LLDE
{
private:
    No* inicio;
    int quantidadeElementos;
    No* fim;
public:
    LLDE();
    int getQuantidadeElementos() const;
    bool estaVazia()const;

    void inserirInicio(int dado);
    int acessarInicio()const;
    void retirarInicio();

    int acessarFim() const;
    void inserirFim(int dado);
    void retirarFim();

    void inserirPosicao(int dado, int pos);
    int acessarPosicao(int pos)const;
    void retirarPosicao(int pos);

    void inserirOrdenado(int dado);

    QString toStringInicioFim()const;
    QString toStringFimInicio()const;
};

#endif // LLDE_H
