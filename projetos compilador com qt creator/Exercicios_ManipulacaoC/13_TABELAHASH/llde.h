#ifndef LLDE_H
#define LLDE_H
#include <no.h>
#include <QString>
#include <dados.h>
namespace brn{
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

    void inserirInicio(Dados dado);
    Dados acessarInicio()const;
    void retirarInicio();

    Dados acessarFim() const;
    void inserirFim(Dados dado);
    void retirarFim();

    void inserirPosicao(Dados dado, int pos);
    Dados acessarPosicao(int pos)const;
    void retirarPosicao(int pos);
    void setPosicao(int pos,Dados dado);

   /* QString toStringInicioFim()const;
    QString toStringFimInicio()const;*/
};
}

#endif // LLDE_H
