#ifndef LLSE_H
#define LLSE_H
#include<no.h>
#include<piloto.h>
namespace ejm{
class ListaLSE
{
    //Atributos
private:
    No *inicio;
    int quantidadeElementos;
public:
    ListaLSE();
    int getQuantidadeElementos() const;
    bool estaVazia()const;

    void inserirInicio(Piloto dado);
    Piloto acessarInicio()const;
    void retirarInicio();

    void inserirFim(Piloto dado);
    Piloto acessarFim()const;
    void retirarFim();

    Piloto acessarPosicao(int posicao)const;
    void inserirPosicao(int posicao, Piloto dado);
    void retirarPosicao(int posicao);

    void inserirOrdenadoC(Piloto dado);
    void inserirOrdenadoD(Piloto dado);

    QString toString()const;
};
}
#endif // LLSE_H
