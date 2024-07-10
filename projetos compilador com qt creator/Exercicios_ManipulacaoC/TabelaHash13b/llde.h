#ifndef LLDE_H
#define LLDE_H
#include <no.h>
#include <QString>
#include <docentes.h>
namespace ed2{
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

    void inserirInicio(Docentes dado);
    Docentes acessarInicio()const;
    void retirarInicio();

    Docentes acessarFim() const;
    void inserirFim(Docentes dado);
    void retirarFim();

    void inserirPosicao(Docentes dado, int pos);
    Docentes acessarPosicao(int pos)const;
    void retirarPosicao(int pos);
    void setPosicao(int pos,Docentes dado);


};
}

#endif // LLDE_H
